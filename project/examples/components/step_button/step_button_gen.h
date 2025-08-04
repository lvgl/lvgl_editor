/**
 * @file step_button_gen.h
 */

#ifndef STEP_BUTTON_H
#define STEP_BUTTON_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/


lv_obj_t * step_button_create(lv_obj_t * parent, lv_subject_t * subject, int32_t step, int32_t min, int32_t max, const char * text);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*STEP_BUTTON_H*/