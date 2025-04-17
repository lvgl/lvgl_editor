/**
 * @file slider_box_private_gen.h
 *
 */

#ifndef SLIDER_BOX_PRIVATE_H
#define SLIDER_BOX_PRIVATE_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lvgl/src/core/lv_obj_private.h"
#include "slider_box.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

typedef struct {
    lv_obj_t obj;  /* Base widget to extend */
    void * title;
    lv_obj_t * lv_button_1;
    lv_obj_t * lv_label_1;
    lv_obj_t * lv_label_2;
    lv_obj_t * lv_button_2;
    lv_obj_t * lv_label_3;
    lv_obj_t * dark_slider_1;
} slider_box_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

#if LV_USE_XML
    void slider_box_register(void);
#endif

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SLIDER_BOX_PRIVATE_H*/