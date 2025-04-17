/**
 * @file examples_gen.h
 */

#ifndef EXAMPLES_GEN_H
#define EXAMPLES_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "lvgl/lvgl.h"

/*Include all the widget and components of this library*/
#include "widgets/dark_slider/dark_slider_gen.h"
#include "widgets/slider_box/slider_box_gen.h"
#include "widgets/dark_slider/dark_slider_gen.h"
#include "widgets/slider_box/slider_box_gen.h"
#include "components/buttons/button_default_gen.h"
#include "components/buttons/button_error_gen.h"
#include "components/buttons/button_warning_gen.h"
#include "components/headings/h1_gen.h"
#include "components/headings/h2_gen.h"
#include "components/headings/h3_gen.h"
#include "components/scratchpad_gen.h"
#include "screens/home_gen.h"

/*********************
 *      DEFINES
 *********************/

// TODO: should these definitions be prefixed with the project name?


/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*Fonts*/
extern lv_font_t * inter_sm;
extern lv_font_t * inter_md;
extern lv_font_t * inter_xl;

/*Images*/
extern const void * lvgl_logo;
extern const void * wink;

extern lv_subject_t subject_room_1_temp;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Initialize the component library
 */

void examples_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*EXAMPLES_GEN_H*/
