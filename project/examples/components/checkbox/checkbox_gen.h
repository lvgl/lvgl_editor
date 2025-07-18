/**
 * @file checkbox_gen.h
 */

#ifndef CHECKBOX_H
#define CHECKBOX_H

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


lv_obj_t * checkbox_create(lv_obj_t * parent, const char * text, lv_subject_t * subject);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*CHECKBOX_H*/