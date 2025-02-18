/**
 * @file example_gen.h
 *
 */

#ifndef EXAMPLE_GEN_H
#define EXAMPLE_GEN_H

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
#include "components/buttons/button_default_gen.h"
#include "components/buttons/button_error_gen.h"
#include "components/buttons/button_warning_gen.h"
#include "components/headings/h1_gen.h"
#include "components/headings/h2_gen.h"
#include "components/headings/h3_gen.h"
#include "components/home_gen.h"
#include "components/scratchpad_gen.h"

/*********************
 *      DEFINES
 *********************/

// TODO: should this definitions be prefixed with the project name?


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
extern const char * screenshot;
extern const char * wink;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Initialize the component library
 */
void example_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*EXAMPLE_GEN_H*/