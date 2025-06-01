/**
 * @file mybutton_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "mybutton_gen.h"
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

lv_obj_t * mybutton_create(lv_obj_t * parent, lv_color_t button_color, lv_opa_t button_opa, void * icon, const char * text, lv_subject_t * subject, int32_t fmt, int32_t ref_value)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_normal;

    static bool style_inited = false;

    if (!style_inited) {
        
        lv_style_init(&style_normal);
        lv_style_set_bg_opa(&style_normal, #bg_opa%);
        lv_style_set_border_width(&style_normal, 2);
        lv_style_set_border_color(&style_normal, lv_color_hex(0xff0000));
        lv_style_set_border_opa(&style_normal, 200);
        lv_style_set_width(&style_normal, lv_pct(100));
        lv_style_set_height(&style_normal, LV_SIZE_CONTENT);
        lv_style_set_pad_all(&style_normal, #pad_sm);
        lv_style_set_text_font(&style_normal, font_md);

        style_inited = true;
    }

    lv_obj_t * lv_button_1 = lv_button_create(parent);
        lv_obj_set_flex_flow(lv_button_1, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_opa(lv_button_1, button_opa, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_image_1 = lv_image_create(lv_button_1);
    lv_image_set_src(lv_image_1, icon);

    lv_obj_t * lv_label_1 = lv_label_create(lv_button_1);
    lv_label_set_text(lv_label_1, text);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_button_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/