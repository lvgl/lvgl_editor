/**
 * @file main_screen_gen.c
 */

/*********************
 *      INCLUDES
 *********************/
#include "ui.h"

/*********************
 *      DEFINES
 *********************/

#define BTN_TEXT "Super button"

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
    lv_obj_set_name(lv_obj_1, "main_screen");

    lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_COLUMN);

    mybutton_create(lv_obj_1, lv_color_hex(0xff0000), (255 * 70 / 100), NULL, "My button 1", &subject1, "%d °C", 30);
    lv_obj_t * mybutton_2 = mybutton_create(lv_obj_1, lv_color_hex(0x000000), 200, img_bell, "My button 2", &subject1, "%d °C", 30);
    lv_obj_set_width(mybutton_2, 100);
    lv_obj_add_screen_load_event(mybutton_2, LV_EVENT_LONG_PRESSED, some_screen_1, LV_SCREEN_LOAD_ANIM_OVER_RIGHT, 300, 100);
    lv_obj_add_screen_create_event(mybutton_2, LV_EVENT_CLICKED, some_screen_2, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);

    super_button_create(lv_obj_1, BTN_TEXT, &subject1);

    lv_obj_t * smart_slider_1 = smart_slider_create(lv_obj_1);
    smart_slider_set_value(smart_slider_1, 50);
    lv_obj_add_event_cb(smart_slider_1, my_cb1, LV_EVENT_CLICKED, "1");
    lv_obj_add_event_cb(smart_slider_1, my_cb1, LV_EVENT_PRESSED, NULL);

    lv_obj_t * smart_slider_1_text_1 = smart_slider_add_text(smart_slider_1, lv_color_hex(0x00ff00));
    lv_obj_set_style_bg_opa(smart_slider_1_text_1, 255 * 50 / 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    smart_slider_set_text_font(smart_slider_1, smart_slider_1_text_1, font_md);

    lv_obj_t * lv_image_1 = lv_image_create(smart_slider_1_text_1);
    lv_image_set_src(lv_image_1, img_bell);
    lv_obj_set_x(lv_image_1, 100);

    lv_obj_t * smart_slider_item_1 = smart_slider_get_item(smart_slider_1, 30);
    smart_slider_set_item_size(smart_slider_1, smart_slider_item_1, 20);

    smart_slider_get_item(smart_slider_1, 31);

    smart_slider_set_ticks(smart_slider_1, SMART_SLIDER_PART_TOP, 100);

    smart_slider_set_ticks(smart_slider_1, SMART_SLIDER_PART_BOTTOM, 10);

    smart_slider_bind_value(smart_slider_1, &subject1, UI_STATE_WARNING, "%04d");
    smart_slider_bind_value(smart_slider_1, &subject2, UI_STATE_CRITICAL, "%% %d");

    h3_create(lv_obj_1);

    lv_obj_t * h3_2 = h3_create(lv_obj_1);
    lv_obj_set_width(h3_2, 100);

    lv_obj_t * h3_3 = h3_create(lv_obj_1);
    lv_label_set_text(h3_3, "Hello");

    lv_obj_t * h3_4 = h3_create(lv_obj_1);
    lv_label_set_text(h3_4, "Hello\nnew line");

    lv_obj_t * h3_5 = h3_create(lv_obj_1);
    lv_label_set_text(h3_5, lv_tr("dog"));

    lv_obj_t * lv_chart_1 = lv_chart_create(lv_obj_1);

    lv_chart_series_t * lv_chart_1_series_1 = lv_chart_add_series(lv_chart_1, lv_color_hex(0xff0000), LV_CHART_AXIS_SECONDARY_Y);
    int32_t lv_chart_1_series_1_values[2] = {10, 20};
    lv_chart_set_series_values(lv_chart_1, lv_chart_1_series_1, lv_chart_1_series_1_values, 2);

    lv_obj_t * lv_buttonmatrix_1 = lv_buttonmatrix_create(lv_obj_1);
    const char * lv_buttonmatrix_1_map[] = {"first", "second", "\n;", "third", NULL};
    lv_buttonmatrix_set_map(lv_buttonmatrix_1, lv_buttonmatrix_1_map);

    lv_buttonmatrix_ctrl_t lv_buttonmatrix_1_ctrl_map[] = {LV_BUTTONMATRIX_CTRL_WIDTH_4, LV_BUTTONMATRIX_CTRL_CHECKED, LV_BUTTONMATRIX_CTRL_CHECKABLE|LV_BUTTONMATRIX_CTRL_DISABLED};
    lv_buttonmatrix_set_ctrl_map(lv_buttonmatrix_1, lv_buttonmatrix_1_ctrl_map);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
