/**
 * @file lv_example_textarea_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_textarea_gen.h"
#include "../examples.h"

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

lv_obj_t * lv_example_textarea_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_ta;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_ta);
        lv_style_set_bg_color(&style_ta, lv_color_hex(0x111827));
        lv_style_set_bg_opa(&style_ta, (255 * 100 / 100));
        lv_style_set_text_color(&style_ta, lv_color_hex(0xf3f4f6));
        lv_style_set_radius(&style_ta, 8);
        lv_style_set_pad_all(&style_ta, 10);
        lv_style_set_border_color(&style_ta, lv_color_hex(0x3b82f6));
        lv_style_set_border_width(&style_ta, 1);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_textarea_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_pad_row(lv_obj_0, 12, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 16, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Text area: modes");

    lv_obj_t * lv_textarea_0 = lv_textarea_create(lv_obj_0);
    lv_obj_set_width(lv_textarea_0, 240);
    lv_textarea_set_one_line(lv_textarea_0, true);
    lv_textarea_set_placeholder_text(lv_textarea_0, "Type your name ...");
    lv_obj_add_style(lv_textarea_0, &style_ta, 0);

    lv_obj_t * lv_textarea_1 = lv_textarea_create(lv_obj_0);
    lv_obj_set_width(lv_textarea_1, 240);
    lv_textarea_set_one_line(lv_textarea_1, true);
    lv_textarea_set_password_mode(lv_textarea_1, true);
    lv_textarea_set_password_show_time(lv_textarea_1, 500);
    lv_textarea_set_text(lv_textarea_1, "secret");
    lv_obj_add_style(lv_textarea_1, &style_ta, 0);

    lv_obj_t * lv_textarea_2 = lv_textarea_create(lv_obj_0);
    lv_obj_set_width(lv_textarea_2, 240);
    lv_obj_set_height(lv_textarea_2, 64);
    lv_textarea_set_text(lv_textarea_2, "A multi-line text area wraps long lines and scrolls when the content grows.");
    lv_obj_add_style(lv_textarea_2, &style_ta, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

