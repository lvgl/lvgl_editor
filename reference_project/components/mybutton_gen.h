/**
 * @file mybutton_gen.h
 */

#ifndef MYBUTTON_H
#define MYBUTTON_H

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

lv_obj_t * mybutton_create(lv_obj_t * parent, lv_color_t button_color, lv_opa_t button_opa, void * icon, const char * text, lv_subject_t * subject, int32_t fmt, int32_t ref_value);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*MYBUTTON_H*/