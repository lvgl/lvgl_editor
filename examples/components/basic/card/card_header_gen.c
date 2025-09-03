/**
 * @file card_header_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "card_header_gen.h"
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

lv_obj_t * card_header_create(lv_obj_t * parent, const char * title)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t main;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&main);
        lv_style_set_width(&main, lv_pct(100));
        lv_style_set_height(&main, LV_SIZE_CONTENT);
        lv_style_set_text_font(&main, geist_semibold_20);
        lv_style_set_layout(&main, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&main, LV_FLEX_FLOW_ROW);
        lv_style_set_flex_main_place(&main, LV_FLEX_ALIGN_SPACE_BETWEEN);
        lv_style_set_flex_cross_place(&main, LV_FLEX_ALIGN_CENTER);
        lv_style_set_radius(&main, 0);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);

    lv_obj_remove_style_all(lv_obj_0);
    lv_obj_add_style(lv_obj_0, &main, 0);
    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_0, title);



    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "card_header_#");

    return lv_obj_0;
}



/**********************
 *   STATIC FUNCTIONS
 **********************/

