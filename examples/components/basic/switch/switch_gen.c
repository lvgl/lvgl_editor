/**
 * @file switch_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "switch_gen.h"
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

lv_obj_t * switch_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t switch_knob;
    static lv_style_t switch_knob_light;
    static lv_style_t switch_knob_dark;
    static lv_style_t switch_main_light;
    static lv_style_t switch_main_dark;
    static lv_style_t switch_indicator_light;
    static lv_style_t switch_indicator_dark;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&switch_knob);
        lv_style_set_pad_all(&switch_knob, -4);
        lv_style_set_shadow_opa(&switch_knob, 0);

        lv_style_init(&switch_knob_light);
        lv_style_set_bg_color(&switch_knob_light, BG_PRIMARY_LIGHT);

        lv_style_init(&switch_knob_dark);
        lv_style_set_bg_color(&switch_knob_dark, BG_PRIMARY_DARK);

        lv_style_init(&switch_main_light);
        lv_style_set_bg_color(&switch_main_light, SURFACE_PRIMARY_LIGHT);
        lv_style_set_bg_opa(&switch_main_light, 24);

        lv_style_init(&switch_main_dark);
        lv_style_set_bg_color(&switch_main_dark, SURFACE_PRIMARY_DARK);
        lv_style_set_bg_opa(&switch_main_dark, 24);

        lv_style_init(&switch_indicator_light);
        lv_style_set_bg_color(&switch_indicator_light, SURFACE_PRIMARY_LIGHT);

        lv_style_init(&switch_indicator_dark);
        lv_style_set_bg_color(&switch_indicator_dark, SURFACE_PRIMARY_DARK);

        style_inited = true;
    }

    lv_obj_t * lv_switch_0 = lv_switch_create(parent);
    lv_obj_set_width(lv_switch_0, 48);
    lv_obj_set_height(lv_switch_0, 32);

    lv_obj_add_style(lv_switch_0, &switch_knob, LV_PART_KNOB);
    lv_obj_add_style(lv_switch_0, &switch_knob_light, LV_PART_KNOB);
    lv_obj_add_style(lv_switch_0, &switch_main_light, LV_PART_MAIN);
    lv_obj_add_style(lv_switch_0, &switch_indicator_light, LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_bind_style(lv_switch_0, &switch_knob_dark, LV_PART_KNOB, &dark_theme, 1);
    lv_obj_bind_style(lv_switch_0, &switch_main_dark, LV_PART_MAIN, &dark_theme, 1);
    lv_obj_bind_style(lv_switch_0, &switch_indicator_dark, LV_PART_INDICATOR | LV_STATE_CHECKED, &dark_theme, 1);


    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_switch_0, "switch_#");

    return lv_switch_0;
}



/**********************
 *   STATIC FUNCTIONS
 **********************/

