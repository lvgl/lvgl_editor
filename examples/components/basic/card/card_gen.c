/**
 * @file card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "card_gen.h"
#include "../../../examples.h"

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

lv_obj_t * card_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_base;
    static lv_style_t style_dark;

    static bool style_inited = false;

    if (!style_inited) {
        #if EXAMPLES_CHECK_COMPILE_TARGET(EXAMPLES_TARGET_ALL)
        if (examples_check_target(EXAMPLES_TARGET_ALL)) {
            lv_style_init(&style_base);
            lv_style_set_width(&style_base, 300);
            lv_style_set_height(&style_base, LV_SIZE_CONTENT);
            lv_style_set_pad_all(&style_base, UNIT_LG);
            lv_style_set_pad_row(&style_base, UNIT_XL);
            lv_style_set_bg_opa(&style_base, (255 * 100 / 100));
            lv_style_set_bg_color(&style_base, BG_PRIMARY_LIGHT);
            lv_style_set_text_color(&style_base, SURFACE_PRIMARY_LIGHT);
            lv_style_set_radius(&style_base, UNIT_XL);
            lv_style_set_layout(&style_base, LV_LAYOUT_FLEX);
            lv_style_set_flex_flow(&style_base, LV_FLEX_FLOW_COLUMN);

            lv_style_init(&style_dark);
            lv_style_set_bg_color(&style_dark, BG_PRIMARY_DARK);
            lv_style_set_text_color(&style_dark, SURFACE_PRIMARY_DARK);

        }
        #endif
        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if EXAMPLES_CHECK_COMPILE_TARGET(EXAMPLES_TARGET_ALL)
    if (examples_check_target(EXAMPLES_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(parent);
        lv_obj_set_name_static(lv_obj_0, "card_#");

        lv_obj_remove_style_all(lv_obj_0);
        lv_obj_add_style(lv_obj_0, &style_base, 0);
        lv_obj_bind_style(lv_obj_0, &style_dark, 0, &dark_theme, 1);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

