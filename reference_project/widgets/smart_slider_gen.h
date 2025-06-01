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
#include "reference_project_gen.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**
 * Parts of the smart slider
 */
typedef enum
{
	/**
	 * The top part
	 */
	SMART_SLIDER_PART_TOP = 10,

	/**
	 * The bottom part
	 */
	SMART_SLIDER_PART_BOTTOM = 20,
}smart_slider_part_t;

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
 * Add text to the smart_slider
 * @param obj   pointer to a smart_slider
 * @param color  Color of the text
 */
lv_obj_t * smart_slider_add_text(lv_obj_t * obj, lv_color_t color);

/**
 * Add text to the smart_slider
 * @param obj   pointer to a smart_slider
 * @param text  pointer to a smart_slider text
 * @param font
 */
void smart_slider_set_text_font(lv_obj_t * obj, lv_obj_t * text, lv_font_t * font);

/**
 * Get the item of a smart_slider
 * @param obj   pointer to a smart_slider
 * @param idx   The index of the item
 * @return 		the item
 */
lv_obj_t * smart_slider_get_item(lv_obj_t * obj, int32_t idx);

/**
 * Set the size of a smart slider's item
 * @param smart_slider   pointer to a smart_slider
 * @param item   		 an item
 * @param size   		 The index of the item
 */
void smart_slider_set_item_size(lv_obj_t * smart_slider, lv_obj_t * item, int32_t size);

/**
 * Set the smart_slider's ticks
 * @param smart_slider   pointer to a smart_slider
 * @param part
 * @param ticks
 */
void smart_slider_set_ticks(lv_obj_t * obj, smart_slider_part_t part, int32_t value);

/**
 * Bind value to the smart_slider
 * @param obj   	pointer to a smart_slider
 * @param subject
 * @param state		Bind the value to this state
 * @param fmt
 */
void smart_slider_bind_value(lv_obj_t * obj, lv_subject_t * subject, ui_state_t state, const char * fmt);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SMART_SLIDER_GEN_H*/
