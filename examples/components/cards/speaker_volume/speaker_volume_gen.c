/**
 * @file speaker_volume_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "speaker_volume_gen.h"
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

lv_obj_t * speaker_volume_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_panel_light;
    static lv_style_t style_panel_dark;
    static lv_style_t style_disabled;
    static lv_style_t style_knob;
    static lv_style_t style_knob_dark;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_panel_light);
        lv_style_set_bg_color(&style_panel_light, ACCENT2_LIGHT);

        lv_style_init(&style_panel_dark);
        lv_style_set_bg_color(&style_panel_dark, ACCENT2_DARK);

        lv_style_init(&style_disabled);
        lv_style_set_opa_layered(&style_disabled, 60);

        lv_style_init(&style_knob);
        lv_style_set_pad_all(&style_knob, 2);
        lv_style_set_border_width(&style_knob, 8);
        lv_style_set_bg_color(&style_knob, SURFACE_PRIMARY_LIGHT);
        lv_style_set_border_color(&style_knob, BG_PRIMARY_LIGHT);
        lv_style_set_shadow_width(&style_knob, 4);
        lv_style_set_shadow_offset_y(&style_knob, 2);
        lv_style_set_shadow_opa(&style_knob, (255 * 20 / 100));

        lv_style_init(&style_knob_dark);
        lv_style_set_bg_color(&style_knob_dark, SURFACE_PRIMARY_DARK);
        lv_style_set_border_color(&style_knob_dark, BG_PRIMARY_DARK);

        style_inited = true;
    }

    lv_obj_t * card_0 = card_create(parent);
    lv_obj_set_name_static(card_0, "speaker_volume_#");

    lv_obj_add_style(card_0, &style_panel_light, 0);
    lv_obj_bind_style(card_0, &style_panel_dark, 0, &dark_theme, 1);
    lv_obj_t * card_header_0 = card_header_create(card_0, "Speaker Volume");
    lv_obj_t * switch_0 = switch_create(card_header_0);
    lv_obj_bind_checked(switch_0, &speaker);
    
    lv_obj_t * lv_label_0 = lv_label_create(card_0);
    lv_label_bind_text(lv_label_0, &speaker_vol, NULL);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_font(lv_label_0, geist_semibold_28, 0);
    lv_obj_set_style_text_letter_space(lv_label_0, -1, 0);
    lv_obj_add_style(lv_label_0, &style_disabled, LV_STATE_DISABLED);
    lv_obj_bind_state_if_eq(lv_label_0, &speaker, LV_STATE_DISABLED, 0);
    
    lv_obj_t * slider_0 = slider_create(card_0);
    lv_obj_set_height(slider_0, 20);
    lv_slider_bind_value(slider_0, &speaker_vol);
    lv_obj_add_style(slider_0, &style_knob, LV_PART_KNOB);
    lv_obj_bind_style(slider_0, &style_knob_dark, LV_PART_KNOB, &dark_theme, 1);
    lv_obj_add_style(slider_0, &style_disabled, LV_STATE_DISABLED);
    lv_obj_bind_state_if_eq(slider_0, &speaker, LV_STATE_DISABLED, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return card_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

