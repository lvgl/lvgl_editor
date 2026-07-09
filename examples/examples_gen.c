/**
 * @file examples_gen.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "examples_gen.h"

#if LV_USE_XML
#endif /* LV_USE_XML */

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void check_font(lv_font_t ** font, const char * name);

/**********************
 *  STATIC VARIABLES
 **********************/

static uint32_t examples_target = EXAMPLES_TARGET_ALL;

/*----------------
 * Translations
 *----------------*/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/

/*----------------
 * Fonts
 *----------------*/

lv_font_t * geist_semibold_12;
lv_font_t * geist_semibold_14;
lv_font_t * geist_bold_16;
lv_font_t * geist_semibold_20;
lv_font_t * geist_semibold_28;
lv_font_t * geist_regular_12;
lv_font_t * geist_regular_14;
lv_font_t * geist_light_60;
lv_font_t * literata_80;
lv_font_t * abril_fatface_80;
lv_font_t * big_shoulders_80;

/*----------------
 * Images
 *----------------*/

/* Targets: any */
const void * icon_plus = NULL;
const void * icon_minus = NULL;
const void * light_temp_arc_bg = NULL;
const void * icon_heart = NULL;
const void * icon_play = NULL;
const void * icon_pause = NULL;
const void * icon_skip_back = NULL;
const void * icon_skip_forward = NULL;
const void * icon_volume_max = NULL;
const void * icon_volume_min = NULL;
const void * icon_volume_none = NULL;
const void * song_cover_1 = NULL;
const void * weather_location_1_bg = NULL;
const void * weather_location_2_bg = NULL;
const void * icon_cloudy = NULL;
const void * icon_sunny = NULL;
const void * icon_pin = NULL;
const void * icon_theme = NULL;

/*----------------
 * Global styles
 *----------------*/

lv_style_t style_disabled;
lv_style_t style_reset;
lv_style_t figma_import_test;

/*----------------
 * Subjects
 *----------------*/

