/**
 * @file step_button_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "step_button_gen.h"
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

lv_obj_t * step_button_create(lv_obj_t * parent, lv_subject_t * subject, int32_t step, int32_t min, int32_t max, const char * text)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t simple_pressed;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&simple_pressed);
        lv_style_set_transform_width(&simple_pressed, 0);
        lv_style_set_transform_height(&simple_pressed, 0);

        style_inited = true;
    }

    lv_obj_t * lv_button_0 = lv_button_create(parent);
    lv_obj_add_style(lv_button_0, &simple_pressed, LV_STATE_PRESSED);
    lv_obj_add_subject_increment_event(lv_button_0, subject, LV_EVENT_CLICKED, step, min, max);
    lv_obj_add_subject_increment_event(lv_button_0, subject, LV_EVENT_LONG_PRESSED_REPEAT, step, min, max);

    lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_0, text);



    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_button_0, "step_button_#");

    return lv_button_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/