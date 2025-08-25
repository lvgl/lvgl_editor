/**
 * @file move_goal_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "move_goal_gen.h"
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

lv_obj_t * move_goal_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t panel_size;
    static lv_style_t stats;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&panel_size);
        lv_style_set_width(&panel_size, 320);
        lv_style_set_height(&panel_size, 320);

        lv_style_init(&stats);
        lv_style_set_width(&stats, lv_pct(100));
        lv_style_set_height(&stats, LV_SIZE_CONTENT);
        lv_style_set_layout(&stats, LV_LAYOUT_FLEX);
        lv_style_set_flex_main_place(&stats, LV_FLEX_ALIGN_SPACE_BETWEEN);

        style_inited = true;
    }

    lv_obj_t * panel_0 = panel_create(parent);
    lv_obj_set_style_flex_main_place(panel_0, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_add_style(panel_0, &panel_size, 0);

    lv_obj_t * panel_header_0 = panel_header_create(panel_0);
    lv_obj_set_width(panel_header_0, lv_pct(100));
    lv_obj_set_style_flex_flow(panel_header_0, LV_FLEX_FLOW_COLUMN, 0);
    lv_obj_set_style_flex_main_place(panel_header_0, LV_FLEX_ALIGN_START, 0);
    lv_obj_set_style_flex_cross_place(panel_header_0, LV_FLEX_ALIGN_START, 0);

    lv_obj_t * lv_label_0 = lv_label_create(panel_header_0);
    lv_label_set_text(lv_label_0, "Move goal");
    lv_obj_set_style_text_font(lv_label_0, geist_semibold_20, 0);


    lv_obj_t * lv_label_1 = lv_label_create(panel_header_0);
    lv_label_set_text(lv_label_1, "Set your daily activity goal");
    lv_obj_set_style_text_font(lv_label_1, geist_regular_14, 0);
    lv_obj_set_style_text_opa(lv_label_1, 140, 0);



    lv_obj_t * stats_wrapper = div_create(panel_0);
    lv_obj_set_name(stats_wrapper, "stats_wrapper");
    lv_obj_set_width(stats_wrapper, lv_pct(100));

    lv_obj_t * div_0 = div_create(stats_wrapper);
    lv_obj_add_style(div_0, &stats, 0);

    lv_obj_t * stat_col_0 = stat_col_create(div_0, 8500, "Mon");


    lv_obj_t * stat_col_1 = stat_col_create(div_0, 4000, "Tue");


    lv_obj_t * stat_col_2 = stat_col_create(div_0, 6700, "Wed");


    lv_obj_t * stat_col_3 = stat_col_create(div_0, 4300, "Thu");


    lv_obj_t * stat_col_4 = stat_col_create(div_0, 1000, "Fri");


    lv_obj_t * stat_col_5 = stat_col_create(div_0, 0, "Sat");


    lv_obj_t * stat_col_6 = stat_col_create(div_0, 0, "Sun");



    lv_obj_t * goal_current = div_create(stats_wrapper);
    lv_obj_set_name(goal_current, "goal_current");
    lv_obj_set_width(goal_current, lv_pct(100));
    lv_obj_set_height(goal_current, 3);
    lv_obj_set_style_bg_color(goal_current, ACCENT1_LIGHT, 0);
    lv_obj_set_style_bg_opa(goal_current, 255, 0);
    lv_obj_set_style_radius(goal_current, lv_pct(50), 0);
    lv_obj_set_y(goal_current, 30);


    lv_obj_t * goal_set = div_create(stats_wrapper);
    lv_obj_set_name(goal_set, "goal_set");
    lv_obj_set_width(goal_set, lv_pct(100));
    lv_obj_set_height(goal_set, 3);
    lv_obj_set_style_bg_color(goal_set, SURFACE_PRIMARY_LIGHT, 0);
    lv_obj_set_style_bg_opa(goal_set, 42, 0);
    lv_obj_set_style_radius(goal_set, lv_pct(50), 0);
    lv_obj_set_y(goal_set, 44);



    lv_obj_t * div_1 = div_create(panel_0);
    lv_obj_set_style_layout(div_1, LV_LAYOUT_FLEX, 0);
    lv_obj_set_width(div_1, lv_pct(100));
    lv_obj_set_style_flex_main_place(div_1, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);

    lv_obj_t * circle_button_0 = circle_button_create(div_1, icon_minus);
    lv_obj_add_subject_increment_event(circle_button_0, &move_goal_target, LV_EVENT_CLICKED, -100, 0, 2000);


    lv_obj_t * div_2 = div_create(div_1);
    lv_obj_set_style_layout(div_2, LV_LAYOUT_FLEX, 0);
    lv_obj_set_flex_flow(div_2, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(div_2, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(div_2, -4, 0);

    lv_obj_t * lv_label_2 = lv_label_create(div_2);
    lv_label_bind_text(lv_label_2, &move_goal_target, NULL);lv_obj_set_style_text_font(lv_label_2, geist_semibold_28, 0);


    lv_obj_t * lv_label_3 = lv_label_create(div_2);
    lv_label_set_text(lv_label_3, "steps/day");
    lv_obj_set_style_text_font(lv_label_3, geist_semibold_12, 0);



    lv_obj_t * circle_button_1 = circle_button_create(div_1, icon_plus);
    lv_obj_add_subject_increment_event(circle_button_1, &move_goal_target, LV_EVENT_CLICKED, 100, 0, 2000);



    lv_obj_t * button_0 = button_create(panel_0, "Set your goal");
    lv_obj_set_width(button_0, lv_pct(100));



    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(panel_0, "move_goal_#");

    return panel_0;
}



/**********************
 *   STATIC FUNCTIONS
 **********************/

