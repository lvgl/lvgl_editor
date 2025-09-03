/**
 * @file div_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "div_gen.h"
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

lv_obj_t * div_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t main;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&main);
        lv_style_set_width(&main, lv_pct(100));
        lv_style_set_height(&main, LV_SIZE_CONTENT);
        lv_style_set_layout(&main, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&main, LV_FLEX_FLOW_COLUMN);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);

    lv_obj_remove_style(lv_obj_0, NULL, 0);
    lv_obj_add_style(lv_obj_0, &main, 0);


    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "div_#");

    return lv_obj_0;
}



/**********************
 *   STATIC FUNCTIONS
 **********************/

