/**
 * @file screen_components_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_components_gen.h"
#include "ui_new_component.h"

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

lv_obj_t * screen_components_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_components_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_pad_all(lv_obj_0, UNIT_SMALL, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);

    lv_obj_t * section_0 = section_create(lv_obj_0);
    lv_label_set_text(section_0, "Normal buttons");
    
    lv_obj_t * button_normal_0 = button_normal_create(lv_obj_0, "Click me");
    
    lv_obj_t * button_normal_1 = button_normal_create(lv_obj_0, "Custom text");
    
    lv_obj_t * button_normal_2 = button_normal_create(lv_obj_0, "Full width");
    lv_obj_set_width(button_normal_2, lv_pct(100));
    
    lv_obj_t * section_1 = section_create(lv_obj_0);
    lv_label_set_text(section_1, "Warning buttons");
    
    lv_obj_t * button_warning_0 = button_warning_create(lv_obj_0, "Warning!");
    
    lv_obj_t * button_warning_1 = button_warning_create(lv_obj_0, "Upps!");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

