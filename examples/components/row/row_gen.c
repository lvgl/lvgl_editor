/**
 * @file row_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "row_gen.h"
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

lv_obj_t * row_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t main_style;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&main_style);
        lv_style_set_bg_opa(&main_style, 0);
        lv_style_set_border_width(&main_style, 0);
        lv_style_set_pad_all(&main_style, 0);
        lv_style_set_width(&main_style, LV_SIZE_CONTENT);
        lv_style_set_height(&main_style, LV_SIZE_CONTENT);
        lv_style_set_layout(&main_style, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&main_style, LV_FLEX_FLOW_ROW);
        lv_style_set_radius(&main_style, 0);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);

    lv_obj_add_style(lv_obj_0, &main_style, 0);


    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "row_#");

    return lv_obj_0;
}



/**********************
 *   STATIC FUNCTIONS
 **********************/

