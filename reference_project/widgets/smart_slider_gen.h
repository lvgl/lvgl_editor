/**
 * @file smart_slider_gen.h
 *
 */

#ifndef SMART_SLIDER_GEN_H
#define SMART_SLIDER_GEN_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lvgl/lvgl.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Create a smart_slider object
 * @param parent pointer to an object, it will be the parent of the new smart_slider
 * @return pointer to the created smart_slider
 */
lv_obj_t * smart_slider_create(lv_obj_t * parent);


/**
 * Set the Parts of the smart slider
 * @param obj   pointer to a smart_slider
 * @param smart_slider_part  Parts of the smart slider
 */
void smart_slider_set_smart_slider_part(lv_obj_t * obj, void * smart_slider_part);

/**
 * Set the value
 * @param obj   pointer to a smart_slider
 * @param value  value
 */
void smart_slider_set_value(lv_obj_t * obj, int32_t value);

/**
 * Set the min_value
 * @param obj   pointer to a smart_slider
 * @param min_value  min_value
 */
void smart_slider_set_min_value(lv_obj_t * obj, int32_t min_value);

/**
 * Set the text
 * @param obj   pointer to a smart_slider
 * @param text  text
 */
void smart_slider_set_text(lv_obj_t * obj, void * text);

/**
 * Set the item
 * @param obj   pointer to a smart_slider
 * @param item  item
 */
void smart_slider_set_item(lv_obj_t * obj, void * item);

/**
 * Set the ticks
 * @param obj   pointer to a smart_slider
 * @param ticks  ticks
 */
void smart_slider_set_ticks(lv_obj_t * obj, void * ticks);

/**
 * Set the value
 * @param obj   pointer to a smart_slider
 * @param value  value
 */
void smart_slider_set_value(lv_obj_t * obj, void * value);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SMART_SLIDER_GEN_H*/