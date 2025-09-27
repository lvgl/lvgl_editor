/**
 * @file music_player_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "music_player_gen.h"
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

lv_obj_t * music_player_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_panel_light;
    static lv_style_t style_panel_dark;
    static lv_style_t button_control;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_panel_light);
        lv_style_set_bg_color(&style_panel_light, ACCENT1_50_LIGHT);

        lv_style_init(&style_panel_dark);
        lv_style_set_bg_color(&style_panel_dark, ACCENT1_50_DARK);

        lv_style_init(&button_control);
        lv_style_set_bg_opa(&button_control, 0);

        style_inited = true;
    }

    lv_obj_t * card_0 = card_create(parent);
    lv_obj_set_style_pad_row(card_0, 4, 0);

    lv_obj_add_style(card_0, &style_panel_light, 0);
    lv_obj_bind_style(card_0, &style_panel_dark, 0, &dark_theme, 1);
    lv_obj_t * card_header_0 = card_header_create(card_0, "Music player");

    lv_obj_t * song_info_cont = row_create(card_0);
    lv_obj_set_name(song_info_cont, "song_info_cont");
    lv_obj_set_style_flex_cross_place(song_info_cont, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_t * lv_image_0 = lv_image_create(song_info_cont);
    lv_image_set_src(lv_image_0, song_cover_1);

    lv_obj_t * column_0 = column_create(song_info_cont);
    lv_obj_set_style_flex_main_place(column_0, LV_FLEX_ALIGN_START, 0);
    lv_obj_set_style_pad_left(column_0, 12, 0);
    lv_obj_t * lv_label_0 = lv_label_create(column_0);
    lv_label_set_text(lv_label_0, "Onward");
    lv_obj_set_style_text_font(lv_label_0, geist_semibold_14, 0);

    lv_obj_t * lv_label_1 = lv_label_create(column_0);
    lv_label_set_text(lv_label_1, "Jaguar Sun");
    lv_obj_set_style_text_font(lv_label_1, geist_regular_12, 0);
    lv_obj_set_style_text_opa(lv_label_1, 153, 0);



    lv_obj_t * slider_0 = slider_create(card_0);
    lv_obj_set_style_margin_ver(slider_0, 4, 0);
    lv_slider_bind_value(slider_0, &song_played);
    lv_obj_set_width(slider_0, lv_pct(100));
    lv_slider_set_start_value(slider_0, 0, false);
    lv_slider_set_min_value(slider_0, 0);
    lv_slider_set_max_value(slider_0, 430);

    lv_obj_t * row_0 = row_create(card_0);
    lv_obj_set_width(row_0, lv_pct(100));
    lv_obj_set_style_flex_main_place(row_0, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_t * lv_label_2 = lv_label_create(row_0);
    lv_label_bind_text(lv_label_2, &song_played, "%d");
    lv_obj_set_style_text_font(lv_label_2, geist_semibold_12, 0);

    lv_obj_t * lv_label_3 = lv_label_create(row_0);
    lv_label_set_text(lv_label_3, "2:55");
    lv_obj_set_style_text_font(lv_label_3, geist_semibold_12, 0);


    lv_obj_t * row_1 = row_create(card_0);
    lv_obj_set_width(row_1, lv_pct(100));
    lv_obj_set_style_flex_main_place(row_1, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_flex_cross_place(row_1, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_t * icon_button_0 = icon_button_create(row_1, icon_heart);
    lv_obj_set_style_pad_all(icon_button_0, 8, 0);
    lv_obj_bind_state_if_eq(icon_button_0, &song_liked, LV_STATE_CHECKED, 0);
    lv_obj_add_subject_set_int_event(icon_button_0, &song_liked, LV_EVENT_CLICKED, 1);

    lv_obj_t * row_2 = row_create(row_1);
    lv_obj_set_style_flex_cross_place(row_2, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_t * icon_button_1 = icon_button_create(row_2, icon_skip_back);

    lv_obj_t * icon_button_2 = icon_button_create(row_2, icon_play);
    lv_obj_bind_flag_if_eq(icon_button_2, &song_playing, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_add_subject_set_int_event(icon_button_2, &song_playing, LV_EVENT_CLICKED, 1);

    lv_obj_t * icon_button_3 = icon_button_create(row_2, icon_pause);
    lv_obj_bind_flag_if_eq(icon_button_3, &song_playing, LV_OBJ_FLAG_HIDDEN, 0);
    lv_obj_add_subject_set_int_event(icon_button_3, &song_playing, LV_EVENT_CLICKED, 0);

    lv_obj_t * icon_button_4 = icon_button_create(row_2, icon_skip_forward);


    lv_obj_t * icon_button_5 = icon_button_create(row_1, icon_volume_max);
    lv_obj_set_style_pad_all(icon_button_5, 8, 0);




    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(card_0, "music_player_#");

    return card_0;
}



/**********************
 *   STATIC FUNCTIONS
 **********************/

