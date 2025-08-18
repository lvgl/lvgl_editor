/**
 * @file elements_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "elements_gen.h"
#include "ui.h"

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

lv_obj_t * elements_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t light;
    static lv_style_t dark;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&light);
        lv_style_set_bg_color(&light, BG_BASE_LIGHT);

        lv_style_init(&dark);
        lv_style_set_bg_color(&dark, BG_BASE_DARK);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_style_pad_all(lv_obj_0, 50, 0);
    lv_obj_bind_style(lv_obj_0, &light, 0, &theme, 0);
    lv_obj_bind_style(lv_obj_0, &dark, 0, &theme, 1);

    lv_obj_t * button_0 = button_create(lv_obj_0, "Button label");


    lv_obj_t * image = lv_image_create(lv_obj_0);
    lv_obj_set_name(image, "image");



    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "elements");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/