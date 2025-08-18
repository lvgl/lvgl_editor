/**
 * @file panel_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "panel_gen.h"
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

lv_obj_t * panel_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t panel;
    static lv_style_t panel_light;
    static lv_style_t panel_dark;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&panel);
        lv_style_set_width(&panel, lv_pct(100));
        lv_style_set_height(&panel, lv_pct(100));
        lv_style_set_border_width(&panel, 0);
        lv_style_set_radius(&panel, PANEL_CORNER_RADIUS);
        lv_style_set_pad_all(&panel, PANEL_PAD);
        lv_style_set_layout(&panel, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&panel, LV_FLEX_FLOW_COLUMN);
        lv_style_set_flex_cross_place(&panel, LV_FLEX_ALIGN_CENTER);

        lv_style_init(&panel_light);
        lv_style_set_bg_color(&panel_light, BG_PRIMARY_LIGHT);
        lv_style_set_text_color(&panel_light, SURFACE_PRIMARY_LIGHT);

        lv_style_init(&panel_dark);
        lv_style_set_bg_color(&panel_dark, BG_PRIMARY_DARK);
        lv_style_set_text_color(&panel_dark, SURFACE_PRIMARY_DARK);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_add_style(lv_obj_0, &panel, 0);
    lv_obj_bind_style(lv_obj_0, &panel_light, 0, &theme, 0);
    lv_obj_bind_style(lv_obj_0, &panel_dark, 0, &theme, 1);


    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "panel_#");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/