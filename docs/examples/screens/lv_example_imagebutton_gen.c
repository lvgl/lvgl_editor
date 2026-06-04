/**
 * @file lv_example_imagebutton_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_imagebutton_gen.h"
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

lv_obj_t * lv_example_imagebutton_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_pressed;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_pressed);
        lv_style_set_transform_width(&style_pressed, 10);
        lv_style_set_image_recolor(&style_pressed, lv_color_hex3(0x000));
        lv_style_set_image_recolor_opa(&style_pressed, (255 * 20 / 100));

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_imagebutton_#");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

