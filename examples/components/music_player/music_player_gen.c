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

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&panel_size);
        lv_style_set_width(&panel_size, 320);
        lv_style_set_height(&panel_size, 240);

        lv_style_init(&panel_light);
        lv_style_set_bg_color(&panel_light, ACCENT1_50_LIGHT);

        lv_style_init(&panel_dark);
        lv_style_set_bg_color(&panel_dark, ACCENT1_50_DARK);

        style_inited = true;
    }

    lv_obj_t * panel_0 = panel_create(parent);
    lv_obj_add_style(panel_0, &panel_size, 0);
    lv_obj_bind_style(panel_0, &panel_light, 0, &theme, 0);
    lv_obj_bind_style(panel_0, &panel_dark, 0, &theme, 1);

    lv_obj_t * panel_header_0 = panel_header_create(panel_0);
    lv_obj_set_width(panel_header_0, lv_pct(100));

    lv_obj_t * lv_label_0 = lv_label_create(panel_header_0);
    lv_label_set_text(lv_label_0, "Music");
    lv_obj_set_style_text_font(lv_label_0, geist_semibold_20, 0);




    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(panel_0, "music_player_#");

    return panel_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/