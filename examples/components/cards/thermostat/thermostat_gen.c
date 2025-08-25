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

    static lv_style_t panel_size;
    static lv_style_t off;
    static lv_style_t style_thermostat;
    static lv_style_t style_thermostat_bg;
    static lv_style_t thermostat_bg_light;
    static lv_style_t thermostat_bg_dark;
    static lv_style_t style_thermostat_knob;
    static lv_style_t style_thermostat_knob_light;
    static lv_style_t style_thermostat_knob_dark;
    static lv_style_t arc_bg;
    static lv_style_t arc_knob;
    static lv_style_t scale;
    static lv_style_t scale_light;
    static lv_style_t scale_dark;
    static lv_style_t scale_main_bg;
    static lv_style_t scale_items_light;
    static lv_style_t scale_items_dark;
    static lv_style_t scale_indicator_light;
    static lv_style_t scale_indicator_dark;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&panel_size);
        lv_style_set_width(&panel_size, 320);
        lv_style_set_height(&panel_size, 320);

        lv_style_init(&off);
        lv_style_set_opa_layered(&off, 120);

        lv_style_init(&style_thermostat);
        lv_style_set_bg_color(&style_thermostat, lv_color_hex(0xff0000));
        lv_style_set_width(&style_thermostat, 272);
        lv_style_set_pad_left(&style_thermostat, 40);
        lv_style_set_pad_right(&style_thermostat, 40);
        lv_style_set_pad_top(&style_thermostat, 24);
        lv_style_set_margin_bottom(&style_thermostat, -4);

        lv_style_init(&style_thermostat_bg);
        lv_style_set_width(&style_thermostat_bg, 184);
        lv_style_set_height(&style_thermostat_bg, 184);
        lv_style_set_radius(&style_thermostat_bg, lv_pct(50));
        lv_style_set_border_width(&style_thermostat_bg, 0);

        lv_style_init(&thermostat_bg_light);
        lv_style_set_bg_color(&thermostat_bg_light, BG_SECONDARY_LIGHT);

        lv_style_init(&thermostat_bg_dark);
        lv_style_set_bg_color(&thermostat_bg_dark, BG_SECONDARY_DARK);

        lv_style_init(&style_thermostat_knob);
        lv_style_set_width(&style_thermostat_knob, 160);
        lv_style_set_height(&style_thermostat_knob, 160);
        lv_style_set_radius(&style_thermostat_knob, lv_pct(50));
        lv_style_set_border_width(&style_thermostat_knob, 0);
        lv_style_set_shadow_color(&style_thermostat_knob, DARK);
        lv_style_set_shadow_offset_y(&style_thermostat_knob, 16);
        lv_style_set_shadow_opa(&style_thermostat_knob, 61);
        lv_style_set_shadow_spread(&style_thermostat_knob, 0);
        lv_style_set_shadow_width(&style_thermostat_knob, 32);

        lv_style_init(&style_thermostat_knob_light);
        lv_style_set_bg_color(&style_thermostat_knob_light, BG_PRIMARY_LIGHT);

        lv_style_init(&style_thermostat_knob_dark);
        lv_style_set_bg_color(&style_thermostat_knob_dark, BG_PRIMARY_DARK);

        lv_style_init(&arc_bg);
        lv_style_set_arc_width(&arc_bg, 0);

        lv_style_init(&arc_knob);
        lv_style_set_width(&arc_knob, 12);
        lv_style_set_height(&arc_knob, 12);
        lv_style_set_bg_color(&arc_knob, ACCENT1_LIGHT);

        lv_style_init(&scale);
        lv_style_set_pad_all(&scale, 0);
        lv_style_set_pad_bottom(&scale, 0);

        lv_style_init(&scale_light);
        lv_style_set_text_font(&scale_light, geist_semibold_12);
        lv_style_set_text_color(&scale_light, SURFACE_PRIMARY_LIGHT);

        lv_style_init(&scale_dark);
        lv_style_set_text_font(&scale_dark, geist_semibold_12);
        lv_style_set_text_color(&scale_dark, SURFACE_PRIMARY_DARK);

        lv_style_init(&scale_main_bg);
        lv_style_set_arc_width(&scale_main_bg, 0);
        lv_style_set_bg_opa(&scale_main_bg, 0);

        lv_style_init(&scale_items_light);
        lv_style_set_line_color(&scale_items_light, SURFACE_PRIMARY_LIGHT);
        lv_style_set_line_width(&scale_items_light, 3);
        lv_style_set_line_opa(&scale_items_light, 60);

        lv_style_init(&scale_items_dark);
        lv_style_set_line_color(&scale_items_dark, SURFACE_PRIMARY_DARK);
        lv_style_set_line_width(&scale_items_dark, 3);
        lv_style_set_line_opa(&scale_items_dark, 60);

        lv_style_init(&scale_indicator_light);
        lv_style_set_line_color(&scale_indicator_light, SURFACE_PRIMARY_LIGHT);
        lv_style_set_line_width(&scale_indicator_light, 3);
        lv_style_set_line_opa(&scale_indicator_light, 255);

        lv_style_init(&scale_indicator_dark);
        lv_style_set_line_color(&scale_indicator_dark, SURFACE_PRIMARY_DARK);
        lv_style_set_line_width(&scale_indicator_dark, 3);
        lv_style_set_line_opa(&scale_indicator_dark, 255);

        style_inited = true;
    }

    lv_obj_t * panel_0 = panel_create(parent);
    lv_obj_add_style(panel_0, &panel_size, 0);

    lv_obj_t * panel_header_0 = panel_header_create(panel_0);
    lv_obj_set_width(panel_header_0, lv_pct(100));
    lv_obj_set_style_margin_bottom(panel_header_0, -12, 0);

    lv_obj_t * lv_label_0 = lv_label_create(panel_header_0);
    lv_label_set_text(lv_label_0, "Thermostat");
    lv_obj_set_style_text_font(lv_label_0, geist_semibold_20, 0);


    lv_obj_t * switch_0 = switch_create(panel_header_0);
    lv_obj_bind_checked(switch_0, &thermostat);



    lv_obj_t * thermostat0 = lv_obj_create(panel_0);
    lv_obj_set_name(thermostat0, "thermostat0");
    lv_obj_add_style(thermostat0, &style_reset, 0);
    lv_obj_add_style(thermostat0, &style_thermostat, 0);
    lv_obj_bind_style(thermostat0, &off, 0, &thermostat, 0);

    lv_obj_t * thermostat_bg = lv_obj_create(thermostat0);
    lv_obj_set_name(thermostat_bg, "thermostat_bg");
    lv_obj_add_style(thermostat_bg, &style_thermostat_bg, 0);
    lv_obj_bind_style(thermostat_bg, &thermostat_bg_light, 0, &theme, 0);
    lv_obj_bind_style(thermostat_bg, &thermostat_bg_dark, 0, &theme, 1);


    lv_obj_t * thermostat_knob = lv_obj_create(thermostat0);
    lv_obj_set_name(thermostat_knob, "thermostat_knob");
    lv_obj_set_x(thermostat_knob, 12);
    lv_obj_set_y(thermostat_knob, 12);
    lv_obj_add_style(thermostat_knob, &style_thermostat_knob, 0);
    lv_obj_bind_style(thermostat_knob, &style_thermostat_knob_light, 0, &theme, 0);
    lv_obj_bind_style(thermostat_knob, &style_thermostat_knob_dark, 0, &theme, 1);


    lv_obj_t * thermostat_scale_light = lv_scale_create(thermostat0);
    lv_obj_set_name(thermostat_scale_light, "thermostat_scale_light");
    lv_obj_set_width(thermostat_scale_light, 198);
    lv_obj_set_height(thermostat_scale_light, 204);
    lv_obj_set_x(thermostat_scale_light, -8);
    lv_obj_set_y(thermostat_scale_light, -8);
    lv_scale_set_major_tick_every(thermostat_scale_light, 10);
    lv_scale_set_mode(thermostat_scale_light, LV_SCALE_MODE_ROUND_OUTER);
    lv_scale_set_angle_range(thermostat_scale_light, 180);
    lv_scale_set_min_value(thermostat_scale_light, 16);
    lv_scale_set_max_value(thermostat_scale_light, 28);
    lv_scale_set_rotation(thermostat_scale_light, 180);
    lv_obj_bind_flag_if_not_eq(thermostat_scale_light, &theme, LV_OBJ_FLAG_HIDDEN, 0);
    lv_obj_add_style(thermostat_scale_light, &scale, 0);
    lv_obj_add_style(thermostat_scale_light, &scale_light, 0);
    lv_obj_add_style(thermostat_scale_light, &scale_items_light, LV_PART_ITEMS);
    lv_obj_add_style(thermostat_scale_light, &scale_items_light, LV_PART_INDICATOR);
    lv_obj_add_style(thermostat_scale_light, &scale_main_bg, LV_PART_MAIN);
    lv_scale_section_t * lv_scale_section_0 = lv_scale_add_section(thermostat_scale_light);
    lv_scale_set_section_min_value(thermostat_scale_light, lv_scale_section_0, 16);
    lv_scale_bind_section_max_value(thermostat_scale_light, lv_scale_section_0, &thermostat_temp);
    lv_scale_set_section_style_items(thermostat_scale_light, lv_scale_section_0, &scale_indicator_light);
    lv_scale_set_section_style_indicator(thermostat_scale_light, lv_scale_section_0, &scale_indicator_light);


    lv_obj_t * thermostat_scale_dark = lv_scale_create(thermostat0);
    lv_obj_set_name(thermostat_scale_dark, "thermostat_scale_dark");
    lv_obj_set_width(thermostat_scale_dark, 198);
    lv_obj_set_height(thermostat_scale_dark, 204);
    lv_obj_set_x(thermostat_scale_dark, -10);
    lv_obj_set_y(thermostat_scale_dark, -10);
    lv_scale_set_major_tick_every(thermostat_scale_dark, 10);
    lv_scale_set_mode(thermostat_scale_dark, LV_SCALE_MODE_ROUND_OUTER);
    lv_scale_set_angle_range(thermostat_scale_dark, 180);
    lv_scale_set_min_value(thermostat_scale_dark, 16);
    lv_scale_set_max_value(thermostat_scale_dark, 28);
    lv_scale_set_rotation(thermostat_scale_dark, 180);
    lv_obj_bind_flag_if_not_eq(thermostat_scale_dark, &theme, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_add_style(thermostat_scale_dark, &scale, 0);
    lv_obj_add_style(thermostat_scale_dark, &scale_dark, 0);
    lv_obj_add_style(thermostat_scale_dark, &scale_items_dark, LV_PART_ITEMS);
    lv_obj_add_style(thermostat_scale_dark, &scale_items_dark, LV_PART_INDICATOR);
    lv_obj_add_style(thermostat_scale_dark, &scale_main_bg, LV_PART_MAIN);
    lv_scale_section_t * lv_scale_section_1 = lv_scale_add_section(thermostat_scale_dark);
    lv_scale_set_section_min_value(thermostat_scale_dark, lv_scale_section_1, 16);
    lv_scale_bind_section_max_value(thermostat_scale_dark, lv_scale_section_1, &thermostat_temp);
    lv_scale_set_section_style_items(thermostat_scale_dark, lv_scale_section_1, &scale_indicator_dark);
    lv_scale_set_section_style_indicator(thermostat_scale_dark, lv_scale_section_1, &scale_indicator_dark);


    lv_obj_t * lv_arc_0 = lv_arc_create(thermostat0);
    lv_obj_set_width(lv_arc_0, 184);
    lv_obj_set_height(lv_arc_0, 184);
    lv_arc_bind_value(lv_arc_0, &thermostat_temp);
    lv_arc_set_min_value(lv_arc_0, 16);
    lv_arc_set_max_value(lv_arc_0, 28);
    lv_arc_set_bg_start_angle(lv_arc_0, 180);
    lv_arc_set_bg_end_angle(lv_arc_0, 360);
    lv_arc_set_start_angle(lv_arc_0, 180);
    lv_obj_set_style_pad_all(lv_arc_0, 30, 0);
    lv_obj_bind_state_if_eq(lv_arc_0, &thermostat, LV_STATE_DISABLED, 0);
    lv_obj_add_style(lv_arc_0, &arc_bg, LV_PART_MAIN);
    lv_obj_add_style(lv_arc_0, &arc_bg, LV_PART_INDICATOR);
    lv_obj_add_style(lv_arc_0, &arc_knob, LV_PART_KNOB);



    lv_obj_t * lv_label_1 = lv_label_create(panel_0);
    lv_label_bind_text(lv_label_1, &thermostat_temp, "Heating up to %d °C");lv_obj_set_style_text_font(lv_label_1, geist_regular_14, 0);
    lv_obj_bind_flag_if_le(lv_label_1, &thermostat_temp, LV_OBJ_FLAG_HIDDEN, ROOM_TEMP);


    lv_obj_t * lv_label_2 = lv_label_create(panel_0);
    lv_label_bind_text(lv_label_2, &thermostat_temp, "Cooling down to %d °C");lv_obj_set_style_text_font(lv_label_2, geist_regular_14, 0);
    lv_obj_bind_flag_if_ge(lv_label_2, &thermostat_temp, LV_OBJ_FLAG_HIDDEN, ROOM_TEMP);


    lv_obj_t * lv_label_3 = lv_label_create(panel_0);
    lv_label_bind_text(lv_label_3, &thermostat_temp, "Room temperature is %d °C");lv_obj_set_style_text_font(lv_label_3, geist_regular_14, 0);
    lv_obj_bind_flag_if_not_eq(lv_label_3, &thermostat_temp, LV_OBJ_FLAG_HIDDEN, ROOM_TEMP);



    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(panel_0, "thermostat_#");

    return panel_0;
}



/**********************
 *   STATIC FUNCTIONS
 **********************/

