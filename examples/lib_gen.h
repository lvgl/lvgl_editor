/**
 * @file lib_gen.h
 */

#ifndef LIB_GEN_H
#define LIB_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

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

#define SURFACE_PRIMARY_LIGHT lv_color_hex(0x000000)

#define TEXT_ON_SURFACE_PRIMARY_LIGHT lv_color_hex(0xffffff)

#define SURFACE_PRIMARY_DARK lv_color_hex(0xffffff)

#define TEXT_ON_SURFACE_PRIMARY_DARK lv_color_hex(0x000000)

#define BG_BASE_LIGHT lv_color_hex(0xffffff)

#define BG_BASE_DARK lv_color_hex(0x000000)

/**********************
 *      TYPEDEFS
 **********************/



/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

/*----------------
 * Global styles
 *----------------*/


/*----------------
 * Fonts
 *----------------*/
extern lv_font_t * geist_bold_16;

/*----------------
 * Images
 *----------------*/
extern const void * image;

/*----------------
 * Subjects
 *----------------*/
extern lv_subject_t theme;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

/**
 * Initialize the component library
 */

void lib_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widget and components of this library*/
#include "components/button/button_gen.h"
#include "screens/elements_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LIB_GEN_H*/