/**
 * @file about_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "about_gen.h"
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

lv_obj_t * about_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_style_pad_all(lv_obj_0, 8, 0);

    lv_obj_t * column_0 = column_create(lv_obj_0);
    lv_obj_set_height(column_0, lv_pct(100));
    lv_obj_set_width(column_0, lv_pct(100));
    lv_obj_set_style_flex_cross_place(column_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_track_place(column_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_main_place(column_0, LV_FLEX_ALIGN_SPACE_EVENLY, 0);

    lv_obj_t * lv_label_0 = lv_label_create(column_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, lv_tr("info"));


    lv_obj_t * lv_button_0 = lv_button_create(column_0);
    lv_obj_set_style_text_font(lv_button_0, font_subtitle, 0);

    lv_obj_t * lv_label_1 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_1, lv_tr("back"));

    lv_obj_add_screen_load_event(lv_button_0, LV_EVENT_CLICKED, settings, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);




    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "about");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/