/**
 * @file thermostat_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "thermostat_gen.h"
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

lv_obj_t * thermostat_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_center;
    static lv_style_t style_center_dark;
    static lv_style_t style_arc_no_line;
    static lv_style_t style_arc_knob;
    static lv_style_t style_scale_main;
    static lv_style_t style_scale_main_dark;
    static lv_style_t style_scale_ticks;
    static lv_style_t style_scale_ticks_dark;
    static lv_style_t style_scale_section_ticks;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_center);
        lv_style_set_width(&style_center, 160);
        lv_style_set_height(&style_center, 160);
        lv_style_set_radius(&style_center, 100);
        lv_style_set_bg_color(&style_center, BG_PRIMARY_LIGHT);
        lv_style_set_border_width(&style_center, 0);
        lv_style_set_shadow_color(&style_center, DARK);
        lv_style_set_shadow_offset_y(&style_center, 6);
        lv_style_set_shadow_opa(&style_center, 61);
        lv_style_set_shadow_spread(&style_center, 0);
        lv_style_set_shadow_width(&style_center, 32);

        lv_style_init(&style_center_dark);
        lv_style_set_bg_color(&style_center_dark, BG_TERTIARY_DARK);
        lv_style_set_text_color(&style_center_dark, SURFACE_PRIMARY_DARK);

        lv_style_init(&style_arc_no_line);
        lv_style_set_arc_width(&style_arc_no_line, 0);

        lv_style_init(&style_arc_knob);
        lv_style_set_pad_all(&style_arc_knob, 4);
        lv_style_set_bg_color(&style_arc_knob, ACCENT1_LIGHT);

        lv_style_init(&style_scale_main);
        lv_style_set_width(&style_scale_main, 200);
        lv_style_set_height(&style_scale_main, 200);
        lv_style_set_arc_width(&style_scale_main, 0);
        lv_style_set_text_font(&style_scale_main, geist_semibold_12);
        lv_style_set_text_color(&style_scale_main, SURFACE_PRIMARY_LIGHT);

        lv_style_init(&style_scale_main_dark);
        lv_style_set_text_color(&style_scale_main_dark, SURFACE_PRIMARY_DARK);

        lv_style_init(&style_scale_ticks);
        lv_style_set_line_color(&style_scale_ticks, SURFACE_PRIMARY_LIGHT);
        lv_style_set_line_width(&style_scale_ticks, 4);
        lv_style_set_line_opa(&style_scale_ticks, (255 * 30 / 100));
        lv_style_set_length(&style_scale_ticks, 5);

        lv_style_init(&style_scale_ticks_dark);
        lv_style_set_line_color(&style_scale_ticks_dark, SURFACE_PRIMARY_DARK);

        lv_style_init(&style_scale_section_ticks);
        lv_style_set_line_color(&style_scale_section_ticks, ACCENT1_DARK);
        lv_style_set_line_width(&style_scale_section_ticks, 12);
        lv_style_set_line_opa(&style_scale_section_ticks, (255 * 100 / 100));

        style_inited = true;
    }

    lv_obj_t * card_0 = card_create(parent);

    lv_obj_t * card_header_0 = card_header_create(card_0, "Thermostat");

    lv_obj_t * switch_0 = switch_create(card_header_0);
    lv_obj_bind_checked(switch_0, &thermostat_on);



    lv_obj_t * div_0 = div_create(card_0);
    lv_obj_set_style_layout(div_0, LV_LAYOUT_NONE, 0);
    lv_obj_set_style_pad_ver(div_0, 12, 0);
    lv_obj_bind_style(div_0, &style_disabled, 0, &thermostat_on, 0);

    lv_obj_t * center = lv_obj_create(div_0);
    lv_obj_set_name(center, "center");
    lv_obj_set_align(center, LV_ALIGN_CENTER);
    lv_obj_add_style(center, &style_center, 0);
    lv_obj_bind_style(center, &style_center_dark, 0, &dark_theme, 1);

    lv_obj_t * lv_label_0 = lv_label_create(center);
    lv_label_bind_text(lv_label_0, &room_temp, "%d °C");lv_obj_set_style_text_font(lv_label_0, geist_semibold_28, 0);
    lv_obj_set_align(lv_label_0, LV_ALIGN_CENTER);



    lv_obj_t * thermostat_scale_light = lv_scale_create(div_0);
    lv_obj_set_name(thermostat_scale_light, "thermostat_scale_light");
    lv_obj_set_align(thermostat_scale_light, LV_ALIGN_CENTER);
    lv_scale_set_major_tick_every(thermostat_scale_light, 10);
    lv_scale_set_mode(thermostat_scale_light, LV_SCALE_MODE_ROUND_OUTER);
    lv_scale_set_angle_range(thermostat_scale_light, 180);
    lv_scale_set_min_value(thermostat_scale_light, 16);
    lv_scale_set_max_value(thermostat_scale_light, 28);
    lv_scale_set_rotation(thermostat_scale_light, 180);
    lv_obj_add_style(thermostat_scale_light, &style_scale_main, 0);
    lv_obj_bind_style(thermostat_scale_light, &style_scale_main_dark, 0, &dark_theme, 1);
    lv_obj_add_style(thermostat_scale_light, &style_scale_ticks, LV_PART_ITEMS);
    lv_obj_add_style(thermostat_scale_light, &style_scale_ticks, LV_PART_INDICATOR);
    lv_obj_bind_style(thermostat_scale_light, &style_scale_ticks_dark, LV_PART_ITEMS, &dark_theme, 1);
    lv_obj_bind_style(thermostat_scale_light, &style_scale_ticks_dark, LV_PART_INDICATOR, &dark_theme, 1);
    lv_scale_section_t * lv_scale_section_0 = lv_scale_add_section(thermostat_scale_light);
    lv_scale_set_section_min_value(thermostat_scale_light, lv_scale_section_0, 16);
    lv_scale_bind_section_max_value(thermostat_scale_light, lv_scale_section_0, &thermostat_temp);
    lv_scale_set_section_style_items(thermostat_scale_light, lv_scale_section_0, &style_scale_section_ticks);
    lv_scale_set_section_style_indicator(thermostat_scale_light, lv_scale_section_0, &style_scale_section_ticks);


    lv_obj_t * lv_arc_0 = lv_arc_create(div_0);
    lv_obj_set_width(lv_arc_0, 120);
    lv_obj_set_height(lv_arc_0, 120);
    lv_obj_set_ext_click_area(lv_arc_0, 60);
    lv_obj_set_align(lv_arc_0, LV_ALIGN_CENTER);
    lv_arc_bind_value(lv_arc_0, &thermostat_temp);
    lv_arc_set_min_value(lv_arc_0, 16);
    lv_arc_set_max_value(lv_arc_0, 28);
    lv_arc_set_bg_start_angle(lv_arc_0, 180);
    lv_arc_set_bg_end_angle(lv_arc_0, 360);
    lv_arc_set_start_angle(lv_arc_0, 180);
    lv_obj_bind_state_if_eq(lv_arc_0, &thermostat_on, LV_STATE_DISABLED, 0);
    lv_obj_add_style(lv_arc_0, &style_arc_no_line, LV_PART_MAIN);
    lv_obj_add_style(lv_arc_0, &style_arc_no_line, LV_PART_INDICATOR);
    lv_obj_add_style(lv_arc_0, &style_arc_knob, LV_PART_KNOB);



    lv_obj_t * div_1 = div_create(card_0);
    lv_obj_set_style_flex_track_place(div_1, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_margin_top(div_1, -12, 0);

    lv_obj_t * lv_label_1 = lv_label_create(div_1);
    lv_label_set_text(lv_label_1, "Heating up to 24 °C");




    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(card_0, "thermostat_#");

    return card_0;
}



/**********************
 *   STATIC FUNCTIONS
 **********************/

