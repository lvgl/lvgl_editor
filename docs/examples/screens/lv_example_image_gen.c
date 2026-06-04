/**
 * @file lv_example_image_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_image_gen.h"
#include "../examples.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * lv_example_image_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_tint;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_tint);
        lv_style_set_image_recolor(&style_tint, lv_color_hex(0x3b82f6));
        lv_style_set_image_recolor_opa(&style_tint, (255 * 80 / 100));

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_image_#");
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_flex_main_place(lv_obj_0, LV_FLEX_ALIGN_SPACE_EVENLY, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_track_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);

    lv_obj_t * lv_image_0 = lv_image_create(lv_obj_0);
    lv_image_set_src(lv_image_0, img_logo);

    lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
    lv_image_set_src(lv_image_1, img_logo);
    lv_image_set_rotation(lv_image_1, 300);
    lv_image_set_scale_x(lv_image_1, 580);
    lv_image_set_scale_y(lv_image_1, 180);

    lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
    lv_image_set_src(lv_image_2, img_logo);
    lv_obj_add_style(lv_image_2, &style_tint, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

