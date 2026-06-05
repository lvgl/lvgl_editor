#!/bin/bash

set -e

STARTER_PATH=`pwd`
PROJ_PATH=`pwd`/lvgl_editor

export PATH="/usr/lib/ccache:/usr/local/opt/ccache/libexec:$PATH"

echo Clone the Emscripten port
echo -------------------------


if true; then
    rm -rf emscripten_builder
    git clone https://github.com/lvgl/lv_sim_emscripten.git emscripten_builder
    cd emscripten_builder
    git submodule update --init --single-branch -- lvgl
    cd lvgl
    git pull origin master
fi

EMSCRIPTEN_BUILDER_PATH=$STARTER_PATH/emscripten_builder
LVGL_PATH=$EMSCRIPTEN_BUILDER_PATH/lvgl
echo EMSCRIPTEN_BUILDER_PATH: $EMSCRIPTEN_BUILDER_PATH
echo LVGL_PATH: $LVGL_PATH

echo Generate example list
echo ---------------------

# Replace the lvgl examples with the lvgl_editor exmamples so that emscripten will build them
rm -r $LVGL_PATH/examples
cp -r $PROJ_PATH/examples $LVGL_PATH
EXAMPLE_LIST_C=$EMSCRIPTEN_BUILDER_PATH/examplelist.c
$STARTER_PATH/lvgl_editor/docs/scripts/genexamplelist.sh > $EXAMPLE_LIST_C
cat $EXAMPLE_LIST_C

echo Generate lv_conf
echo ----------------

# Generate lv_conf
LV_CONF_PATH=$LVGL_PATH/configs/ci/docs/lv_conf_docs.h
python $LVGL_PATH/scripts/generate_lv_conf.py \
  --template $LVGL_PATH/lv_conf_template.h \
  --config $LV_CONF_PATH \
  --defaults $LVGL_PATH/configs/ci/docs/lv_conf_docs.defaults

echo Build the examples
echo ------------------

cd $EMSCRIPTEN_BUILDER_PATH
emcmake cmake -B cmbuild -GNinja -DLV_BUILD_CONF_PATH=$LV_CONF_PATH -DLVGL_CHOSEN_DEMO=lv_example_noop -DCMAKE_C_COMPILER_LAUNCHER=ccache -DCMAKE_CXX_COMPILER_LAUNCHER=ccache
cmake --build cmbuild


echo Copy the built examples
echo -----------------------


rm -rf cmbuild/CMakeFiles
cp -a cmbuild $STARTER_PATH/lvgl_editor/docs/built_lv_examples
