/**
 * @file stat_col_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "stat_col_gen.h"
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

lv_obj_t * stat_col_create(lv_obj_t * parent, int32_t move, const char * day)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    static lv_style_t style_main_dark;
    static lv_style_t style_bar;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_main);
        lv_style_set_height(&style_main, lv_pct(100));
        lv_style_set_flex_cross_place(&style_main, LV_FLEX_ALIGN_CENTER);
        lv_style_set_pad_row(&style_main, UNIT_SM);

        lv_style_init(&style_main_dark);
        lv_style_set_text_color(&style_main_dark, SURFACE_PRIMARY_DARK);

        lv_style_init(&style_bar);
        lv_style_set_width(&style_bar, UNIT_MD);
        lv_style_set_flex_grow(&style_bar, 1);

        style_inited = true;
    }

    lv_obj_t * column_0 = column_create(parent);

    lv_obj_add_style(column_0, &style_main, 0);
    lv_obj_bind_style(column_0, &style_main_dark, 0, &dark_theme, 1);
    lv_obj_t * bar_0 = bar_create(column_0);
    lv_bar_set_min_value(bar_0, 0);
    lv_bar_set_max_value(bar_0, 10000);
    lv_bar_set_value(bar_0, move, false);
    lv_obj_add_style(bar_0, &style_bar, 0);

    lv_obj_t * lv_label_0 = lv_label_create(column_0);
    lv_label_set_text(lv_label_0, day);
    lv_obj_set_style_text_font(lv_label_0, geist_semibold_12, 0);



    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(column_0, "stat_col_#");

    return column_0;
}



/**********************
 *   STATIC FUNCTIONS
 **********************/

