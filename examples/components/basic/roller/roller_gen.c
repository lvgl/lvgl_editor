/**
 * @file roller_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "roller_gen.h"
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

lv_obj_t * roller_create(lv_obj_t * parent, lv_subject_t * subject_enable)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_base;
    static lv_style_t style_dark;
    static lv_style_t style_selected;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_base);
        lv_style_set_text_font(&style_base, geist_light_60);
        lv_style_set_text_line_space(&style_base, -16);
        lv_style_set_text_color(&style_base, SURFACE_PRIMARY_LIGHT);
        lv_style_set_text_opa(&style_base, OPA_MUTED);
        lv_style_set_text_align(&style_base, LV_TEXT_ALIGN_CENTER);
        lv_style_set_anim_duration(&style_base, 200);

        lv_style_init(&style_dark);
        lv_style_set_text_color(&style_dark, SURFACE_PRIMARY_DARK);

        lv_style_init(&style_selected);
        lv_style_set_bg_opa(&style_selected, 0);
        lv_style_set_text_opa(&style_selected, (255 * 100 / 100));
        lv_style_set_text_color(&style_selected, SURFACE_PRIMARY_LIGHT);

        style_inited = true;
    }

    lv_obj_t * lv_roller_0 = lv_roller_create(parent);
    lv_obj_set_name_static(lv_roller_0, "roller_#");

    lv_obj_remove_style_all(lv_roller_0);
    lv_obj_bind_state_if_eq(lv_roller_0, subject_enable, LV_STATE_DISABLED, 0);
    lv_obj_add_style(lv_roller_0, &style_base, 0);
    lv_obj_add_style(lv_roller_0, &style_selected, LV_PART_SELECTED);
    lv_obj_bind_style(lv_roller_0, &style_dark, 0, &dark_theme, 1);
    lv_obj_bind_style(lv_roller_0, &style_dark, LV_PART_SELECTED, &dark_theme, 1);
    lv_obj_bind_style(lv_roller_0, &style_disabled, 0, subject_enable, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_roller_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

