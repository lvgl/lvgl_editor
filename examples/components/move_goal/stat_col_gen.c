/**
 * @file stat_col_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "stat_col_gen.h"
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

lv_obj_t * stat_col_create(lv_obj_t * parent, int32_t move, const char * day)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t main;
    static lv_style_t main_light;
    static lv_style_t main_dark;
    static lv_style_t slider_main_light;
    static lv_style_t slider_main_dark;
    static lv_style_t indicator_light;
    static lv_style_t indicator_dark;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&main);
        lv_style_set_layout(&main, LV_LAYOUT_FLEX);
        lv_style_set_width(&main, LV_SIZE_CONTENT);
        lv_style_set_height(&main, LV_SIZE_CONTENT);
        lv_style_set_flex_flow(&main, LV_FLEX_FLOW_COLUMN);
        lv_style_set_flex_cross_place(&main, LV_FLEX_ALIGN_CENTER);

        lv_style_init(&main_light);
        lv_style_set_text_color(&main_light, SURFACE_PRIMARY_LIGHT);

        lv_style_init(&main_dark);
        lv_style_set_text_color(&main_dark, SURFACE_PRIMARY_DARK);

        lv_style_init(&slider_main_light);
        lv_style_set_bg_color(&slider_main_light, BG_SECONDARY_LIGHT);
        lv_style_set_bg_opa(&slider_main_light, 255);

        lv_style_init(&slider_main_dark);
        lv_style_set_bg_color(&slider_main_dark, BG_SECONDARY_DARK);

        lv_style_init(&indicator_light);
        lv_style_set_bg_color(&indicator_light, SURFACE_PRIMARY_LIGHT);

        lv_style_init(&indicator_dark);
        lv_style_set_bg_color(&indicator_dark, SURFACE_PRIMARY_DARK);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_add_style(lv_obj_0, &style_reset, 0);
    lv_obj_add_style(lv_obj_0, &main, 0);
    lv_obj_bind_style(lv_obj_0, &main_light, 0, &theme, 0);
    lv_obj_bind_style(lv_obj_0, &main_dark, 0, &theme, 1);

    lv_obj_t * lv_bar_0 = lv_bar_create(lv_obj_0);
    lv_bar_set_min_value(lv_bar_0, 0);
    lv_bar_set_max_value(lv_bar_0, 10000);
    lv_bar_set_value(lv_bar_0, move, false);lv_obj_set_width(lv_bar_0, 12);
    lv_obj_set_height(lv_bar_0, 72);
    lv_obj_bind_style(lv_bar_0, &indicator_light, LV_PART_INDICATOR, &theme, 0);
    lv_obj_bind_style(lv_bar_0, &indicator_dark, LV_PART_INDICATOR, &theme, 1);
    lv_obj_bind_style(lv_bar_0, &slider_main_light, LV_PART_MAIN, &theme, 0);
    lv_obj_bind_style(lv_bar_0, &slider_main_dark, LV_PART_MAIN, &theme, 1);


    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_0, day);
    lv_obj_set_style_text_font(lv_label_0, geist_semibold_12, 0);
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_width(lv_label_0, 30);
    lv_obj_set_height(lv_label_0, LV_SIZE_CONTENT);



    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "stat_col_#");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/