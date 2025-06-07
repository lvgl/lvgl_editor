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

/*********************
 *      DEFINES
 *********************/

/**
 * To make paddings unified.
 */
#define PAD_SM 8

#define PINK lv_color_hex(0xff00ff)

/**********************
 *      TYPEDEFS
 **********************/

typedef enum {

	/**
	 * All good
	 */
	UI_STATE_NORMAL,

	/**
	 * There is a warning
	 */
	UI_STATE_WARNING = 0x20,
	UI_STATE_ERROR,

	/**
	 * Big problem.
	 */
	UI_STATE_CRITICAL,
}ui_state_t;

/**********************
 * GLOBAL VARIABLES
 **********************/
/*--------------------
 *  Permanent screens
 *-------------------*/
 extern lv_obj_t * main_screen;

/*----------------
 *  Global styles
 *----------------*/

/**
 * We will use it on some places
 */
extern lv_style_t global_style_1;

/*----------------
 * Fonts
 *----------------*/
extern lv_font_t * font_md;

/*----------------
 * Images
 *----------------*/
extern const void * img_bell;

/*----------------
 * Subjects
 *----------------*/
extern lv_subject_t subject1;
extern lv_subject_t subject2;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event callbacks
 *----------------*/

void my_cb1(lv_event_t * e);

/**
 * Initialize the component library
 */

void reference_project_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widget and components of this library*/
#include "widgets/smart_slider_gen.h"
#include "components/mybutton_gen.h"
#include "components/super_button_gen.h"
#include "components/h3_gen.h"
#include "screens/main_screen_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*REFERENCE_PROJECT_GEN_H*/
