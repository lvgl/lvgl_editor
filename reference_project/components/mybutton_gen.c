/**
 * @file mybutton_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "ui.h"

/*********************
 *      DEFINES
 *********************/
#define RED lv_color_hex(0xff0000)

#define BG_OPA (255 * 70 / 100)

/**
 * Just a helper.
 */
#define HALF_OPA 127

#define BORDER_WIDTH 2

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

lv_obj_t * mybutton_create(lv_obj_t * parent, lv_color_t button_color, lv_opa_t button_opa, void * icon, const char * text, lv_subject_t * subject, const char * fmt, int32_t ref_value)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_normal;
    static lv_style_t style_pressed;
    static lv_style_t style_sb;

    static bool style_inited = false;

    if (!style_inited) {
        
        lv_style_init(&style_normal);
        lv_style_set_bg_opa(&style_normal, BG_OPA);
        lv_style_set_border_width(&style_normal, 2);
        lv_style_set_border_color(&style_normal, lv_color_hex(0xff0000));
        lv_style_set_border_opa(&style_normal, 200);
        lv_style_set_width(&style_normal, lv_pct(100));
        lv_style_set_height(&style_normal, LV_SIZE_CONTENT);
        lv_style_set_pad_all(&style_normal, PAD_SM);
        lv_style_set_text_font(&style_normal, font_md);

        lv_style_init(&style_pressed);
        lv_style_set_bg_opa(&style_pressed, 110);

        lv_style_init(&style_sb);
        lv_style_set_bg_opa(&style_sb, 255 * 90 / 100);
        style_inited = true;
    }

    lv_obj_t * lv_button_1 = lv_button_create(parent);
    lv_obj_set_flex_flow(lv_button_1, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_opa(lv_button_1, button_opa, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(lv_button_1, &style_normal, 0);
    lv_obj_add_style(lv_button_1, &style_pressed, LV_STATE_PRESSED);
    lv_obj_add_style(lv_button_1, &style_sb, LV_PART_SCROLLBAR | LV_STATE_PRESSED | LV_STATE_CHECKED);
    lv_obj_bind_state_if_eq(lv_button_1, subject, LV_STATE_DISABLED, ref_value);
    lv_obj_bind_state_if_eq(lv_button_1, subject, LV_STATE_CHECKED, 20);
    lv_obj_add_subject_increment_event(lv_button_1, &subject1, LV_EVENT_CLICKED, 10, -2000000, 200);

    lv_obj_t * lv_image_1 = lv_image_create(lv_button_1);
    lv_image_set_src(lv_image_1, icon);

    lv_obj_t * lv_label_1 = lv_label_create(lv_button_1);
    lv_obj_add_style(lv_label_1, &style_normal, 0);
    lv_label_set_text(lv_label_1, text);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_button_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
