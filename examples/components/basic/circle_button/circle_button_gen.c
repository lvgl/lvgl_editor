/**
 * @file circle_button_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "circle_button_gen.h"
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

lv_obj_t * circle_button_create(lv_obj_t * parent, const void * icon)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_base;
    static lv_style_t style_pressed;
    static lv_style_t style_icon;
    static lv_style_t style_dark;
    static lv_style_t style_pressed_dark;
    static lv_style_t style_icon_dark;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_base);
        lv_style_set_width(&style_base, 44);
        lv_style_set_height(&style_base, 44);
        lv_style_set_bg_color(&style_base, BG_SECONDARY_LIGHT);
        lv_style_set_bg_opa(&style_base, (255 * 100 / 100));
        lv_style_set_radius(&style_base, 200);
        lv_style_set_pad_all(&style_base, 0);

        lv_style_init(&style_pressed);
        lv_style_set_recolor_opa(&style_pressed, (255 * 20 / 100));
        lv_style_set_recolor(&style_pressed, SURFACE_PRIMARY_DARK);

        lv_style_init(&style_icon);
        lv_style_set_image_recolor(&style_icon, SURFACE_PRIMARY_DARK);
        lv_style_set_image_recolor_opa(&style_icon, 255);

        lv_style_init(&style_dark);
        lv_style_set_bg_color(&style_dark, BG_SECONDARY_DARK);

        lv_style_init(&style_pressed_dark);
        lv_style_set_recolor(&style_pressed_dark, SURFACE_PRIMARY_LIGHT);

        lv_style_init(&style_icon_dark);
        lv_style_set_image_recolor(&style_icon_dark, SURFACE_PRIMARY_LIGHT);
        lv_style_set_image_recolor_opa(&style_icon_dark, 255);

        style_inited = true;
    }

    lv_obj_t * lv_button_0 = lv_button_create(parent);

    lv_obj_remove_style_all(lv_button_0);
    lv_obj_add_style(lv_button_0, &style_base, 0);
    lv_obj_add_style(lv_button_0, &style_pressed, LV_STATE_PRESSED);
    lv_obj_bind_style(lv_button_0, &style_dark, 0, &dark_theme, 0);
    lv_obj_bind_style(lv_button_0, &style_pressed_dark, LV_STATE_PRESSED, &dark_theme, 1);
    lv_obj_t * lv_image_0 = lv_image_create(lv_button_0);
    lv_image_set_src(lv_image_0, icon);
    lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
    lv_obj_add_style(lv_image_0, &style_icon, 0);
    lv_obj_bind_style(lv_image_0, &style_icon_dark, 0, &dark_theme, 1);



    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_button_0, "circle_button_#");

    return lv_button_0;
}



/**********************
 *   STATIC FUNCTIONS
 **********************/

