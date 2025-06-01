/**
 * @file smart_slider_gen.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "smart_slider_private_gen.h"
#include "lvgl/src/core/lv_obj_class_private.h"
#include "ui.h"

/*********************
 *      DEFINES
 *********************/

/**
 * Just a small value
 */
#define SMALL 4

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  GLOBAL PROTOTYPES
 **********************/

void smart_slider_constructor_hook(lv_obj_t * obj);
void smart_slider_destructor_hook(lv_obj_t * obj);
void smart_slider_event_hook(lv_event_t * e);

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void smart_slider_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void smart_slider_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void smart_slider_event(const lv_obj_class_t * class_p, lv_event_t * e);

/**********************
 *  STATIC VARIABLES
 **********************/

const lv_obj_class_t smart_slider_class = {
    .base_class = &lv_obj_class,
    .constructor_cb = smart_slider_constructor,
    .destructor_cb = smart_slider_destructor,
    .event_cb = smart_slider_event,
    .instance_size = sizeof(smart_slider_t),
    .editable = 1,
    .name = "smart_slider"
};

/**********************
 *   GLOBAL FUNCTIONS
 **********************/


lv_obj_t * smart_slider_create(lv_obj_t * parent)
{
    LV_LOG_INFO("begin");
    lv_obj_t * obj = lv_obj_class_create_obj(&smart_slider_class, parent);
    lv_obj_class_init_obj(obj);
    return obj;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/


static void smart_slider_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    LV_TRACE_OBJ_CREATE("begin");

    smart_slider_t * widget = (smart_slider_t *)obj;
    
    static bool style_inited = false;

    static lv_style_t style1;

    if(!style_inited) {
    	lv_style_init(&style1);
    	lv_style_set_bg_opa(&style1, 220);
    	lv_style_set_border_width(&style1, SMALL);
        
        style_inited = true;
    }
    lv_obj_set_width(obj, lv_pct(100));

    lv_obj_t * title = lv_label_create(obj);
    lv_obj_set_name(title, "title");
    lv_obj_set_style_pad_all(title, SMALL, 0);
    widget->title = title;

    lv_obj_t * lv_slider_1 = lv_slider_create(obj);
    lv_obj_set_y(lv_slider_1, 30);
    lv_obj_add_style(lv_slider_1, &style1, LV_PART_KNOB | LV_STATE_PRESSED);
    lv_obj_add_style(lv_slider_1, &global_style_1, LV_PART_INDICATOR);

    widget->lv_slider_1 = lv_slider_1;

    smart_slider_constructor_hook(obj);

    LV_TRACE_OBJ_CREATE("finished");
}

static void smart_slider_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);

    smart_slider_destructor_hook(obj);
}

static void smart_slider_event(const lv_obj_class_t * class_p, lv_event_t * e)
{
    LV_UNUSED(class_p);

    lv_result_t res;

    /* Call the ancestor's event handler */
    res = lv_obj_event_base(&smart_slider_class, e);
    if(res != LV_RESULT_OK) return;

    smart_slider_event_hook(e);
}
