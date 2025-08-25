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

    static lv_style_t panel_size;
    static lv_style_t panel_light;
    static lv_style_t panel_dark;
    static lv_style_t seekbar_knob;
    static lv_style_t seekbar;
    static lv_style_t seekbar_dark;
    static lv_style_t button_control;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&panel_size);
        lv_style_set_width(&panel_size, 320);
        lv_style_set_height(&panel_size, 240);

        lv_style_init(&panel_light);
        lv_style_set_bg_color(&panel_light, ACCENT1_50_LIGHT);

        lv_style_init(&panel_dark);
        lv_style_set_bg_color(&panel_dark, ACCENT1_50_DARK);

        lv_style_init(&seekbar_knob);
        lv_style_set_opa(&seekbar_knob, 0);

        lv_style_init(&seekbar);
        lv_style_set_bg_color(&seekbar, SURFACE_PRIMARY_LIGHT);

        lv_style_init(&seekbar_dark);
        lv_style_set_bg_color(&seekbar_dark, SURFACE_PRIMARY_DARK);

        lv_style_init(&button_control);
        lv_style_set_bg_opa(&button_control, 0);

        style_inited = true;
    }

    lv_obj_t * panel_0 = panel_create(parent);
    lv_obj_set_style_flex_main_place(panel_0, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_add_style(panel_0, &panel_size, 0);
    lv_obj_bind_style(panel_0, &panel_light, 0, &theme, 0);
    lv_obj_bind_style(panel_0, &panel_dark, 0, &theme, 1);

    lv_obj_t * panel_header_0 = panel_header_create(panel_0);
    lv_obj_set_width(panel_header_0, lv_pct(100));

    lv_obj_t * lv_label_0 = lv_label_create(panel_header_0);
    lv_label_set_text(lv_label_0, "Music");
    lv_obj_set_style_text_font(lv_label_0, geist_semibold_20, 0);



    lv_obj_t * div_0 = div_create(panel_0);
    lv_obj_set_style_layout(div_0, LV_LAYOUT_FLEX, 0);
    lv_obj_set_style_flex_main_place(div_0, LV_FLEX_ALIGN_START, 0);
    lv_obj_set_style_flex_cross_place(div_0, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_width(div_0, lv_pct(100));

    lv_obj_t * lv_image_0 = lv_image_create(div_0);
    lv_image_set_src(lv_image_0, song_cover_1);


    lv_obj_t * div_1 = div_create(div_0);
    lv_obj_set_style_layout(div_1, LV_LAYOUT_FLEX, 0);
    lv_obj_set_style_flex_flow(div_1, LV_FLEX_FLOW_COLUMN, 0);
    lv_obj_set_style_flex_main_place(div_1, LV_FLEX_ALIGN_START, 0);
    lv_obj_set_style_margin_left(div_1, 12, 0);

    lv_obj_t * lv_label_1 = lv_label_create(div_1);
    lv_label_set_text(lv_label_1, "Onward");
    lv_obj_set_style_text_font(lv_label_1, geist_semibold_14, 0);


    lv_obj_t * lv_label_2 = lv_label_create(div_1);
    lv_label_set_text(lv_label_2, "Jaguar Sun");
    lv_obj_set_style_text_font(lv_label_2, geist_regular_12, 0);
    lv_obj_set_style_text_opa(lv_label_2, 153, 0);




    lv_obj_t * div_2 = div_create(panel_0);
    lv_obj_set_width(div_2, lv_pct(100));
    lv_obj_set_style_layout(div_2, LV_LAYOUT_FLEX, 0);
    lv_obj_set_flex_flow(div_2, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_pad_row(div_2, 4, 0);

    lv_obj_t * lv_slider_0 = lv_slider_create(div_2);
    lv_obj_set_height(lv_slider_0, 6);
    lv_slider_bind_value(lv_slider_0, &song_played);
    lv_obj_set_width(lv_slider_0, lv_pct(100));
    lv_slider_set_start_value(lv_slider_0, 0, false);lv_slider_set_min_value(lv_slider_0, 0);
    lv_slider_set_max_value(lv_slider_0, 430);
    lv_obj_set_style_bg_opa(lv_slider_0, 40, 0);
    lv_obj_add_style(lv_slider_0, &seekbar_knob, LV_PART_KNOB);
    lv_obj_add_style(lv_slider_0, &seekbar, 0);
    lv_obj_add_style(lv_slider_0, &seekbar, LV_PART_INDICATOR);
    lv_obj_bind_style(lv_slider_0, &seekbar_dark, 0, &theme, 1);
    lv_obj_bind_style(lv_slider_0, &seekbar_dark, LV_PART_INDICATOR, &theme, 1);


    lv_obj_t * div_3 = div_create(div_2);
    lv_obj_set_width(div_3, lv_pct(100));
    lv_obj_set_style_layout(div_3, LV_LAYOUT_FLEX, 0);
    lv_obj_set_style_flex_main_place(div_3, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);

    lv_obj_t * lv_label_3 = lv_label_create(div_3);
    lv_label_bind_text(lv_label_3, &song_played, "%d");lv_obj_set_style_text_font(lv_label_3, geist_semibold_12, 0);


    lv_obj_t * lv_label_4 = lv_label_create(div_3);
    lv_label_set_text(lv_label_4, "2:55");
    lv_obj_set_style_text_font(lv_label_4, geist_semibold_12, 0);




    lv_obj_t * div_4 = div_create(panel_0);
    lv_obj_set_style_layout(div_4, LV_LAYOUT_FLEX, 0);
    lv_obj_set_style_flex_cross_place(div_4, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_main_place(div_4, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_width(div_4, lv_pct(100));

    lv_obj_t * icon_button_0 = icon_button_create(div_4, icon_heart);
    lv_obj_set_style_pad_all(icon_button_0, 8, 0);
    lv_obj_bind_state_if_eq(icon_button_0, &song_liked, LV_STATE_CHECKED, 0);
    lv_obj_add_subject_set_int_event(icon_button_0, &song_liked, LV_EVENT_CLICKED, 1);


    lv_obj_t * div_5 = div_create(div_4);
    lv_obj_set_style_layout(div_5, LV_LAYOUT_FLEX, 0);
    lv_obj_set_style_flex_cross_place(div_5, LV_FLEX_ALIGN_CENTER, 0);

    lv_obj_t * icon_button_1 = icon_button_create(div_5, icon_skip_back);


    lv_obj_t * icon_button_2 = icon_button_create(div_5, icon_play);
    lv_obj_bind_flag_if_eq(icon_button_2, &song_playing, LV_OBJ_FLAG_HIDDEN, 1);
    lv_obj_add_subject_set_int_event(icon_button_2, &song_playing, LV_EVENT_CLICKED, 1);


    lv_obj_t * icon_button_3 = icon_button_create(div_5, icon_pause);
    lv_obj_bind_flag_if_eq(icon_button_3, &song_playing, LV_OBJ_FLAG_HIDDEN, 0);
    lv_obj_add_subject_set_int_event(icon_button_3, &song_playing, LV_EVENT_CLICKED, 0);


    lv_obj_t * icon_button_4 = icon_button_create(div_5, icon_skip_forward);



    lv_obj_t * div_6 = div_create(div_4);
    lv_obj_set_style_layout(div_6, LV_LAYOUT_FLEX, 0);
    lv_obj_set_style_flex_cross_place(div_6, LV_FLEX_ALIGN_CENTER, 0);

    lv_obj_t * icon_button_5 = icon_button_create(div_6, icon_volume_max);
    lv_obj_set_style_pad_all(icon_button_5, 8, 0);





    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(panel_0, "music_player_#");

    return panel_0;
}



/**********************
 *   STATIC FUNCTIONS
 **********************/

