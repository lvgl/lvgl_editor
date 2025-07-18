/**
 * @file header_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "header_gen.h"
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

lv_obj_t * header_create(lv_obj_t * parent, const char * title)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t main;
    static lv_style_t edited;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&main);
        lv_style_set_bg_color(&main, lv_color_hex(0x2d2d2d));
        lv_style_set_border_width(&main, 2);
        lv_style_set_border_side(&main, LV_BORDER_SIDE_BOTTOM);
        lv_style_set_border_color(&main, lv_color_hex(0xa2a2a2));
        lv_style_set_radius(&main, 0);
        lv_style_set_width(&main, lv_pct(100));
        lv_style_set_height(&main, 32);
        lv_style_set_pad_hor(&main, 8);
        lv_style_set_layout(&main, LV_LAYOUT_FLEX);
        lv_style_set_flex_cross_place(&main, LV_FLEX_ALIGN_CENTER);
        lv_style_set_flex_track_place(&main, LV_FLEX_ALIGN_CENTER);
        lv_style_set_flex_flow(&main, LV_FLEX_FLOW_ROW);
        lv_style_set_text_color(&main, lv_color_hex(0xffffff));

        lv_style_init(&edited);
        lv_style_set_text_color(&edited, lv_color_hex(0x0099ee));

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_add_style(lv_obj_0, &main, 0);

    lv_obj_t * subtitle_0 = subtitle_create(lv_obj_0, "settings");
    lv_label_set_text(subtitle_0, lv_tr(title));
    lv_obj_set_flex_grow(subtitle_0, 1);


    lv_obj_t * icon_0 = icon_create(lv_obj_0);
    lv_image_set_src(icon_0, img_bell);
    lv_obj_bind_state_if_eq(icon_0, &notification_on, LV_STATE_DISABLED, 0);


    lv_obj_t * icon_1 = icon_create(lv_obj_0);
    lv_image_set_src(icon_1, img_bluetooth);
    lv_obj_bind_state_if_eq(icon_1, &bluetooth_on, LV_STATE_DISABLED, 0);


    lv_obj_t * icon_2 = icon_create(lv_obj_0);
    lv_image_set_src(icon_2, img_wifi);
    lv_obj_bind_state_if_eq(icon_2, &wifi_on, LV_STATE_DISABLED, 0);


    lv_obj_t * row_0 = row_create(lv_obj_0);
    lv_obj_set_width(row_0, 40);
    lv_obj_set_style_flex_main_place(row_0, LV_FLEX_ALIGN_END, 0);
    lv_obj_set_style_text_color(row_0, lv_color_hex(0xffffff), 0);
    lv_obj_set_style_pad_column(row_0, 0, 0);

    lv_obj_t * subtitle_1 = subtitle_create(row_0, "settings");
    lv_label_bind_text(subtitle_1, &hours, NULL);    lv_obj_bind_style(subtitle_1, &edited, 0, &hour_edited, 1);


    lv_obj_t * subtitle_2 = subtitle_create(row_0, ":");


    lv_obj_t * subtitle_3 = subtitle_create(row_0, "settings");
    lv_label_bind_text(subtitle_3, &mins, NULL);    lv_obj_bind_style(subtitle_3, &edited, 0, &min_edited, 1);




    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "header_#");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/