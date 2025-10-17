/**
 * @file move_goal_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "move_goal_gen.h"
#include "examples.h"

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

    lv_obj_t * card_0 = card_create(parent);
    lv_obj_set_name_static(card_0, "move_goal_#");

    lv_obj_t * column_0 = column_create(card_0);
    lv_obj_t * lv_label_0 = lv_label_create(column_0);
    lv_label_set_text(lv_label_0, "Move goal");
    lv_obj_set_style_text_font(lv_label_0, geist_semibold_20, 0);
    
    lv_obj_t * lv_label_1 = lv_label_create(column_0);
    lv_label_set_text(lv_label_1, "Set your daily activity goal");
    lv_obj_set_style_text_font(lv_label_1, geist_regular_14, 0);
    lv_obj_set_style_text_opa(lv_label_1, (255 * 50 / 100), 0);
    
    lv_obj_t * row_0 = row_create(card_0);
    lv_obj_set_height(row_0, 90);
    lv_obj_set_width(row_0, lv_pct(100));
    lv_obj_set_style_flex_main_place(row_0, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_t * stat_col_0 = stat_col_create(row_0, 8500, "Mon");
    
    lv_obj_t * stat_col_1 = stat_col_create(row_0, 4000, "Tue");
    
    lv_obj_t * stat_col_2 = stat_col_create(row_0, 6700, "Wed");
    
    lv_obj_t * stat_col_3 = stat_col_create(row_0, 4300, "Thu");
    
    lv_obj_t * stat_col_4 = stat_col_create(row_0, 1000, "Fri");
    
    lv_obj_t * stat_col_5 = stat_col_create(row_0, 0, "Sat");
    
    lv_obj_t * stat_col_6 = stat_col_create(row_0, 0, "Sun");
    
    lv_obj_t * goal_current = div_create(row_0);
    lv_obj_set_name(goal_current, "goal_current");
    lv_obj_set_flag(goal_current, LV_OBJ_FLAG_IGNORE_LAYOUT, true);
    lv_obj_set_height(goal_current, 3);
    lv_obj_set_style_bg_color(goal_current, ACCENT1_LIGHT, 0);
    lv_obj_set_style_bg_opa(goal_current, (255 * 100 / 100), 0);
    lv_obj_set_style_radius(goal_current, 10, 0);
    lv_obj_set_y(goal_current, 30);
    
    lv_obj_t * goal_set = div_create(row_0);
    lv_obj_set_name(goal_set, "goal_set");
    lv_obj_set_flag(goal_set, LV_OBJ_FLAG_IGNORE_LAYOUT, true);
    lv_obj_set_height(goal_set, 3);
    lv_obj_set_style_bg_color(goal_set, SURFACE_PRIMARY_LIGHT, 0);
    lv_obj_set_style_bg_opa(goal_set, OPA_MUTED, 0);
    lv_obj_set_style_radius(goal_set, 10, 0);
    lv_obj_set_y(goal_set, 44);
    
    lv_obj_t * row_1 = row_create(card_0);
    lv_obj_set_style_flex_main_place(row_1, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_width(row_1, lv_pct(100));
    lv_obj_t * circle_button_0 = circle_button_create(row_1, icon_minus);
    lv_obj_add_subject_increment_event(circle_button_0, &move_goal_target, LV_EVENT_CLICKED, -100);
    
    lv_obj_t * column_1 = column_create(row_1);
    lv_obj_set_style_flex_cross_place(column_1, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(column_1, -4, 0);
    lv_obj_t * lv_label_2 = lv_label_create(column_1);
    lv_label_bind_text(lv_label_2, &move_goal_target, NULL);
    lv_obj_set_style_text_font(lv_label_2, geist_semibold_28, 0);
    
    lv_obj_t * lv_label_3 = lv_label_create(column_1);
    lv_label_set_text(lv_label_3, "steps/day");
    lv_obj_set_style_text_font(lv_label_3, geist_semibold_12, 0);
    
    lv_obj_t * circle_button_1 = circle_button_create(row_1, icon_plus);
    lv_obj_add_subject_increment_event(circle_button_1, &move_goal_target, LV_EVENT_CLICKED, 100);
    
    lv_obj_t * button_0 = button_create(card_0, "Set your goal");
    lv_obj_set_width(button_0, lv_pct(100));

    LV_TRACE_OBJ_CREATE("finished");

    return card_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

