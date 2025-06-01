/**
 * @file smart_slider.h
 *
 */

#ifndef SMART_SLIDER_H
#define SMART_SLIDER_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lvgl/lvgl.h"
#include "smart_slider_gen.h"

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
 * Get the smart_slider_part
 * @param obj   pointer to a smart_slider
 * @return      the smart_slider_part value
 */
void * smart_slider_get_smart_slider_part(lv_obj_t * obj);

/**
 * Get the value
 * @param obj   pointer to a smart_slider
 * @return      the value value
 */
int32_t smart_slider_get_value(lv_obj_t * obj);

/**
 * Get the min_value
 * @param obj   pointer to a smart_slider
 * @return      the min_value value
 */
int32_t smart_slider_get_min_value(lv_obj_t * obj);

/**
 * Get the text
 * @param obj   pointer to a smart_slider
 * @return      the text value
 */
void * smart_slider_get_text(lv_obj_t * obj);

/**
 * Get the item
 * @param obj   pointer to a smart_slider
 * @return      the item value
 */
void * smart_slider_get_item(lv_obj_t * obj);

/**
 * Get the ticks
 * @param obj   pointer to a smart_slider
 * @return      the ticks value
 */
void * smart_slider_get_ticks(lv_obj_t * obj);

/**
 * Get the value
 * @param obj   pointer to a smart_slider
 * @return      the value value
 */
void * smart_slider_get_value(lv_obj_t * obj);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SMART_SLIDER_H*/