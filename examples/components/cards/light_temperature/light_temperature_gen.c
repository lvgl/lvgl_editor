/**
 * @file light_temperature_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "light_temperature_gen.h"
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

lv_obj_t * light_temperature_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t panel_size;
    static lv_style_t stats;
    static lv_style_t arc;
    static lv_style_t arc_indicator;
    static lv_style_t arc_knob;
    static lv_style_t arc_knob_dark;
    static lv_style_t disabled;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&panel_size);
        lv_style_set_width(&panel_size, 320);
        lv_style_set_height(&panel_size, 240);

        lv_style_init(&stats);
        lv_style_set_width(&stats, lv_pct(100));
        lv_style_set_height(&stats, LV_SIZE_CONTENT);
        lv_style_set_layout(&stats, LV_LAYOUT_FLEX);
        lv_style_set_flex_main_place(&stats, LV_FLEX_ALIGN_SPACE_BETWEEN);
        lv_style_set_pad_ver(&stats, 16);

        lv_style_init(&arc);
        lv_style_set_width(&arc, 228);
        lv_style_set_height(&arc, 228);
        lv_style_set_arc_width(&arc, 42);
        lv_style_set_arc_image_src(&arc, light_temp_arc_bg);
        lv_style_set_translate_y(&arc, 29);
        lv_style_set_margin_bottom(&arc, -106);

        lv_style_init(&arc_indicator);
        lv_style_set_arc_width(&arc_indicator, 42);
        lv_style_set_arc_opa(&arc_indicator, 0);

        lv_style_init(&arc_knob);
        lv_style_set_bg_opa(&arc_knob, 0);
        lv_style_set_border_width(&arc_knob, 8);
        lv_style_set_border_color(&arc_knob, SURFACE_PRIMARY_LIGHT);
        lv_style_set_pad_all(&arc_knob, 6);

        lv_style_init(&arc_knob_dark);
        lv_style_set_border_color(&arc_knob_dark, LIGHT);

        lv_style_init(&disabled);
        lv_style_set_opa_layered(&disabled, 60);

        style_inited = true;
    }

    lv_obj_t * panel_0 = panel_create(parent);
    lv_obj_add_style(panel_0, &panel_size, 0);

    lv_obj_t * panel_header_0 = panel_header_create(panel_0);
    lv_obj_set_width(panel_header_0, lv_pct(100));

    lv_obj_t * lv_label_0 = lv_label_create(panel_header_0);
    lv_label_set_text(lv_label_0, "Light temperature");
    lv_obj_set_style_text_font(lv_label_0, geist_semibold_20, 0);


    lv_obj_t * switch_0 = switch_create(panel_header_0);
    lv_obj_bind_checked(switch_0, &light_temperature);



    lv_obj_t * lv_arc_0 = lv_arc_create(panel_0);
    lv_arc_bind_value(lv_arc_0, &light_temperature_temp);
    lv_arc_set_min_value(lv_arc_0, 0);
    lv_arc_set_max_value(lv_arc_0, 10000);
    lv_arc_set_bg_start_angle(lv_arc_0, 160);
    lv_arc_set_bg_end_angle(lv_arc_0, 380);
    lv_arc_set_start_angle(lv_arc_0, 180);
    lv_obj_add_style(lv_arc_0, &arc, 0);
    lv_obj_add_style(lv_arc_0, &arc_indicator, LV_PART_INDICATOR);
    lv_obj_add_style(lv_arc_0, &arc_knob, LV_PART_KNOB);
    lv_obj_bind_style(lv_arc_0, &arc_knob_dark, LV_PART_KNOB, &theme, 1);
    lv_obj_bind_state_if_eq(lv_arc_0, &light_temperature, LV_STATE_DISABLED, 0);
    lv_obj_add_style(lv_arc_0, &disabled, LV_STATE_DISABLED);


    lv_obj_t * div_0 = div_create(panel_0);
    lv_obj_set_style_layout(div_0, LV_LAYOUT_FLEX, 0);
    lv_obj_set_flex_flow(div_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(div_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_margin_top(div_0, -25, 0);
    lv_obj_bind_style(div_0, &disabled, 0, &light_temperature, 0);

    lv_obj_t * lv_label_1 = lv_label_create(div_0);
    lv_label_bind_text(lv_label_1, &light_temperature_temp, "%dK");lv_obj_set_style_text_font(lv_label_1, geist_semibold_28, 0);
    lv_obj_set_style_text_letter_space(lv_label_1, -1, 0);


    lv_obj_t * lv_label_2 = lv_label_create(div_0);
    lv_label_set_text(lv_label_2, "Dining room");
    lv_obj_set_style_text_font(lv_label_2, geist_semibold_12, 0);
    lv_obj_set_style_text_letter_space(lv_label_2, 0, 0);
    lv_obj_set_style_translate_y(lv_label_2, -4, 0);




    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(panel_0, "light_temperature_#");

    return panel_0;
}



/**********************
 *   STATIC FUNCTIONS
 **********************/

