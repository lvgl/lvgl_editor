/**
 * @file settings_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "settings_gen.h"
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

lv_obj_t * settings_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t main;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&main);
        lv_style_set_pad_all(&main, 0);
        lv_style_set_border_width(&main, 0);
        lv_style_set_radius(&main, 0);
        lv_style_set_layout(&main, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&main, LV_FLEX_FLOW_COLUMN);
        lv_style_set_pad_row(&main, 0);
        lv_style_set_text_font(&main, font_subtitle);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_width(lv_obj_0, lv_pct(100));
    lv_obj_set_height(lv_obj_0, lv_pct(100));
    lv_obj_add_style(lv_obj_0, &main, 0);

    lv_obj_t * header_0 = header_create(lv_obj_0, "settings");


    lv_obj_t * row_0 = row_create(lv_obj_0);
    lv_obj_set_flex_grow(row_0, 1);
    lv_obj_set_style_bg_color(row_0, lv_color_hex(0xebebeb), 0);
    lv_obj_set_style_bg_opa(row_0, 255, 0);
    lv_obj_set_style_pad_all(row_0, 5, 0);
    lv_obj_set_width(row_0, lv_pct(100));
    lv_obj_set_flex_flow(row_0, LV_FLEX_FLOW_ROW_WRAP);

    lv_obj_t * column_0 = column_create(row_0);

    lv_obj_t * checkbox_0 = checkbox_create(column_0, "Bluetooth", &bluetooth_on);


    lv_obj_t * checkbox_1 = checkbox_create(column_0, "WiFi", &wifi_on);


    lv_obj_t * checkbox_2 = checkbox_create(column_0, "Notifications", &notification_on);


    lv_obj_t * row_1 = row_create(column_0);
    lv_obj_set_style_flex_cross_place(row_1, LV_FLEX_ALIGN_CENTER, 0);

    lv_obj_t * step_button_0 = step_button_create(row_1, &age, -1, 0, 2000000, "-");


    lv_obj_t * column_1 = column_create(row_1);
    lv_obj_set_style_pad_all(column_1, 0, 0);
    lv_obj_set_style_pad_row(column_1, -3, 0);
    lv_obj_set_style_flex_cross_place(column_1, LV_FLEX_ALIGN_CENTER, 0);

    lv_obj_t * lv_label_0 = lv_label_create(column_1);
    lv_obj_set_style_text_font(lv_label_0, font_subtitle, 0);
    lv_label_set_text(lv_label_0, "Age");


    lv_obj_t * lv_label_1 = lv_label_create(column_1);
    lv_obj_set_style_text_font(lv_label_1, font_title, 0);
    lv_label_bind_text(lv_label_1, &age, NULL);


    lv_obj_t * step_button_1 = step_button_create(row_1, &age, 1, -2000000, 99, "+");



    lv_obj_t * lv_button_0 = lv_button_create(column_0);
    lv_obj_set_style_text_font(lv_button_0, font_subtitle, 0);

    lv_obj_t * lv_label_2 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_2, lv_tr("about"));

    lv_obj_add_screen_create_event(lv_button_0, LV_EVENT_CLICKED, about_create, LV_SCREEN_LOAD_ANIM_FADE_ON, 500, 0);
    lv_obj_add_event_cb(lv_button_0, about_click_event_cb, LV_EVENT_CLICKED, NULL);



    lv_obj_t * setclock_0 = setclock_create(row_0);




    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "settings");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/