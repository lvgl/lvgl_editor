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

lv_obj_t * circle_button_create(lv_obj_t * parent, void * icon_image)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t button;
    static lv_style_t light;
    static lv_style_t dark;
    static lv_style_t button_pressed;
    static lv_style_t button_pressed_light;
    static lv_style_t button_pressed_dark;
    static lv_style_t icon_light;
    static lv_style_t icon_dark;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&button);
        lv_style_set_width(&button, 44);
        lv_style_set_height(&button, 44);
        lv_style_set_radius(&button, lv_pct(50));
        lv_style_set_shadow_width(&button, 0);
        lv_style_set_pad_all(&button, 0);

        lv_style_init(&light);
        lv_style_set_bg_color(&light, BG_SECONDARY_LIGHT);

        lv_style_init(&dark);
        lv_style_set_bg_color(&dark, BG_SECONDARY_DARK);

        lv_style_init(&button_pressed);
        lv_style_set_recolor_opa(&button_pressed, 40);
        lv_style_set_transform_width(&button_pressed, 0);
        lv_style_set_transform_height(&button_pressed, 0);

        lv_style_init(&button_pressed_light);
        lv_style_set_recolor(&button_pressed_light, SURFACE_PRIMARY_DARK);

        lv_style_init(&button_pressed_dark);
        lv_style_set_recolor(&button_pressed_dark, SURFACE_PRIMARY_LIGHT);

        lv_style_init(&icon_light);
        lv_style_set_image_recolor(&icon_light, SURFACE_PRIMARY_LIGHT);
        lv_style_set_image_recolor_opa(&icon_light, 255);

        lv_style_init(&icon_dark);
        lv_style_set_image_recolor(&icon_dark, SURFACE_PRIMARY_DARK);
        lv_style_set_image_recolor_opa(&icon_dark, 255);

        style_inited = true;
    }

    lv_obj_t * lv_button_0 = lv_button_create(parent);
    lv_obj_add_style(lv_button_0, &button, 0);
    lv_obj_bind_style(lv_button_0, &light, 0, &theme, 0);
    lv_obj_bind_style(lv_button_0, &dark, 0, &theme, 1);
    lv_obj_add_style(lv_button_0, &button_pressed, LV_STATE_PRESSED);
    lv_obj_add_style(lv_button_0, &button_pressed_light, LV_STATE_PRESSED);
    lv_obj_bind_style(lv_button_0, &button_pressed_dark, LV_STATE_PRESSED, &theme, 1);

    lv_obj_t * lv_image_0 = lv_image_create(lv_button_0);
    lv_image_set_src(lv_image_0, icon_image);
    lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);
    lv_obj_bind_style(lv_image_0, &icon_light, 0, &theme, 0);
    lv_obj_bind_style(lv_image_0, &icon_dark, 0, &theme, 1);



    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_button_0, "circle_button_#");

    return lv_button_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/