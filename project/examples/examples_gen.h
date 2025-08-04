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

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif

/*********************
 *      DEFINES
 *********************/



/**********************
 *      TYPEDEFS
 **********************/



/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/
extern lv_obj_t * settings;

/*----------------
 * Global styles
 *----------------*/


/*----------------
 * Fonts
 *----------------*/
extern lv_font_t * font_title;
extern lv_font_t * font_subtitle;

/*----------------
 * Images
 *----------------*/
extern const void * img_wifi;
extern const void * img_bluetooth;
extern const void * img_bell;

/*----------------
 * Subjects
 *----------------*/
extern lv_subject_t hours;
extern lv_subject_t mins;
extern lv_subject_t age;
extern lv_subject_t bluetooth_on;
extern lv_subject_t wifi_on;
extern lv_subject_t notification_on;
extern lv_subject_t hour_edited;
extern lv_subject_t min_edited;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/
void about_click_event_cb(lv_event_t * e);

/**
 * Initialize the component library
 */

void examples_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widget and components of this library*/
#include "components/checkbox/checkbox_gen.h"
#include "components/column/column_gen.h"
#include "components/header/header_gen.h"
#include "components/icon/icon_gen.h"
#include "components/row/row_gen.h"
#include "components/setclock/setclock_gen.h"
#include "components/step_button/step_button_gen.h"
#include "components/subtitle/subtitle_gen.h"
#include "components/title/title_gen.h"
#include "screens/about/about_gen.h"
#include "screens/settings/settings_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*EXAMPLES_GEN_H*/