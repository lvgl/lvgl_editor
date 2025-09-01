/**
 * @file bar_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "bar_gen.h"
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

lv_obj_t * bar_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    static lv_style_t style_indicator;
    static lv_style_t style_dark;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_main);
        lv_style_set_bg_color(&style_main, SURFACE_PRIMARY_LIGHT);
        lv_style_set_bg_opa(&style_main, OPA_MUTED);
        lv_style_set_radius(&style_main, 20);
        lv_style_set_height(&style_main, UNIT_SM);

        lv_style_init(&style_indicator);
        lv_style_set_bg_color(&style_indicator, SURFACE_PRIMARY_LIGHT);
        lv_style_set_bg_opa(&style_indicator, (255 * 100 / 100));
        lv_style_set_radius(&style_indicator, 20);

        lv_style_init(&style_dark);
        lv_style_set_bg_color(&style_dark, SURFACE_PRIMARY_DARK);

        style_inited = true;
    }

    lv_obj_t * lv_bar_0 = lv_bar_create(parent);
    lv_obj_remove_style_all(lv_bar_0);
    lv_obj_add_style(lv_bar_0, &style_main, 0);
    lv_obj_add_style(lv_bar_0, &style_indicator, LV_PART_INDICATOR);
    lv_obj_bind_style(lv_bar_0, &style_dark, 0, &dark_theme, 1);
    lv_obj_bind_style(lv_bar_0, &style_dark, LV_PART_INDICATOR, &dark_theme, 1);


    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_bar_0, "bar_#");

    return lv_bar_0;
}



/**********************
 *   STATIC FUNCTIONS
 **********************/

