/**
 * @file scratchpad_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "scratchpad_gen.h"
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

lv_obj_t * scratchpad_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if(!style_inited) {
        
        style_inited = true;
    }

    lv_obj_t * lv_obj_1 = lv_obj_create(parent);
        lv_obj_set_style_border_width(lv_obj_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(lv_obj_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW);
    lv_obj_set_width(lv_obj_1, lv_pct(100));
    lv_obj_set_height(lv_obj_1, lv_pct(100));

    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
    lv_obj_set_flex_grow(lv_obj_2, 1);
    lv_obj_set_height(lv_obj_2, lv_pct(100));
    lv_obj_set_flex_flow(lv_obj_2, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_bg_color(lv_obj_2, lv_color_hex(0x114488), LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_2);
    lv_obj_set_width(lv_obj_3, lv_pct(100));
    lv_obj_set_height(lv_obj_3, LV_SIZE_CONTENT);
    lv_obj_set_flex_flow(lv_obj_3, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_bg_opa(lv_obj_3, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(lv_obj_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_flex_cross_place(lv_obj_3, LV_FLEX_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_flex_track_place(lv_obj_3, LV_FLEX_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_slider_1 = lv_slider_create(lv_obj_3);
    
    lv_slider_bind_value(lv_slider_1, &subject_room_1_temp);
    lv_obj_set_flex_grow(lv_slider_1, 1);

    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_3);
    
    lv_label_bind_text(lv_label_1, &subject_room_1_temp, NULL);
    lv_obj_set_width(lv_label_1, 25);
    lv_obj_set_y(lv_label_1, 0);

    lv_obj_t * lv_image_1 = lv_image_create(lv_obj_2);
    lv_image_set_src(lv_image_1, lvgl_logo);
    lv_image_set_inner_align(lv_image_1, LV_IMAGE_ALIGN_STRETCH);
    lv_obj_set_width(lv_image_1, 200);
    lv_obj_set_height(lv_image_1, 80);
    lv_image_set_rotation(lv_image_1, 300);

    lv_obj_t * button_default_1 = button_default_create(lv_obj_2, "Hello 1");
    lv_obj_set_width(button_default_1, lv_pct(100));

    lv_obj_t * button_warning_1 = button_warning_create(lv_obj_2, "Hello 2");
    lv_obj_set_width(button_warning_1, lv_pct(100));

    lv_obj_t * button_error_1 = button_error_create(lv_obj_2, "Hello 4");
    lv_obj_set_width(button_error_1, lv_pct(100));

    lv_obj_t * button_warning_2 = button_warning_create(lv_obj_2, "Hello 5");
    lv_obj_set_width(button_warning_2, lv_pct(100));

    lv_obj_t * button_default_2 = button_default_create(lv_obj_2, "Hello 6");
    lv_obj_set_width(button_default_2, lv_pct(100));

    lv_obj_t * button_default_3 = button_default_create(lv_obj_2, "Hello 7");
    lv_obj_set_width(button_default_3, lv_pct(100));

    lv_obj_t * button_default_4 = button_default_create(lv_obj_2, "Hello 8");
    lv_obj_set_width(button_default_4, lv_pct(100));

    lv_obj_t * button_default_5 = button_default_create(lv_obj_2, "Hello 9");
    lv_obj_set_width(button_default_5, lv_pct(100));

    lv_obj_t * lv_chart_1 = lv_chart_create(lv_obj_1);
    lv_obj_set_flex_grow(lv_chart_1, 1);
    lv_obj_set_height(lv_chart_1, lv_pct(100));

    lv_chart_series_t * lv_chart_1_series_1 = lv_chart_add_series(lv_chart_1, lv_color_hex(0xe34141), LV_CHART_AXIS_PRIMARY_Y);
    int32_t lv_chart_1_series_1_values[9] = {10, 20, 30, 30, 20, 80, 70, 90, 66};
    lv_chart_set_series_values(lv_chart_1, lv_chart_1_series_1, lv_chart_1_series_1_values, 9);

    lv_chart_series_t * lv_chart_1_series_2 = lv_chart_add_series(lv_chart_1, lv_color_hex(0x4c4ce9), LV_CHART_AXIS_SECONDARY_Y);
    int32_t lv_chart_1_series_2_values[7] = {3, 5, 4, 7, 1, 0, 3};
    lv_chart_set_series_values(lv_chart_1, lv_chart_1_series_2, lv_chart_1_series_2_values, 7);

    lv_chart_set_axis_range(lv_chart_1, LV_CHART_AXIS_SECONDARY_Y, 0, 10);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/