lv_subject_t dark_theme;
lv_subject_t move_goal_target;
lv_subject_t location1_temp;
lv_subject_t location2_temp;
lv_subject_t thermostat_on;
lv_subject_t thermostat_temp;
lv_subject_t room_temp;
lv_subject_t alarm_on;
lv_subject_t alarm_hour;
lv_subject_t alarm_min;
lv_subject_t speaker;
lv_subject_t speaker_vol;
lv_subject_t light_temp;
lv_subject_t light_temp_temp;
lv_subject_t song_played;
lv_subject_t song_liked;
lv_subject_t song_playing;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void examples_init_gen(const char * asset_path)
{
    char buf[256];


    /*----------------
     * Fonts
     *----------------*/

    /* Targets: any */

    #if EXAMPLES_CHECK_COMPILE_TARGET(EXAMPLES_TARGET_ALL)
    if (examples_check_target(EXAMPLES_TARGET_ALL)) {
        if (!geist_semibold_12) {
            /* geist_semibold_12 */
            /* create tiny ttf font "geist_semibold_12" from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Geist/Geist-SemiBold.ttf");
            geist_semibold_12 = lv_tiny_ttf_create_file(buf, 12);
        }
        if (!geist_semibold_14) {
            /* geist_semibold_14 */
            /* create tiny ttf font "geist_semibold_14" from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Geist/Geist-SemiBold.ttf");
            geist_semibold_14 = lv_tiny_ttf_create_file(buf, 14);
        }
        if (!geist_bold_16) {
            /* geist_bold_16 */
            /* create tiny ttf font "geist_bold_16" from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Geist/Geist-SemiBold.ttf");
            geist_bold_16 = lv_tiny_ttf_create_file(buf, 16);
        }
        if (!geist_semibold_20) {
            /* geist_semibold_20 */
            /* create tiny ttf font "geist_semibold_20" from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Geist/Geist-SemiBold.ttf");
            geist_semibold_20 = lv_tiny_ttf_create_file(buf, 20);
        }
        if (!geist_semibold_28) {
            /* geist_semibold_28 */
            /* create tiny ttf font "geist_semibold_28" from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Geist/Geist-SemiBold.ttf");
            geist_semibold_28 = lv_tiny_ttf_create_file(buf, 28);
        }
        if (!geist_regular_12) {
            /* geist_regular_12 */
            /* create tiny ttf font "geist_regular_12" from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Geist/Geist-Regular.ttf");
            geist_regular_12 = lv_tiny_ttf_create_file(buf, 12);
        }
        if (!geist_regular_14) {
            /* geist_regular_14 */
            /* create tiny ttf font "geist_regular_14" from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Geist/Geist-Regular.ttf");
            geist_regular_14 = lv_tiny_ttf_create_file(buf, 14);
        }
        if (!geist_light_60) {
            /* geist_light_60 */
            /* create tiny ttf font "geist_light_60" from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Geist/Geist-Light.ttf");
            geist_light_60 = lv_tiny_ttf_create_file(buf, 60);
        }
        if (!literata_80) {
            /* literata_80 */
            /* create tiny ttf font "literata_80" from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Literata/Literata-Bold.ttf");
            literata_80 = lv_tiny_ttf_create_file(buf, 80);
        }
        if (!abril_fatface_80) {
            /* abril_fatface_80 */
            /* create tiny ttf font "abril_fatface_80" from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/AbrilFatface/AbrilFatface-Regular.ttf");
            abril_fatface_80 = lv_tiny_ttf_create_file(buf, 80);
        }
        if (!big_shoulders_80) {
            /* big_shoulders_80 */
            /* create tiny ttf font "big_shoulders_80" from file */
            lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/BigShoulders/BigShoulders-Bold.ttf");
            big_shoulders_80 = lv_tiny_ttf_create_file(buf, 80);
        }
    }
    #endif

    /*----------------
     * Images
     *----------------*/

    /* Targets: any */
    #if EXAMPLES_CHECK_COMPILE_TARGET(EXAMPLES_TARGET_ALL)
    if (examples_check_target(EXAMPLES_TARGET_ALL)) {
        /* icon_plus */
        if (!icon_plus) {
            lv_snprintf(buf, 256, "%s%s", asset_path, "images/icon_plus.png");
            icon_plus = lv_strdup(buf);
        }
        /* icon_minus */
        if (!icon_minus) {
            lv_snprintf(buf, 256, "%s%s", asset_path, "images/icon_minus.png");
            icon_minus = lv_strdup(buf);
        }
        /* light_temp_arc_bg */
        if (!light_temp_arc_bg) {
            lv_snprintf(buf, 256, "%s%s", asset_path, "images/light_temp_arc_bg.png");
            light_temp_arc_bg = lv_strdup(buf);
        }
        /* icon_heart */
        if (!icon_heart) {
            lv_snprintf(buf, 256, "%s%s", asset_path, "images/icon_heart.png");
            icon_heart = lv_strdup(buf);
        }
        /* icon_play */
        if (!icon_play) {
            lv_snprintf(buf, 256, "%s%s", asset_path, "images/icon_play.png");
            icon_play = lv_strdup(buf);
        }
        /* icon_pause */
        if (!icon_pause) {
            lv_snprintf(buf, 256, "%s%s", asset_path, "images/icon_pause.png");
            icon_pause = lv_strdup(buf);
        }
        /* icon_skip_back */
        if (!icon_skip_back) {
            lv_snprintf(buf, 256, "%s%s", asset_path, "images/icon_skip_back.png");
            icon_skip_back = lv_strdup(buf);
        }
        /* icon_skip_forward */
        if (!icon_skip_forward) {
            lv_snprintf(buf, 256, "%s%s", asset_path, "images/icon_skip_forward.png");
            icon_skip_forward = lv_strdup(buf);
        }
        /* icon_volume_max */
        if (!icon_volume_max) {
            lv_snprintf(buf, 256, "%s%s", asset_path, "images/icon_volume_max.png");
            icon_volume_max = lv_strdup(buf);
        }
        /* icon_volume_min */
        if (!icon_volume_min) {
            lv_snprintf(buf, 256, "%s%s", asset_path, "images/icon_volume_min.png");
            icon_volume_min = lv_strdup(buf);
        }
        /* icon_volume_none */
        if (!icon_volume_none) {
            lv_snprintf(buf, 256, "%s%s", asset_path, "images/icon_volume_none.png");
            icon_volume_none = lv_strdup(buf);
        }
        /* song_cover_1 */
        if (!song_cover_1) {
            lv_snprintf(buf, 256, "%s%s", asset_path, "images/song_cover_1.png");
            song_cover_1 = lv_strdup(buf);
        }
        /* weather_location_1_bg */
        if (!weather_location_1_bg) {
            lv_snprintf(buf, 256, "%s%s", asset_path, "images/weather_location_1_bg.png");
            weather_location_1_bg = lv_strdup(buf);
        }
        /* weather_location_2_bg */
        if (!weather_location_2_bg) {
            lv_snprintf(buf, 256, "%s%s", asset_path, "images/weather_location_2_bg.png");
            weather_location_2_bg = lv_strdup(buf);
        }
        /* icon_cloudy */
        if (!icon_cloudy) {
            lv_snprintf(buf, 256, "%s%s", asset_path, "images/icon_cloudy.png");
            icon_cloudy = lv_strdup(buf);
        }
        /* icon_sunny */
        if (!icon_sunny) {
            lv_snprintf(buf, 256, "%s%s", asset_path, "images/icon_sunny.png");
            icon_sunny = lv_strdup(buf);
        }
        /* icon_pin */
        if (!icon_pin) {
            lv_snprintf(buf, 256, "%s%s", asset_path, "images/icon_pin.png");
            icon_pin = lv_strdup(buf);
        }
        /* icon_theme */
        if (!icon_theme) {
            lv_snprintf(buf, 256, "%s%s", asset_path, "images/icon_theme.png");
            icon_theme = lv_strdup(buf);
        }
    }
    #endif

    /*----------------
     * Global styles
     *----------------*/

    static bool style_inited = false;

    if (!style_inited) {
        #if EXAMPLES_CHECK_COMPILE_TARGET(EXAMPLES_TARGET_ALL)
        if (examples_check_target(EXAMPLES_TARGET_ALL)) {
            lv_style_init(&style_disabled);
            lv_style_set_opa_layered(&style_disabled, (255 * 60 / 100));

            lv_style_init(&style_reset);
            lv_style_set_width(&style_reset, LV_SIZE_CONTENT);
            lv_style_set_height(&style_reset, LV_SIZE_CONTENT);
            lv_style_set_bg_opa(&style_reset, 0);
            lv_style_set_border_width(&style_reset, 0);
            lv_style_set_radius(&style_reset, 0);
            lv_style_set_pad_all(&style_reset, 0);

            lv_style_init(&figma_import_test);
            lv_style_set_width(&figma_import_test, 24);
            lv_style_set_height(&figma_import_test, 24);

        }
        #endif
        style_inited = true;
    }

    /*----------------
     * Subjects
     *----------------*/
    lv_subject_init_int(&dark_theme, 0);
    lv_subject_init_int(&move_goal_target, 800);
    lv_subject_set_min_value_int(&move_goal_target, 0);
    lv_subject_set_max_value_int(&move_goal_target, 2000);
    lv_subject_init_int(&location1_temp, 25);
    lv_subject_init_int(&location2_temp, 34);
    lv_subject_init_int(&thermostat_on, 1);
    lv_subject_init_int(&thermostat_temp, 16);
    lv_subject_init_int(&room_temp, 24);
    lv_subject_init_int(&alarm_on, 1);
    lv_subject_init_int(&alarm_hour, 06);
    lv_subject_init_int(&alarm_min, 36);
    lv_subject_init_int(&speaker, 1);
    lv_subject_init_int(&speaker_vol, 40);
    lv_subject_init_int(&light_temp, 1);
    lv_subject_init_int(&light_temp_temp, 3000);
    lv_subject_init_int(&song_played, 130);
    lv_subject_init_int(&song_liked, 0);
    lv_subject_init_int(&song_playing, 0);

    /*----------------
     * Translations
     *----------------*/

#if LV_USE_XML
    /* Register widgets */

    /* Check all fonts / default if needed. This prevents fonts that are used in one target but
       defined in another from causing assertion failures during rendering of the Preview. */
    check_font(&geist_semibold_12, "geist_semibold_12");
    check_font(&geist_semibold_14, "geist_semibold_14");
    check_font(&geist_bold_16, "geist_bold_16");
    check_font(&geist_semibold_20, "geist_semibold_20");
    check_font(&geist_semibold_28, "geist_semibold_28");
    check_font(&geist_regular_12, "geist_regular_12");
    check_font(&geist_regular_14, "geist_regular_14");
    check_font(&geist_light_60, "geist_light_60");
    check_font(&literata_80, "literata_80");
    check_font(&abril_fatface_80, "abril_fatface_80");
    check_font(&big_shoulders_80, "big_shoulders_80");

    /* Register fonts */
    lv_xml_register_font(NULL, "geist_semibold_12", geist_semibold_12);
    lv_xml_register_font(NULL, "geist_semibold_14", geist_semibold_14);
    lv_xml_register_font(NULL, "geist_bold_16", geist_bold_16);
    lv_xml_register_font(NULL, "geist_semibold_20", geist_semibold_20);
    lv_xml_register_font(NULL, "geist_semibold_28", geist_semibold_28);
    lv_xml_register_font(NULL, "geist_regular_12", geist_regular_12);
    lv_xml_register_font(NULL, "geist_regular_14", geist_regular_14);
    lv_xml_register_font(NULL, "geist_light_60", geist_light_60);
    lv_xml_register_font(NULL, "literata_80", literata_80);
    lv_xml_register_font(NULL, "abril_fatface_80", abril_fatface_80);
    lv_xml_register_font(NULL, "big_shoulders_80", big_shoulders_80);

    /* Register subjects */
    lv_xml_register_subject(NULL, "dark_theme", &dark_theme);
    lv_xml_register_subject(NULL, "move_goal_target", &move_goal_target);
    lv_xml_register_subject(NULL, "location1_temp", &location1_temp);
    lv_xml_register_subject(NULL, "location2_temp", &location2_temp);
    lv_xml_register_subject(NULL, "thermostat_on", &thermostat_on);
    lv_xml_register_subject(NULL, "thermostat_temp", &thermostat_temp);
    lv_xml_register_subject(NULL, "room_temp", &room_temp);
    lv_xml_register_subject(NULL, "alarm_on", &alarm_on);
    lv_xml_register_subject(NULL, "alarm_hour", &alarm_hour);
    lv_xml_register_subject(NULL, "alarm_min", &alarm_min);
    lv_xml_register_subject(NULL, "speaker", &speaker);
    lv_xml_register_subject(NULL, "speaker_vol", &speaker_vol);
    lv_xml_register_subject(NULL, "light_temp", &light_temp);
    lv_xml_register_subject(NULL, "light_temp_temp", &light_temp_temp);
    lv_xml_register_subject(NULL, "song_played", &song_played);
    lv_xml_register_subject(NULL, "song_liked", &song_liked);
    lv_xml_register_subject(NULL, "song_playing", &song_playing);

    /* Register callbacks */
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
    lv_xml_register_image(NULL, "icon_plus", icon_plus);
    lv_xml_register_image(NULL, "icon_minus", icon_minus);
    lv_xml_register_image(NULL, "light_temp_arc_bg", light_temp_arc_bg);
    lv_xml_register_image(NULL, "icon_heart", icon_heart);
    lv_xml_register_image(NULL, "icon_play", icon_play);
    lv_xml_register_image(NULL, "icon_pause", icon_pause);
    lv_xml_register_image(NULL, "icon_skip_back", icon_skip_back);
    lv_xml_register_image(NULL, "icon_skip_forward", icon_skip_forward);
    lv_xml_register_image(NULL, "icon_volume_max", icon_volume_max);
    lv_xml_register_image(NULL, "icon_volume_min", icon_volume_min);
    lv_xml_register_image(NULL, "icon_volume_none", icon_volume_none);
    lv_xml_register_image(NULL, "song_cover_1", song_cover_1);
    lv_xml_register_image(NULL, "weather_location_1_bg", weather_location_1_bg);
    lv_xml_register_image(NULL, "weather_location_2_bg", weather_location_2_bg);
    lv_xml_register_image(NULL, "icon_cloudy", icon_cloudy);
    lv_xml_register_image(NULL, "icon_sunny", icon_sunny);
    lv_xml_register_image(NULL, "icon_pin", icon_pin);
    lv_xml_register_image(NULL, "icon_theme", icon_theme);
#endif

#if LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manually from XML using lv_xml_create() */
#endif
}

void examples_set_target(uint32_t target)
{
    examples_target = target;
}

uint32_t examples_get_target(void)
{
    return examples_target;
}

bool examples_check_target(uint32_t target)
{
    return (examples_target & target) ? true : false;
}

/* Callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/

static void check_font(lv_font_t ** font, const char * name)
{
    if (!(*font)) {
        *font = (lv_font_t *)LV_FONT_DEFAULT;
        LV_LOG_WARN("font `%s` was not set. Using `LV_FONT_DEFAULT` instead", name);
    }
}