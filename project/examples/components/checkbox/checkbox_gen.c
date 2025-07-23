/**
 * @file checkbox_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "checkbox_gen.h"
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

lv_obj_t * checkbox_create(lv_obj_t * parent, const char * text, lv_subject_t * subject)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t box;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&box);
        lv_style_set_transform_width(&box, 0);
        lv_style_set_transform_height(&box, 0);

        style_inited = true;
    }

    lv_obj_t * lv_checkbox_0 = lv_checkbox_create(parent);
    lv_obj_bind_checked(lv_checkbox_0, subject);
    lv_checkbox_set_text(lv_checkbox_0, text);
    lv_obj_add_style(lv_checkbox_0, &box, LV_PART_INDICATOR | LV_STATE_PRESSED);


    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_checkbox_0, "checkbox_#");

    return lv_checkbox_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/