# This basic file is used to compile the runtime for the Editor preview.
# It is also intended for you to customize it for your own target/project.

# Only set project if this is the top-level CMakeLists.txt
if (CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
  cmake_minimum_required(VERSION 3.10)
  # can be customized
  project(LVGLProject)
  set(IS_TOP_LEVEL TRUE)
else()
  set(IS_TOP_LEVEL FALSE)
endif()

# This includes the generated list of .c files
include(${CMAKE_CURRENT_LIST_DIR}/file_list_gen.cmake)

# Create the UI sources as a library
add_library(lib-ui ${PROJECT_SOURCES})

# You may use this check to add configuration when compiling for the Editor preview,
# or for your target.
if (LV_EDITOR_PREVIEW)
    # things for the Preview
else ()
    # things for your target

    # set your include directories here, don't forget LVGL!
endif ()

if (IS_TOP_LEVEL)
  # Do something when this is your top level cmakelists.txt
else()
  # Do something else if it's not your top level cmakelists.txt
endif()