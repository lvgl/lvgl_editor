/**
 * @file scratchpad_gen.c
 *
 * @description Template source file for LVGL objects
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "scratchpad_gen.h"
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

lv_obj_t * scratchpad_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    

    static bool style_inited = false;

    if(!style_inited) {
        
        style_inited = true;
    }

    lv_obj_t * lv_obj_1 = lv_obj_create(parent);
    lv_obj_set_width(lv_obj_1, lv_pct(50));
    lv_obj_set_height(lv_obj_1, lv_pct(100));
    lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex(0x114488), LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * button_default_1 = button_default_create(lv_obj_1, "Hello");
    lv_obj_set_width(button_default_1, lv_pct(100));

    lv_obj_t * button_default_2 = button_default_create(lv_obj_1, "Hello");
    lv_obj_set_width(button_default_2, lv_pct(100));

    lv_obj_t * button_default_3 = button_default_create(lv_obj_1, "Hello");
    lv_obj_set_width(button_default_3, lv_pct(100));

    lv_obj_t * button_error_1 = button_error_create(lv_obj_1, "Hello");
    lv_obj_set_width(button_error_1, lv_pct(100));

    lv_obj_t * button_warning_1 = button_warning_create(lv_obj_1, "Hello");
    lv_obj_set_width(button_warning_1, lv_pct(100));

    lv_obj_t * button_default_4 = button_default_create(lv_obj_1, "Hello");
    lv_obj_set_width(button_default_4, lv_pct(100));

    lv_obj_t * button_default_5 = button_default_create(lv_obj_1, "Hello");
    lv_obj_set_width(button_default_5, lv_pct(100));

    lv_obj_t * button_default_6 = button_default_create(lv_obj_1, "Hello");
    lv_obj_set_width(button_default_6, lv_pct(100));

    lv_obj_t * button_default_7 = button_default_create(lv_obj_1, "Hello");
    lv_obj_set_width(button_default_7, lv_pct(100));


    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}
/**********************
 *   STATIC FUNCTIONS
 **********************/
