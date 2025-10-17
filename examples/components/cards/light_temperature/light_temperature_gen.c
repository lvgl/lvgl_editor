/**
 * @file light_temperature_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "light_temperature_gen.h"
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

lv_obj_t * light_temperature_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_arc_main;
    static lv_style_t style_arc_indicator;
    static lv_style_t style_arc_knob;
    static lv_style_t arc_knob_dark;
    static lv_style_t disabled;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_arc_main);
        lv_style_set_width(&style_arc_main, 228);
        lv_style_set_height(&style_arc_main, 228);
        lv_style_set_margin_bottom(&style_arc_main, -98);
        lv_style_set_arc_width(&style_arc_main, 42);
        lv_style_set_arc_image_src(&style_arc_main, light_temp_arc_bg);

        lv_style_init(&style_arc_indicator);
        lv_style_set_arc_width(&style_arc_indicator, 42);
        lv_style_set_arc_opa(&style_arc_indicator, 0);

        lv_style_init(&style_arc_knob);
        lv_style_set_bg_opa(&style_arc_knob, 0);
        lv_style_set_border_width(&style_arc_knob, 8);
        lv_style_set_border_color(&style_arc_knob, SURFACE_PRIMARY_LIGHT);
        lv_style_set_pad_all(&style_arc_knob, 6);

        lv_style_init(&arc_knob_dark);
        lv_style_set_border_color(&arc_knob_dark, LIGHT);

        lv_style_init(&disabled);
        lv_style_set_opa(&disabled, OPA_MUTED);

        style_inited = true;
    }

    lv_obj_t * card_0 = card_create(parent);
    lv_obj_set_name_static(card_0, "light_temperature_#");
    lv_obj_set_style_flex_track_place(card_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_cross_place(card_0, LV_FLEX_ALIGN_CENTER, 0);

    lv_obj_t * card_header_0 = card_header_create(card_0, "Light temperature");
    lv_obj_t * switch_0 = switch_create(card_header_0);
    lv_obj_bind_checked(switch_0, &light_temperature);
    
    lv_obj_t * lv_arc_0 = lv_arc_create(card_0);
    lv_arc_bind_value(lv_arc_0, &light_temperature_temp);
    lv_arc_set_min_value(lv_arc_0, 2000);
    lv_arc_set_max_value(lv_arc_0, 10000);
    lv_arc_set_bg_start_angle(lv_arc_0, 160);
    lv_arc_set_bg_end_angle(lv_arc_0, 380);
    lv_arc_set_start_angle(lv_arc_0, 180);
    lv_obj_add_style(lv_arc_0, &style_arc_main, 0);
    lv_obj_add_style(lv_arc_0, &style_arc_indicator, LV_PART_INDICATOR);
    lv_obj_add_style(lv_arc_0, &style_arc_knob, LV_PART_KNOB);
    lv_obj_add_style(lv_arc_0, &disabled, LV_STATE_DISABLED);
    lv_obj_bind_style(lv_arc_0, &arc_knob_dark, LV_PART_KNOB, &dark_theme, 1);
    lv_obj_bind_state_if_eq(lv_arc_0, &light_temperature, LV_STATE_DISABLED, 0);
    lv_obj_t * column_0 = column_create(lv_arc_0);
    lv_obj_set_style_flex_cross_place(column_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_align(column_0, LV_ALIGN_CENTER);
    lv_obj_set_y(column_0, -10);
    lv_obj_bind_style(column_0, &disabled, 0, &light_temperature, 0);
    lv_obj_t * lv_label_0 = lv_label_create(column_0);
    lv_label_bind_text(lv_label_0, &light_temperature_temp, "%dK");
    lv_obj_set_style_text_font(lv_label_0, geist_semibold_28, 0);
    lv_obj_set_style_text_letter_space(lv_label_0, -1, 0);
    
    lv_obj_t * lv_label_1 = lv_label_create(column_0);
    lv_label_set_text(lv_label_1, "Dining room");
    lv_obj_set_style_text_font(lv_label_1, geist_semibold_12, 0);
    lv_obj_set_style_text_letter_space(lv_label_1, 0, 0);
    lv_obj_set_style_translate_y(lv_label_1, -4, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return card_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

