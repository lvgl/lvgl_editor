/**
 * @file reference_project_gen.h
 */

#ifndef REFERENCE_PROJECT_GEN_H
#define REFERENCE_PROJECT_GEN_H

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
#include "widgets/smart_slider_gen.h"
#include "components/mybutton_gen.h"
#include "components/super_button_gen.h"
#include "screens/main_screen_gen.h"

/*********************
 *      DEFINES
 *********************/

// TODO: should these definitions be prefixed with the project name?
#define PAD_SM 8
#define PINK lv_color_hex(0x0xff00ff)

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/* Global Styles */
extern lv_style_t style_global_style_1;

/* Fonts */
extern lv_font_t * font_md;

/* Images */

/* Subjects */
extern lv_subject_t subject_subject1;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/* callbacks */
void my_cb1(lv_event_t * e);
void my_cb1(lv_event_t * e);

/**
 * Initialize the component library
 */

void reference_project_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*REFERENCE_PROJECT_GEN_H*/
