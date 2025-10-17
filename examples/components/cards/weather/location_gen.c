/**
 * @file location_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "location_gen.h"
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

lv_obj_t * location_create(lv_obj_t * parent, const char * city_text, lv_subject_t * temp, const void * icon, const char * weather_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    static lv_style_t style_row_center_ver;
    static lv_style_t style_big_temp;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_main);
        lv_style_set_width(&style_main, lv_pct(100));
        lv_style_set_height(&style_main, lv_pct(100));
        lv_style_set_bg_opa(&style_main, 0);
        lv_style_set_text_color(&style_main, LIGHT);
        lv_style_set_text_font(&style_main, geist_semibold_20);

        lv_style_init(&style_row_center_ver);
        lv_style_set_flex_cross_place(&style_row_center_ver, LV_FLEX_ALIGN_CENTER);
        lv_style_set_pad_column(&style_row_center_ver, UNIT_SM);

        lv_style_init(&style_big_temp);
        lv_style_set_text_font(&style_big_temp, abril_fatface_80);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "location_#");

    lv_obj_remove_style_all(lv_obj_0);
    lv_obj_add_style(lv_obj_0, &style_main, 0);
    lv_obj_t * row_0 = row_create(lv_obj_0);
    lv_obj_set_align(row_0, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_style(row_0, &style_row_center_ver, 0);
    lv_obj_t * lv_label_0 = lv_label_create(row_0);
    lv_obj_set_style_text_font(lv_label_0, geist_semibold_12, 0);
    lv_obj_set_style_text_color(lv_label_0, LIGHT, 0);
    lv_label_set_text(lv_label_0, city_text);
    
    lv_obj_t * lv_image_0 = lv_image_create(row_0);
    lv_image_set_src(lv_image_0, icon_pin);
    
    lv_obj_t * row_1 = row_create(lv_obj_0);
    lv_obj_set_align(row_1, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_add_style(row_1, &style_row_center_ver, 0);
    lv_obj_t * lv_image_1 = lv_image_create(row_1);
    lv_image_set_src(lv_image_1, icon);
    
    lv_obj_t * lv_label_1 = lv_label_create(row_1);
    lv_obj_set_style_text_font(lv_label_1, geist_semibold_12, 0);
    lv_label_set_text(lv_label_1, weather_text);
    lv_obj_set_style_margin_bottom(lv_label_1, -2, 0);
    
    lv_obj_t * lv_spangroup_0 = lv_spangroup_create(lv_obj_0);
    lv_obj_set_align(lv_spangroup_0, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_set_style_pad_bottom(lv_spangroup_0, -23, 0);
    lv_span_t * lv_spangroup_span_0 = lv_spangroup_add_span(lv_spangroup_0);
    lv_spangroup_bind_span_text(lv_spangroup_0, lv_spangroup_span_0, temp, NULL);
    lv_spangroup_set_span_style(lv_spangroup_0, lv_spangroup_span_0, &style_big_temp);
    lv_span_t * lv_spangroup_span_1 = lv_spangroup_add_span(lv_spangroup_0);
    lv_spangroup_set_span_text(lv_spangroup_0, lv_spangroup_span_1, "°C");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

