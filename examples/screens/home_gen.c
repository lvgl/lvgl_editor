/**
 * @file home_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "home_gen.h"
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

lv_obj_t * home_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    static lv_style_t style_cont;
    static lv_style_t style_left_cont;
    static lv_style_t style_right_cont;

    static bool style_inited = false;

    if(!style_inited) {
        
        lv_style_init(&style_main);
        lv_style_set_bg_color(&style_main, lv_color_hex(0x111111));
        lv_style_set_radius(&style_main, 0);
        lv_style_set_border_width(&style_main, 0);
        lv_style_set_layout(&style_main, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&style_main, LV_FLEX_FLOW_ROW);
        lv_style_set_width(&style_main, lv_pct(100));
        lv_style_set_height(&style_main, lv_pct(100));
        lv_style_set_pad_all(&style_main, 0);
        lv_style_set_pad_column(&style_main, 0);

        lv_style_init(&style_cont);
        lv_style_set_height(&style_cont, lv_pct(100));
        lv_style_set_bg_color(&style_cont, lv_color_hex(0x333333));
        lv_style_set_flex_flow(&style_cont, LV_FLEX_FLOW_COLUMN);
        lv_style_set_layout(&style_cont, LV_LAYOUT_FLEX);
        lv_style_set_radius(&style_cont, 0);
        lv_style_set_pad_all(&style_cont, 0);
        lv_style_set_pad_row(&style_cont, 16);

        lv_style_init(&style_left_cont);
        lv_style_set_width(&style_left_cont, LV_SIZE_CONTENT);
        lv_style_set_border_width(&style_left_cont, 0);
        lv_style_set_pad_all(&style_left_cont, 16);

        lv_style_init(&style_right_cont);
        lv_style_set_layout(&style_right_cont, LV_LAYOUT_FLEX);
        lv_style_set_bg_opa(&style_right_cont, 0);
        lv_style_set_border_width(&style_right_cont, 0);
        lv_style_set_flex_flow(&style_right_cont, LV_FLEX_FLOW_COLUMN);
        lv_style_set_flex_track_place(&style_right_cont, LV_FLEX_ALIGN_CENTER);
        lv_style_set_flex_cross_place(&style_right_cont, LV_FLEX_ALIGN_CENTER);
        lv_style_set_pad_all(&style_right_cont, 16);

        style_inited = true;
    }

    lv_obj_t * lv_obj_1 = lv_obj_create(NULL);
        lv_obj_add_style(lv_obj_1, &style_main, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
    lv_obj_add_style(lv_obj_2, &style_cont, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(lv_obj_2, &style_left_cont, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * slider_box_1 = slider_box_create(lv_obj_2);
    lv_obj_set_width(slider_box_1, 155);
    slider_box_set_title(slider_box_1, "Room 1");

    lv_obj_t * slider_box_2 = slider_box_create(lv_obj_2);
    lv_obj_set_width(slider_box_2, 155);
    slider_box_set_title(slider_box_2, "Room 2");

    lv_obj_t * slider_box_3 = slider_box_create(lv_obj_2);
    lv_obj_set_width(slider_box_3, 155);
    slider_box_set_title(slider_box_3, "Room 3");

    lv_obj_t * slider_box_4 = slider_box_create(lv_obj_2);
    lv_obj_set_width(slider_box_4, 155);
    slider_box_set_title(slider_box_4, "Room 4");

    lv_obj_t * slider_box_5 = slider_box_create(lv_obj_2);
    lv_obj_set_width(slider_box_5, 155);
    slider_box_set_title(slider_box_5, "Room 5");

    lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_1);
    lv_obj_add_style(lv_obj_3, &style_cont, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(lv_obj_3, &style_right_cont, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_flex_grow(lv_obj_3, 1);

    button_default_create(lv_obj_3, "Ok");

    button_default_create(lv_obj_3, "Cancel");

    lv_obj_t * dark_slider_1 = dark_slider_create(lv_obj_3);
    lv_obj_set_width(dark_slider_1, lv_pct(100));
    dark_slider_set_color(dark_slider_1, lv_color_hex(0xf03c0f));

    button_warning_create(lv_obj_3, "Alert 1");

    button_warning_create(lv_obj_3, "Alert 2");

    button_error_create(lv_obj_3, "Error 1");

    button_error_create(lv_obj_3, "Error 2");


    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/