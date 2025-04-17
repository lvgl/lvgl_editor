/**
 * @file button_warning_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "button_warning_gen.h"
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

lv_obj_t * button_warning_create(lv_obj_t * parent, const char * button_label)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    static lv_style_t style_pr;

    static bool style_inited = false;

    if(!style_inited) {
        
        lv_style_init(&style_main);
        lv_style_set_bg_color(&style_main, lv_color_hex(0xf0b005));
        lv_style_set_bg_opa(&style_main, 255);
        lv_style_set_width(&style_main, LV_SIZE_CONTENT);
        lv_style_set_height(&style_main, LV_SIZE_CONTENT);
        lv_style_set_radius(&style_main, 12);
        lv_style_set_pad_hor(&style_main, 24);
        lv_style_set_pad_ver(&style_main, 12);
        lv_style_set_shadow_width(&style_main, 0);

        lv_style_init(&style_pr);
        lv_style_set_bg_color(&style_pr, lv_color_hex(0xf9ca4e));
        lv_style_set_bg_opa(&style_pr, 255);
        lv_style_set_width(&style_pr, LV_SIZE_CONTENT);
        lv_style_set_height(&style_pr, LV_SIZE_CONTENT);
        lv_style_set_radius(&style_pr, 12);
        lv_style_set_shadow_width(&style_pr, 20);
        lv_style_set_shadow_color(&style_pr, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&style_pr, 102);
        lv_style_set_shadow_offset_x(&style_pr, 0);
        lv_style_set_shadow_offset_y(&style_pr, 4);
        lv_style_set_pad_hor(&style_pr, 24);
        lv_style_set_pad_ver(&style_pr, 12);

        style_inited = true;
    }

    lv_obj_t * lv_button_1 = lv_button_create(parent);
        lv_obj_add_style(lv_button_1, &style_main, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * h3_1 = h3_create(lv_button_1, button_label);
    lv_obj_set_align(h3_1, LV_ALIGN_CENTER);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_button_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/