/**
 * @file elements_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "elements_gen.h"
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

lv_obj_t * elements_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_light;
    static lv_style_t style_dark;
    static lv_style_t style_cols;
    static lv_style_t style_col;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_light);
        lv_style_set_bg_color(&style_light, ACCENT2_50_LIGHT);

        lv_style_init(&style_dark);
        lv_style_set_bg_color(&style_dark, ACCENT2_50_DARK);

        lv_style_init(&style_cols);
        lv_style_set_layout(&style_cols, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&style_cols, LV_FLEX_FLOW_ROW);
        lv_style_set_pad_column(&style_cols, 16);

        lv_style_init(&style_col);
        lv_style_set_layout(&style_col, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&style_col, LV_FLEX_FLOW_COLUMN);
        lv_style_set_pad_row(&style_col, 16);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_style_pad_all(lv_obj_0, 48, 0);
    lv_obj_bind_style(lv_obj_0, &style_light, 0, &theme, 0);
    lv_obj_bind_style(lv_obj_0, &style_dark, 0, &theme, 1);

    lv_obj_t * theme_switcher_0 = theme_switcher_create(lv_obj_0);
    lv_obj_set_style_translate_x(theme_switcher_0, -24, 0);
    lv_obj_set_style_translate_y(theme_switcher_0, -24, 0);


    lv_obj_t * cols = lv_obj_create(lv_obj_0);
    lv_obj_set_name(cols, "cols");
    lv_obj_set_align(cols, LV_ALIGN_CENTER);
    lv_obj_add_style(cols, &style_reset, 0);
    lv_obj_add_style(cols, &style_cols, 0);

    lv_obj_t * col1 = lv_obj_create(cols);
    lv_obj_set_name(col1, "col1");
    lv_obj_add_style(col1, &style_reset, 0);
    lv_obj_add_style(col1, &style_col, 0);

    lv_obj_t * thermostat_0 = thermostat_create(col1);


    lv_obj_t * move_goal_0 = move_goal_create(col1);



    lv_obj_t * col2 = lv_obj_create(cols);
    lv_obj_set_name(col2, "col2");
    lv_obj_add_style(col2, &style_reset, 0);
    lv_obj_add_style(col2, &style_col, 0);

    lv_obj_t * weather_0 = weather_create(col2);


    lv_obj_t * alarm_0 = alarm_create(col2);



    lv_obj_t * col3 = lv_obj_create(cols);
    lv_obj_set_name(col3, "col3");
    lv_obj_add_style(col3, &style_reset, 0);
    lv_obj_add_style(col3, &style_col, 0);

    lv_obj_t * light_temperature_0 = light_temperature_create(col3);


    lv_obj_t * music_player_0 = music_player_create(col3);


    lv_obj_t * speaker_volume_0 = speaker_volume_create(col3);





    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "elements");

    return lv_obj_0;
}



/**********************
 *   STATIC FUNCTIONS
 **********************/

