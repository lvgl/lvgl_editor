/**
 * @file icon_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "icon_gen.h"
#include "ui.h"

/*********************
 *      DEFINES
 *********************/

#define SIZE 14

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

lv_obj_t * icon_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t main;
    static lv_style_t off;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&main);
        lv_style_set_width(&main, SIZE);
        lv_style_set_height(&main, SIZE);
        lv_style_set_image_recolor(&main, lv_color_hex(0xffffff));
        lv_style_set_image_recolor_opa(&main, 255);

        lv_style_init(&off);
        lv_style_set_image_opa(&off, 128);

        style_inited = true;
    }

    lv_obj_t * lv_image_0 = lv_image_create(parent);
    lv_image_set_src(lv_image_0, img_bell);
    lv_image_set_inner_align(lv_image_0, LV_IMAGE_ALIGN_STRETCH);
    lv_obj_add_style(lv_image_0, &main, 0);
    lv_obj_add_style(lv_image_0, &off, LV_STATE_DISABLED);


    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_image_0, "icon_#");

    return lv_image_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/