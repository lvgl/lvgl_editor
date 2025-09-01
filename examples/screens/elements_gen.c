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

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_light);
        lv_style_set_bg_color(&style_light, ACCENT2_50_LIGHT);

        lv_style_init(&style_dark);
        lv_style_set_bg_color(&style_dark, ACCENT2_50_DARK);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_bind_style(lv_obj_0, &style_light, 0, &dark_theme, 0);
    lv_obj_bind_style(lv_obj_0, &style_dark, 0, &dark_theme, 1);

    lv_obj_t * div_0 = div_create(lv_obj_0);
    lv_obj_bind_style(div_0, &style_light, 0, &dark_theme, 0);
    lv_obj_bind_style(div_0, &style_dark, 0, &dark_theme, 1);

    lv_obj_t * theme_switcher_0 = theme_switcher_create(div_0);



    lv_obj_t * div_1 = div_create(lv_obj_0);
    lv_obj_set_flex_grow(div_1, 1);
    lv_obj_set_scroll_snap_y(div_1, LV_SCROLL_SNAP_CENTER);
    lv_obj_set_flag(div_1, LV_OBJ_FLAG_SCROLL_ONE, true);
    lv_obj_set_style_flex_track_place(div_1, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_row(div_1, UNIT_XL, 0);

    lv_obj_t * thermostat_0 = thermostat_create(div_1);


    lv_obj_t * move_goal_0 = move_goal_create(div_1);


    lv_obj_t * weather_0 = weather_create(div_1);


    lv_obj_t * alarm_0 = alarm_create(div_1);


    lv_obj_t * light_temperature_0 = light_temperature_create(div_1);


    lv_obj_t * music_player_0 = music_player_create(div_1);


    lv_obj_t * speaker_volume_0 = speaker_volume_create(div_1);




    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "elements");

    return lv_obj_0;
}



/**********************
 *   STATIC FUNCTIONS
 **********************/

