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
    #include "lvgl_private.h"
#else
    #include "lvgl/lvgl.h"
    #include "lvgl/lvgl_private.h"
#endif

#ifdef LV_USE_XML
    #include "lv_xml/lv_xml.h"
#endif



/*********************
 *      DEFINES
 *********************/

/**
 * Label color over filled widgets
 */
#define COLOR_TEXT_ON_FILL lv_color_hex(0x013992)

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

extern lv_font_t * font_large;

/*----------------
 * Images
 *----------------*/

extern const void * img_logo;
extern const void * img_bulb;
extern const void * imgbtn_left;
extern const void * imgbtn_mid;
extern const void * imgbtn_right;

/*----------------
 * Subjects
 *----------------*/

extern lv_subject_t subject_value;
extern lv_subject_t subject_value2;
extern lv_subject_t subject_opa;
extern lv_subject_t subject_index;
extern lv_subject_t subject_checked;
extern lv_subject_t subject_text;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

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

/*Include all the widgets, components and screens of this library*/
#include "screens/lv_example_arc_gen.h"
#include "screens/lv_example_bar_gen.h"
#include "screens/lv_example_button_gen.h"
#include "screens/lv_example_buttonmatrix_gen.h"
#include "screens/lv_example_calendar_gen.h"
#include "screens/lv_example_chart_gen.h"
#include "screens/lv_example_checkbox_gen.h"
#include "screens/lv_example_dropdown_gen.h"
#include "screens/lv_example_gif_gen.h"
#include "screens/lv_example_image_gen.h"
#include "screens/lv_example_imagebutton_gen.h"
#include "screens/lv_example_keyboard_gen.h"
#include "screens/lv_example_label_gen.h"
#include "screens/lv_example_led_gen.h"
#include "screens/lv_example_line_gen.h"
#include "screens/lv_example_obj_gen.h"
#include "screens/lv_example_qrcode_gen.h"
#include "screens/lv_example_roller_gen.h"
#include "screens/lv_example_scale_gen.h"
#include "screens/lv_example_slider_gen.h"
#include "screens/lv_example_spangroup_gen.h"
#include "screens/lv_example_spinbox_gen.h"
#include "screens/lv_example_spinner_gen.h"
#include "screens/lv_example_switch_gen.h"
#include "screens/lv_example_table_gen.h"
#include "screens/lv_example_tabview_gen.h"
#include "screens/lv_example_textarea_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*EXAMPLES_GEN_H*/