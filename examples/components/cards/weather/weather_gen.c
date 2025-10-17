/**
 * @file weather_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "weather_gen.h"
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

lv_obj_t * weather_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    static lv_style_t style_tabview;
    static lv_style_t style_tab;
    static lv_style_t tab_bar;
    static lv_style_t tab_bar_button;
    static lv_style_t tab_bar_button_checked;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_main);
        lv_style_set_height(&style_main, 240);
        lv_style_set_text_color(&style_main, LIGHT);
        lv_style_set_bg_color(&style_main, ACCENT1_LIGHT);
        lv_style_set_pad_all(&style_main, 0);

        lv_style_init(&style_tabview);
        lv_style_set_width(&style_tabview, lv_pct(100));
        lv_style_set_height(&style_tabview, lv_pct(100));
        lv_style_set_bg_opa(&style_tabview, 0);
        lv_style_set_text_color(&style_tabview, LIGHT);

        lv_style_init(&style_tab);
        lv_style_set_radius(&style_tab, UNIT_XL);
        lv_style_set_pad_all(&style_tab, UNIT_XL);

        lv_style_init(&tab_bar);
        lv_style_set_bg_opa(&tab_bar, 0);

        lv_style_init(&tab_bar_button);
        lv_style_set_border_width(&tab_bar_button, 0);
        lv_style_set_text_color(&tab_bar_button, LIGHT);
        lv_style_set_text_font(&tab_bar_button, geist_semibold_14);
        lv_style_set_text_opa(&tab_bar_button, 102);

        lv_style_init(&tab_bar_button_checked);
        lv_style_set_bg_color(&tab_bar_button_checked, LIGHT);
        lv_style_set_bg_opa(&tab_bar_button_checked, 0);
        lv_style_set_text_color(&tab_bar_button_checked, LIGHT);
        lv_style_set_text_opa(&tab_bar_button_checked, 255);
        lv_style_set_border_opa(&tab_bar_button_checked, 0);

        style_inited = true;
    }

    lv_obj_t * card_0 = card_create(parent);
    lv_obj_set_name_static(card_0, "weather_#");

    lv_obj_add_style(card_0, &style_main, 0);
    lv_obj_t * lv_tabview_0 = lv_tabview_create(card_0);
    lv_tabview_set_tab_bar_position(lv_tabview_0, LV_DIR_BOTTOM);
    lv_obj_add_style(lv_tabview_0, &style_tabview, 0);
    lv_obj_t * lv_tabview_tab_0 = lv_tabview_add_tab(lv_tabview_0, "Sidney");
    lv_obj_set_style_bg_image_src(lv_tabview_0, weather_location_1_bg, 0);
    lv_obj_add_style(lv_tabview_tab_0, &style_tab, 0);
    lv_obj_t * location_0 = location_create(lv_tabview_tab_0, "Sidney", &location1_temp, icon_cloudy, "Cloudy");
    
    lv_obj_t * lv_tabview_tab_1 = lv_tabview_add_tab(lv_tabview_0, "Budapest");
    lv_obj_set_style_bg_image_src(lv_tabview_0, weather_location_2_bg, 0);
    lv_obj_add_style(lv_tabview_tab_1, &style_tab, 0);
    lv_obj_t * location_1 = location_create(lv_tabview_tab_1, "Budapest, HU", &location2_temp, icon_sunny, "Sunny");
    
    lv_obj_t * lv_tabview_tab_bar_0 = lv_tabview_get_tab_bar(lv_tabview_0);
    lv_obj_set_height(lv_tabview_0, 44);
    lv_obj_add_style(lv_tabview_tab_bar_0, &tab_bar, 0);
    lv_obj_t * lv_tabview_tab_button_0 = lv_tabview_get_tab_button(lv_tabview_0, 0);
    lv_obj_add_style(lv_tabview_tab_button_0, &tab_bar_button, 0);
    lv_obj_add_style(lv_tabview_tab_button_0, &tab_bar_button_checked, LV_STATE_CHECKED);
    lv_obj_t * lv_tabview_tab_button_1 = lv_tabview_get_tab_button(lv_tabview_0, 1);
    lv_obj_add_style(lv_tabview_tab_button_1, &tab_bar_button, 0);
    lv_obj_add_style(lv_tabview_tab_button_1, &tab_bar_button_checked, LV_STATE_CHECKED);
    lv_obj_t * div_0 = div_create(lv_tabview_0);
    lv_obj_set_style_pad_top(div_0, UNIT_MD, 0);
    lv_obj_set_style_pad_left(div_0, UNIT_XL, 0);
    lv_obj_set_flag(div_0, LV_OBJ_FLAG_IGNORE_LAYOUT, true);
    lv_obj_t * lv_label_0 = lv_label_create(div_0);
    lv_label_set_text(lv_label_0, "Weather");
    lv_obj_set_style_text_font(lv_label_0, geist_semibold_20, 0);
    
    lv_obj_t * lv_label_1 = lv_label_create(div_0);
    lv_label_set_text(lv_label_1, "Fri, Aug 15");
    lv_obj_set_style_text_font(lv_label_1, geist_regular_14, 0);
    lv_obj_set_style_text_opa(lv_label_1, (255 * 80 / 100), 0);

    LV_TRACE_OBJ_CREATE("finished");

    return card_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

