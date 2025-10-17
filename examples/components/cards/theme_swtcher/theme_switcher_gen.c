/**
 * @file theme_switcher_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "theme_switcher_gen.h"
#include "examples.h"

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

lv_obj_t * theme_switcher_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    static lv_style_t main_dark;
    static lv_style_t checkbox_main;
    static lv_style_t checkbox_indicator;
    static lv_style_t checkbox_checked;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_main);
        lv_style_set_layout(&style_main, LV_LAYOUT_FLEX);
        lv_style_set_flex_cross_place(&style_main, LV_FLEX_ALIGN_CENTER);
        lv_style_set_pad_column(&style_main, 6);
        lv_style_set_text_color(&style_main, SURFACE_PRIMARY_LIGHT);

        lv_style_init(&main_dark);
        lv_style_set_text_color(&main_dark, SURFACE_PRIMARY_DARK);

        lv_style_init(&checkbox_main);
        lv_style_set_radius(&checkbox_main, 0);
        lv_style_set_text_font(&checkbox_main, geist_semibold_14);

        lv_style_init(&checkbox_indicator);
        lv_style_set_pad_all(&checkbox_indicator, 4);
        lv_style_set_bg_image_src(&checkbox_indicator, icon_theme);
        lv_style_set_bg_image_recolor_opa(&checkbox_indicator, 255);
        lv_style_set_bg_image_recolor(&checkbox_indicator, DARK);
        lv_style_set_border_width(&checkbox_indicator, 0);
        lv_style_set_bg_opa(&checkbox_indicator, 0);

        lv_style_init(&checkbox_checked);
        lv_style_set_bg_image_src(&checkbox_checked, icon_theme);
        lv_style_set_bg_image_recolor_opa(&checkbox_checked, 255);
        lv_style_set_bg_image_recolor(&checkbox_checked, LIGHT);
        lv_style_set_bg_opa(&checkbox_checked, 0);

        style_inited = true;
    }

    lv_obj_t * div_0 = div_create(parent);
    lv_obj_set_name_static(div_0, "theme_switcher_#");
    lv_obj_set_width(div_0, LV_SIZE_CONTENT);

    lv_obj_add_style(div_0, &style_main, 0);
    lv_obj_bind_style(div_0, &main_dark, 0, &dark_theme, 1);
    lv_obj_t * lv_checkbox_0 = lv_checkbox_create(div_0);
    lv_obj_bind_checked(lv_checkbox_0, &dark_theme);
    lv_checkbox_set_text(lv_checkbox_0, "Switch theme");
    lv_obj_add_style(lv_checkbox_0, &checkbox_main, LV_PART_MAIN);
    lv_obj_add_style(lv_checkbox_0, &checkbox_indicator, LV_PART_INDICATOR);
    lv_obj_add_style(lv_checkbox_0, &checkbox_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);

    LV_TRACE_OBJ_CREATE("finished");

    return div_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

