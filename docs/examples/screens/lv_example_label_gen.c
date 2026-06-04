/**
 * @file lv_example_label_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "lv_example_label_gen.h"
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

lv_obj_t * lv_example_label_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_box;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_box);
        lv_style_set_bg_color(&style_box, lv_color_hex(0x1f2937));
        lv_style_set_bg_opa(&style_box, (255 * 100 / 100));
        lv_style_set_radius(&style_box, 8);
        lv_style_set_pad_all(&style_box, 10);
        lv_style_set_text_color(&style_box, lv_color_hex(0xe5e7eb));
        lv_style_set_width(&style_box, 260);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "lv_example_label_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_pad_row(lv_obj_0, 12, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 16, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_0, "Label: features");

    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
    lv_label_set_recolor(lv_label_1, true);
    lv_label_set_text(lv_label_1, "Status: #16a34a OK# / #dc2626 ERROR#");
    lv_obj_add_style(lv_label_1, &style_box, 0);

    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
    lv_obj_set_width(lv_label_2, 200);
    lv_label_set_long_mode(lv_label_2, LV_LABEL_LONG_MODE_SCROLL_CIRCULAR);
    lv_label_set_text(lv_label_2, "This text is too long to fit so it scrolls around.");
    lv_obj_add_style(lv_label_2, &style_box, 0);

    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
    lv_label_bind_text(lv_label_3, &subject_value, "Bound value: %d %%");
    lv_obj_add_style(lv_label_3, &style_box, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

