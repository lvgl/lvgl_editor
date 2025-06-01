/**
 * @file smart_slider_private_gen.h
 *
 */

#ifndef SMART_SLIDER_PRIVATE_H
#define SMART_SLIDER_PRIVATE_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lvgl/src/core/lv_obj_private.h"
#include "smart_slider.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

typedef struct {
    lv_obj_t obj;  /* Base widget to extend */
    void * text;
    void * item;
    void * ticks;
    void * value;
    lv_obj_t * title;
    lv_obj_t * lv_slider_1;
} smart_slider_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

#if LV_USE_XML
    void smart_slider_register(void);
#endif

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SMART_SLIDER_PRIVATE_H*/
