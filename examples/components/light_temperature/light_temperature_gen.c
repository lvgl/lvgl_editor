/**
 * @file light_temperature_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "light_temperature_gen.h"
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

lv_obj_t * light_temperature_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t panel_size;
    static lv_style_t stats;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&panel_size);
        lv_style_set_width(&panel_size, 320);
        lv_style_set_height(&panel_size, 240);

        lv_style_init(&stats);
        lv_style_set_width(&stats, lv_pct(100));
        lv_style_set_height(&stats, LV_SIZE_CONTENT);
        lv_style_set_layout(&stats, LV_LAYOUT_FLEX);
        lv_style_set_flex_main_place(&stats, LV_FLEX_ALIGN_SPACE_BETWEEN);
        lv_style_set_pad_ver(&stats, 16);

        style_inited = true;
    }

    lv_obj_t * panel_0 = panel_create(parent);
    lv_obj_add_style(panel_0, &panel_size, 0);

    lv_obj_t * panel_header_0 = panel_header_create(panel_0);
    lv_obj_set_width(panel_header_0, lv_pct(100));

    lv_obj_t * lv_label_0 = lv_label_create(panel_header_0);
    lv_label_set_text(lv_label_0, "Light temperature");
    lv_obj_set_style_text_font(lv_label_0, geist_semibold_20, 0);


    lv_obj_t * switch_0 = switch_create(panel_header_0);
    lv_obj_bind_checked(switch_0, &light_temperature);




    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(panel_0, "light_temperature_#");

    return panel_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/