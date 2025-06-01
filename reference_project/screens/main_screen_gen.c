/**
 * @file main_screen_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "main_screen_gen.h"
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

lv_obj_t * main_screen_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if(!style_inited) {
        
        style_inited = true;
    }

    lv_obj_t * lv_obj_1 = lv_obj_create(NULL);
        lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_COLUMN);

    mybutton_create(lv_obj_1, lv_color_hex(0xff0000), 70%, "My button 1", NaN, 30);

    super_button_create(lv_obj_1, Suprt button);

    lv_obj_t * smart_slider_1 = smart_slider_create(lv_obj_1);
    smart_slider_set_value(smart_slider_1, 50);

    lv_obj_add_event_cb(smart_slider_1, my_cb1, LV_EVENT_CLICKED, "1");
    lv_obj_add_event_cb(smart_slider_1, my_cb1, LV_EVENT_PRESSED, "2");
    lv_obj_t * smart_slider_1_text_1 = smart_slider_add_text(smart_slider_1, lv_color_hex(0x00ff00));
    lv_obj_set_style_bg_opa(smart_slider_1_text_1, 50%, LV_PART_MAIN | LV_STATE_DEFAULT);
    smart_slider_set_text_font(smart_slider_1, smart_slider_1_text_1, font_md);
    lv_obj_t * lv_image_1 = lv_image_create(smart_slider_1_text_1);
    lv_image_set_src(lv_image_1, bell);
    lv_obj_set_x(lv_image_1, 100);


    lv_obj_t * smart_slider_item_1 = smart_slider_get_item(smart_slider_1, 30);
    smart_slider_set_item_size(smart_slider_1, smart_slider_item_1, 20);

    lv_obj_t * smart_slider_item_2 = smart_slider_get_item(smart_slider_1, 31);
    smart_slider_set_item_size(smart_slider_1, smart_slider_item_2, 21);

    lv_obj_t * smart_slider_item_3 = smart_slider_get_item(smart_slider_1, 32);
    smart_slider_set_item_size(smart_slider_1, smart_slider_item_3, 22);




    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/