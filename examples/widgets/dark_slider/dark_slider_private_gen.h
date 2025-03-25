/**
 * @file dark_slider_private_gen.h
 *
 */

#ifndef DARK_SLIDER_PRIVATE_H
#define DARK_SLIDER_PRIVATE_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lvgl/src/widgets/slider/lv_slider_private.h" /*The ancestor of dark_slider*/
#include "dark_slider.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

typedef struct {
    lv_slider_t obj;  /* Base widget to extend */
    void * color;
} dark_slider_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*DARK_SLIDER_PRIVATE_H*/