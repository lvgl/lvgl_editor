/**
 * @file button_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "button_gen.h"
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

lv_obj_t * button_create(lv_obj_t * parent, const char * label)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t light;
    static lv_style_t dark;
    static lv_style_t button;
    static lv_style_t button_pressed;
    static lv_style_t button_pressed_light;
    static lv_style_t button_pressed_dark;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&light);
        lv_style_set_bg_color(&light, SURFACE_PRIMARY_LIGHT);
        lv_style_set_text_color(&light, TEXT_ON_SURFACE_PRIMARY_LIGHT);

        lv_style_init(&dark);
        lv_style_set_bg_color(&dark, SURFACE_PRIMARY_DARK);
        lv_style_set_text_color(&dark, TEXT_ON_SURFACE_PRIMARY_DARK);

        lv_style_init(&button);
        lv_style_set_pad_hor(&button, 16);
        lv_style_set_pad_ver(&button, 12);
        lv_style_set_radius(&button, 10);
        lv_style_set_shadow_width(&button, 0);
        lv_style_set_text_font(&button, geist_bold_16);
        lv_style_set_text_align(&button, LV_TEXT_ALIGN_CENTER);

        lv_style_init(&button_pressed);
        lv_style_set_text_opa(&button_pressed, 255);
        lv_style_set_radius(&button_pressed, 10);
        lv_style_set_recolor_opa(&button_pressed, 40);
        lv_style_set_transform_width(&button_pressed, 0);
        lv_style_set_transform_height(&button_pressed, 0);

        lv_style_init(&button_pressed_light);
        lv_style_set_recolor(&button_pressed_light, SURFACE_PRIMARY_DARK);

        lv_style_init(&button_pressed_dark);
        lv_style_set_recolor(&button_pressed_dark, SURFACE_PRIMARY_LIGHT);

        style_inited = true;
    }

    lv_obj_t * lv_button_0 = lv_button_create(parent);
    lv_obj_set_width(lv_button_0, lv_pct(100));
    lv_obj_bind_style(lv_button_0, &light, 0, &theme, 0);
    lv_obj_bind_style(lv_button_0, &dark, 0, &theme, 1);
    lv_obj_add_style(lv_button_0, &button, 0);
    lv_obj_add_style(lv_button_0, &button_pressed, LV_STATE_PRESSED);
    lv_obj_add_style(lv_button_0, &button_pressed_light, LV_STATE_PRESSED);
    lv_obj_bind_style(lv_button_0, &button_pressed_dark, LV_STATE_PRESSED, &theme, 1);

    lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_0, label);
    lv_obj_set_width(lv_label_0, lv_pct(100));



    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_button_0, "button_#");

    return lv_button_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/