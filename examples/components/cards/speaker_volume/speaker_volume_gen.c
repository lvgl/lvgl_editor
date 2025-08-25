/**
 * @file speaker_volume_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "speaker_volume_gen.h"
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

lv_obj_t * speaker_volume_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t panel_size;
    static lv_style_t panel_light;
    static lv_style_t panel_dark;
    static lv_style_t panel_content_disabled;
    static lv_style_t stats;
    static lv_style_t slider_main;
    static lv_style_t slider_main_light;
    static lv_style_t slider_main_dark;
    static lv_style_t slider_indicator_light;
    static lv_style_t slider_indicator_dark;
    static lv_style_t slider_knob;
    static lv_style_t slider_knob_light;
    static lv_style_t slider_knob_dark;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&panel_size);
        lv_style_set_width(&panel_size, 320);
        lv_style_set_height(&panel_size, 144);

        lv_style_init(&panel_light);
        lv_style_set_bg_color(&panel_light, ACCENT2_LIGHT);

        lv_style_init(&panel_dark);
        lv_style_set_bg_color(&panel_dark, ACCENT2_DARK);

        lv_style_init(&panel_content_disabled);
        lv_style_set_opa_layered(&panel_content_disabled, 60);

        lv_style_init(&stats);
        lv_style_set_width(&stats, lv_pct(100));
        lv_style_set_height(&stats, LV_SIZE_CONTENT);
        lv_style_set_layout(&stats, LV_LAYOUT_FLEX);
        lv_style_set_flex_main_place(&stats, LV_FLEX_ALIGN_SPACE_BETWEEN);
        lv_style_set_pad_ver(&stats, 16);

        lv_style_init(&slider_main);
        lv_style_set_height(&slider_main, 20);
        lv_style_set_bg_opa(&slider_main, 20);

        lv_style_init(&slider_main_light);
        lv_style_set_bg_color(&slider_main_light, SURFACE_PRIMARY_LIGHT);

        lv_style_init(&slider_main_dark);
        lv_style_set_bg_color(&slider_main_dark, SURFACE_PRIMARY_DARK);

        lv_style_init(&slider_indicator_light);
        lv_style_set_bg_color(&slider_indicator_light, SURFACE_PRIMARY_LIGHT);

        lv_style_init(&slider_indicator_dark);
        lv_style_set_bg_color(&slider_indicator_dark, SURFACE_PRIMARY_DARK);

        lv_style_init(&slider_knob);
        lv_style_set_pad_all(&slider_knob, 2);
        lv_style_set_border_width(&slider_knob, 8);
        lv_style_set_shadow_width(&slider_knob, 4);
        lv_style_set_shadow_offset_y(&slider_knob, 2);
        lv_style_set_shadow_spread(&slider_knob, 0);
        lv_style_set_shadow_opa(&slider_knob, 41);

        lv_style_init(&slider_knob_light);
        lv_style_set_bg_color(&slider_knob_light, SURFACE_PRIMARY_LIGHT);
        lv_style_set_border_color(&slider_knob_light, BG_PRIMARY_LIGHT);

        lv_style_init(&slider_knob_dark);
        lv_style_set_bg_color(&slider_knob_dark, SURFACE_PRIMARY_DARK);
        lv_style_set_border_color(&slider_knob_dark, BG_PRIMARY_DARK);

        style_inited = true;
    }

    lv_obj_t * panel_0 = panel_create(parent);
    lv_obj_add_style(panel_0, &panel_size, 0);
    lv_obj_bind_style(panel_0, &panel_light, 0, &theme, 0);
    lv_obj_bind_style(panel_0, &panel_dark, 0, &theme, 1);

    lv_obj_t * panel_header_0 = panel_header_create(panel_0);
    lv_obj_set_width(panel_header_0, lv_pct(100));

    lv_obj_t * lv_label_0 = lv_label_create(panel_header_0);
    lv_label_set_text(lv_label_0, "Speaker volume");
    lv_obj_set_style_text_font(lv_label_0, geist_semibold_20, 0);


    lv_obj_t * switch_0 = switch_create(panel_header_0);
    lv_obj_bind_checked(switch_0, &speaker);



    lv_obj_t * lv_label_1 = lv_label_create(panel_0);
    lv_label_bind_text(lv_label_1, &speaker_vol, NULL);lv_obj_set_width(lv_label_1, lv_pct(100));
    lv_obj_set_style_text_font(lv_label_1, geist_semibold_28, 0);
    lv_obj_set_style_text_letter_space(lv_label_1, -1, 0);
    lv_obj_add_style(lv_label_1, &panel_content_disabled, LV_STATE_DISABLED);
    lv_obj_bind_state_if_eq(lv_label_1, &speaker, LV_STATE_DISABLED, 0);


    lv_obj_t * lv_slider_0 = lv_slider_create(panel_0);
    lv_slider_bind_value(lv_slider_0, &speaker_vol);
    lv_obj_set_style_margin_top(lv_slider_0, -8, 0);
    lv_obj_set_width(lv_slider_0, lv_pct(100));
    lv_obj_bind_state_if_eq(lv_slider_0, &speaker, LV_STATE_DISABLED, 0);
    lv_obj_add_style(lv_slider_0, &slider_main, 0);
    lv_obj_bind_style(lv_slider_0, &slider_main_light, LV_PART_MAIN, &theme, 0);
    lv_obj_bind_style(lv_slider_0, &slider_main_dark, LV_PART_MAIN, &theme, 1);
    lv_obj_bind_style(lv_slider_0, &slider_indicator_light, LV_PART_INDICATOR, &theme, 0);
    lv_obj_bind_style(lv_slider_0, &slider_indicator_dark, LV_PART_INDICATOR, &theme, 1);
    lv_obj_add_style(lv_slider_0, &slider_knob, LV_PART_KNOB);
    lv_obj_bind_style(lv_slider_0, &slider_knob_light, LV_PART_KNOB, &theme, 0);
    lv_obj_bind_style(lv_slider_0, &slider_knob_dark, LV_PART_KNOB, &theme, 1);
    lv_obj_add_style(lv_slider_0, &panel_content_disabled, LV_STATE_DISABLED);



    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(panel_0, "speaker_volume_#");

    return panel_0;
}



/**********************
 *   STATIC FUNCTIONS
 **********************/

