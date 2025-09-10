/**
 * @file comp1_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "comp1_gen.h"
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

lv_obj_t * comp1_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t light;
    static lv_style_t dark;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&light);
        lv_style_set_bg_color(&light, lv_color_hex(0x9bd67f));
        lv_style_set_text_color(&light, lv_color_hex(0x003ab5));

        lv_style_init(&dark);
        lv_style_set_bg_color(&dark, lv_color_hex(0x0f0c78));
        lv_style_set_text_color(&dark, lv_color_hex(0x899bc1));

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_width(lv_obj_0, 300);

    lv_obj_t * lv_checkbox_0 = lv_checkbox_create(lv_obj_0);
    lv_obj_bind_checked(lv_checkbox_0, &bluetooth_on);


    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
    lv_obj_add_style(lv_button_0, &light, 0);
    lv_obj_bind_style(lv_button_0, &dark, 0, &bluetooth_on, 1);
    lv_obj_bind_flag_if_eq(lv_button_0, &notification_on, LV_OBJ_FLAG_CLICKABLE, 1);

    lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_0, "hello");




    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "comp1_#");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/