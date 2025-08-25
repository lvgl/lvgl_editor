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

#define LIGHT lv_color_hex(0xffffff)

#define DARK lv_color_hex(0x0e0e0e)

#define SURFACE_PRIMARY_LIGHT lv_color_hex(0x0e0e0e)

#define TEXT_ON_SURFACE_PRIMARY_LIGHT lv_color_hex(0xffffff)

#define SURFACE_PRIMARY_DARK lv_color_hex(0xffffff)

#define TEXT_ON_SURFACE_PRIMARY_DARK lv_color_hex(0x0e0e0e)

#define BG_PRIMARY_LIGHT lv_color_hex(0xffffff)

#define BG_PRIMARY_DARK lv_color_hex(0x0e0e0e)

#define BG_SECONDARY_LIGHT lv_color_hex(0xf0f0f0)

#define BG_SECONDARY_DARK lv_color_hex(0x373130)

#define BG_TERTIARY_LIGHT lv_color_hex(0xf0f0f0)

#define BG_TERTIARY_DARK lv_color_hex(0x373130)

#define ACCENT1_LIGHT lv_color_hex(0xAF4ADE)

#define ACCENT1_DARK lv_color_hex(0xAF4ADE)

#define ACCENT1_50_LIGHT lv_color_hex(0xD2B1F6)

#define ACCENT1_50_DARK lv_color_hex(0x7E4CB7)

#define ACCENT2_LIGHT lv_color_hex(0xe9deaf)

#define ACCENT2_DARK lv_color_hex(0x887A3D)

#define ACCENT2_50_LIGHT lv_color_hex(0xf3f0e7)

#define ACCENT2_50_DARK lv_color_hex(0x4A473E)

#define ROOM_TEMP 24

#define PANEL_PAD 24

#define PANEL_CORNER_RADIUS 32

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

extern lv_style_t style_reset;
extern lv_style_t figma_import_test;

/*----------------
 * Fonts
 *----------------*/
extern lv_font_t * geist_semibold_12;
extern lv_font_t * geist_semibold_14;
extern lv_font_t * geist_bold_16;
extern lv_font_t * geist_semibold_20;
extern lv_font_t * geist_semibold_28;
extern lv_font_t * geist_regular_12;
extern lv_font_t * geist_regular_14;
extern lv_font_t * geist_light_60;
extern lv_font_t * literata_80;
extern lv_font_t * abril_fatface_80;
extern lv_font_t * big_shoulders_80;

/*----------------
 * Images
 *----------------*/
extern const void * icon_plus;
extern const void * icon_minus;
extern const void * light_temp_arc_bg;
extern const void * icon_heart;
extern const void * icon_play;
extern const void * icon_pause;
extern const void * icon_skip_back;
extern const void * icon_skip_forward;
extern const void * icon_volume_max;
extern const void * icon_volume_min;
extern const void * icon_volume_none;
extern const void * song_cover_1;
extern const void * weather_location_1_bg;
extern const void * weather_location_2_bg;
extern const void * icon_cloudy;
extern const void * icon_sunny;
extern const void * icon_pin;
extern const void * icon_theme;

/*----------------
 * Subjects
 *----------------*/
extern lv_subject_t theme;
extern lv_subject_t move_goal_target;
extern lv_subject_t location1_temp;
extern lv_subject_t location2_temp;
extern lv_subject_t thermostat;
extern lv_subject_t thermostat_temp;
extern lv_subject_t alarm_on;
extern lv_subject_t alarm_hour;
extern lv_subject_t alarm_min;
extern lv_subject_t speaker;
extern lv_subject_t speaker_vol;
extern lv_subject_t light_temperature;
extern lv_subject_t light_temperature_temp;
extern lv_subject_t song_played;
extern lv_subject_t song_liked;
extern lv_subject_t song_playing;

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

/*Include all the widget and components of this library*/
#include "components/basic/button/button_gen.h"
#include "components/basic/circle_button/circle_button_gen.h"
#include "components/basic/div/div_gen.h"
#include "components/basic/icon_button/icon_button_gen.h"
#include "components/basic/panel/panel_gen.h"
#include "components/basic/panel/panel_header_gen.h"
#include "components/basic/switch/switch_gen.h"
#include "components/cards/alarm/alarm_gen.h"
#include "components/cards/light_temperature/light_temperature_gen.h"
#include "components/cards/move_goal/move_goal_gen.h"
#include "components/cards/move_goal/stat_col_gen.h"
#include "components/cards/music_player/music_player_gen.h"
#include "components/cards/speaker_volume/speaker_volume_gen.h"
#include "components/cards/theme_swtcher/theme_switcher_gen.h"
#include "components/cards/thermostat/thermostat_gen.h"
#include "components/cards/weather/weather_gen.h"
#include "screens/elements_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*EXAMPLES_GEN_H*/