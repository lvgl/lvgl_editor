/**
 * @file super_button_gen.h
 */

#ifndef SUPER_BUTTON_H
#define SUPER_BUTTON_H

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

lv_obj_t * super_button_create(lv_obj_t * parent, const char * button_text, lv_subject_t * subject);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SUPER_BUTTON_H*/