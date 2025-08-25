/**
 * @file weather_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "weather_gen.h"
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

lv_obj_t * weather_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t weather;
    static lv_style_t panel_size;
    static lv_style_t style_header_title_wrapper;
    static lv_style_t style_header_location;
    static lv_style_t style_header_location_label;
    static lv_style_t tabview;
    static lv_style_t tab;
    static lv_style_t tab_bar;
    static lv_style_t tab_bar_button;
    static lv_style_t tab_bar_button_checked;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&weather);
        lv_style_set_text_color(&weather, LIGHT);
        lv_style_set_radius(&weather, 20);
        lv_style_set_bg_color(&weather, ACCENT1_LIGHT);
        lv_style_set_border_width(&weather, 0);
        lv_style_set_pad_all(&weather, 0);

        lv_style_init(&panel_size);
        lv_style_set_width(&panel_size, 320);
        lv_style_set_height(&panel_size, 240);

        lv_style_init(&style_header_title_wrapper);
        lv_style_set_layout(&style_header_title_wrapper, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&style_header_title_wrapper, LV_FLEX_FLOW_COLUMN);

        lv_style_init(&style_header_location);
        lv_style_set_width(&style_header_location, lv_pct(100));
        lv_style_set_layout(&style_header_location, LV_LAYOUT_FLEX);
        lv_style_set_flex_cross_place(&style_header_location, LV_FLEX_ALIGN_CENTER);
        lv_style_set_flex_main_place(&style_header_location, LV_FLEX_ALIGN_END);

        lv_style_init(&style_header_location_label);
        lv_style_set_pad_top(&style_header_location_label, 3);
        lv_style_set_pad_right(&style_header_location_label, 4);

        lv_style_init(&tabview);
        lv_style_set_radius(&tabview, 20);
        lv_style_set_layout(&tabview, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&tabview, LV_FLEX_FLOW_COLUMN_WRAP_REVERSE);
        lv_style_set_margin_top(&tabview, 0);
        lv_style_set_width(&tabview, lv_pct(100));
        lv_style_set_height(&tabview, lv_pct(100));
        lv_style_set_bg_opa(&tabview, 0);

        lv_style_init(&tab);
        lv_style_set_radius(&tab, 20);
        lv_style_set_pad_all(&tab, 24);
        lv_style_set_text_color(&tab, LIGHT);
        lv_style_set_layout(&tab, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&tab, LV_FLEX_FLOW_COLUMN);
        lv_style_set_flex_main_place(&tab, LV_FLEX_ALIGN_SPACE_BETWEEN);
        lv_style_set_pad_top(&tab, 36);
        lv_style_set_pad_bottom(&tab, 24);

        lv_style_init(&tab_bar);
        lv_style_set_bg_opa(&tab_bar, 0);
        lv_style_set_translate_y(&tab_bar, 0);
        lv_style_set_pad_hor(&tab_bar, 4);
        lv_style_set_pad_ver(&tab_bar, 4);

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

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_add_style(lv_obj_0, &panel_size, 0);
    lv_obj_add_style(lv_obj_0, &weather, 0);

    lv_obj_t * lv_tabview_0 = lv_tabview_create(lv_obj_0);
    lv_tabview_set_tab_bar_position(lv_tabview_0, LV_DIR_BOTTOM);
    lv_obj_add_style(lv_tabview_0, &tabview, 0);
    lv_obj_t * lv_tabview_tab_0 = lv_tabview_add_tab(lv_tabview_0, "Location 1");
    lv_obj_set_style_bg_image_src(lv_tabview_0, weather_location_1_bg, 0);
        lv_obj_add_style(lv_tabview_tab_0, &tab, 0);

        lv_obj_t * header_location = div_create(lv_tabview_tab_0);
        lv_obj_set_name(header_location, "header_location");
        lv_obj_add_style(header_location, &style_header_location, 0);

        lv_obj_t * lv_label_0 = lv_label_create(header_location);
        lv_obj_set_style_text_font(lv_label_0, geist_semibold_12, 0);
        lv_label_set_text(lv_label_0, "Sidney, OH");
        lv_obj_add_style(lv_label_0, &style_header_location_label, 0);


        lv_obj_t * lv_image_0 = lv_image_create(header_location);
        lv_image_set_src(lv_image_0, icon_pin);



        lv_obj_t * div_0 = div_create(lv_tabview_tab_0);
        lv_obj_set_width(div_0, lv_pct(100));
        lv_obj_set_style_layout(div_0, LV_LAYOUT_FLEX, 0);
        lv_obj_set_style_flex_main_place(div_0, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
        lv_obj_set_style_flex_cross_place(div_0, LV_FLEX_ALIGN_END, 0);

        lv_obj_t * div_1 = div_create(div_0);
        lv_obj_set_style_layout(div_1, LV_LAYOUT_FLEX, 0);
        lv_obj_set_style_flex_cross_place(div_1, LV_FLEX_ALIGN_END, 0);

        lv_obj_t * lv_image_1 = lv_image_create(div_1);
        lv_image_set_src(lv_image_1, icon_cloudy);


        lv_obj_t * lv_label_1 = lv_label_create(div_1);
        lv_obj_set_style_text_font(lv_label_1, geist_semibold_12, 0);
        lv_label_set_text(lv_label_1, "Coludy");
        lv_obj_set_style_pad_left(lv_label_1, 6, 0);
        lv_obj_set_style_margin_bottom(lv_label_1, -2, 0);



        lv_obj_t * div_2 = div_create(div_0);
        lv_obj_set_style_layout(div_2, LV_LAYOUT_FLEX, 0);

        lv_obj_t * lv_label_2 = lv_label_create(div_2);
        lv_label_bind_text(lv_label_2, &location1_temp, NULL);lv_obj_set_style_text_font(lv_label_2, abril_fatface_80, 0);
        lv_obj_set_style_margin_top(lv_label_2, -23, 0);
        lv_obj_set_style_margin_bottom(lv_label_2, -23, 0);


        lv_obj_t * lv_label_3 = lv_label_create(div_2);
        lv_label_set_text(lv_label_3, "°C");
        lv_obj_set_style_text_font(lv_label_3, geist_semibold_20, 0);



    lv_obj_t * lv_tabview_tab_1 = lv_tabview_add_tab(lv_tabview_0, "Location 2");
    lv_obj_set_style_bg_image_src(lv_tabview_0, weather_location_2_bg, 0);
        lv_obj_add_style(lv_tabview_tab_1, &tab, 0);

        lv_obj_t * header_location2 = div_create(lv_tabview_tab_1);
        lv_obj_set_name(header_location2, "header_location2");
        lv_obj_add_style(header_location2, &style_header_location, 0);

        lv_obj_t * lv_label_4 = lv_label_create(header_location2);
        lv_obj_set_style_text_font(lv_label_4, geist_semibold_12, 0);
        lv_label_set_text(lv_label_4, "Budapest, Hungary");
        lv_obj_add_style(lv_label_4, &style_header_location_label, 0);


        lv_obj_t * lv_image_2 = lv_image_create(header_location2);
        lv_image_set_src(lv_image_2, icon_pin);



        lv_obj_t * div_3 = div_create(lv_tabview_tab_1);
        lv_obj_set_width(div_3, lv_pct(100));
        lv_obj_set_style_layout(div_3, LV_LAYOUT_FLEX, 0);
        lv_obj_set_style_flex_main_place(div_3, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
        lv_obj_set_style_flex_cross_place(div_3, LV_FLEX_ALIGN_END, 0);

        lv_obj_t * div_4 = div_create(div_3);
        lv_obj_set_style_layout(div_4, LV_LAYOUT_FLEX, 0);
        lv_obj_set_style_flex_cross_place(div_4, LV_FLEX_ALIGN_END, 0);

        lv_obj_t * lv_image_3 = lv_image_create(div_4);
        lv_image_set_src(lv_image_3, icon_sunny);


        lv_obj_t * lv_label_5 = lv_label_create(div_4);
        lv_obj_set_style_text_font(lv_label_5, geist_semibold_12, 0);
        lv_label_set_text(lv_label_5, "Sunny");
        lv_obj_set_style_pad_left(lv_label_5, 6, 0);
        lv_obj_set_style_margin_bottom(lv_label_5, -2, 0);



        lv_obj_t * div_5 = div_create(div_3);
        lv_obj_set_style_layout(div_5, LV_LAYOUT_FLEX, 0);

        lv_obj_t * lv_label_6 = lv_label_create(div_5);
        lv_label_bind_text(lv_label_6, &location2_temp, NULL);lv_obj_set_style_text_font(lv_label_6, big_shoulders_80, 0);
        lv_obj_set_style_margin_top(lv_label_6, -15, 0);
        lv_obj_set_style_margin_bottom(lv_label_6, -17, 0);


        lv_obj_t * lv_label_7 = lv_label_create(div_5);
        lv_label_set_text(lv_label_7, "°C");
        lv_obj_set_style_text_font(lv_label_7, geist_semibold_20, 0);



    lv_obj_t * lv_tabview_tab_bar_0 = lv_tabview_get_tab_bar(lv_tabview_0);
    lv_obj_set_height(lv_tabview_0, 44);
        lv_obj_add_style(lv_tabview_tab_bar_0, &tab_bar, 0);
    lv_obj_t * lv_tabview_tab_button_0 = lv_tabview_get_tab_button(lv_tabview_0, 0);
        lv_obj_add_style(lv_tabview_tab_button_0, &tab_bar_button, 0);
        lv_obj_add_style(lv_tabview_tab_button_0, &tab_bar_button_checked, LV_STATE_CHECKED);
    lv_obj_t * lv_tabview_tab_button_1 = lv_tabview_get_tab_button(lv_tabview_0, 1);
        lv_obj_add_style(lv_tabview_tab_button_1, &tab_bar_button, 0);
        lv_obj_add_style(lv_tabview_tab_button_1, &tab_bar_button_checked, LV_STATE_CHECKED);


    lv_obj_t * panel_header_0 = panel_header_create(lv_obj_0);
    lv_obj_set_x(panel_header_0, PANEL_PAD);
    lv_obj_set_y(panel_header_0, PANEL_PAD);
    lv_obj_set_width(panel_header_0, LV_SIZE_CONTENT);
    lv_obj_set_height(panel_header_0, LV_SIZE_CONTENT);
    lv_obj_set_style_flex_cross_place(panel_header_0, LV_FLEX_ALIGN_CENTER, 0);

    lv_obj_t * header_title_wrapper = div_create(panel_header_0);
    lv_obj_set_name(header_title_wrapper, "header_title_wrapper");
    lv_obj_add_style(header_title_wrapper, &style_header_title_wrapper, 0);

    lv_obj_t * lv_label_8 = lv_label_create(header_title_wrapper);
    lv_label_set_text(lv_label_8, "Weather");
    lv_obj_set_style_text_font(lv_label_8, geist_semibold_20, 0);


    lv_obj_t * lv_label_9 = lv_label_create(header_title_wrapper);
    lv_label_set_text(lv_label_9, "Fri, Aug 15");
    lv_obj_set_style_text_font(lv_label_9, geist_regular_14, 0);
    lv_obj_set_style_text_opa(lv_label_9, 200, 0);





    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "weather_#");

    return lv_obj_0;
}



/**********************
 *   STATIC FUNCTIONS
 **********************/

