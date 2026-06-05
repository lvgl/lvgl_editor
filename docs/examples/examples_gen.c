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

/**********************
 *  STATIC VARIABLES
 **********************/

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

lv_font_t * font_large;
extern lv_font_t font_large_data;

/*----------------
 * Images
 *----------------*/

const void * img_logo;
extern const void * img_logo_data;
const void * img_bulb;
const void * imgbtn_left;
const void * imgbtn_mid;
const void * imgbtn_right;

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Subjects
 *----------------*/

lv_subject_t subject_value;
lv_subject_t subject_value2;
lv_subject_t subject_opa;
lv_subject_t subject_index;
lv_subject_t subject_checked;
lv_subject_t subject_text;

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

    /* get font 'font_large' from a C array */
    font_large = &font_large_data;


    /*----------------
     * Images
     *----------------*/
    img_logo = &img_logo_data;
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/bulb.gif");
    img_bulb = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/imgbtn_left.png");
    imgbtn_left = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/imgbtn_mid.png");
    imgbtn_mid = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/imgbtn_right.png");
    imgbtn_right = lv_strdup(buf);

    /*----------------
     * Global styles
     *----------------*/

    /*----------------
     * Subjects
     *----------------*/
    lv_subject_init_int(&subject_value, 50);
    lv_subject_set_min_value_int(&subject_value, 0);
    lv_subject_set_max_value_int(&subject_value, 100);
    lv_subject_init_int(&subject_value2, 20);
    lv_subject_set_min_value_int(&subject_value2, 0);
    lv_subject_set_max_value_int(&subject_value2, 100);
    lv_subject_init_int(&subject_opa, 128);
    lv_subject_set_min_value_int(&subject_opa, 0);
    lv_subject_set_max_value_int(&subject_opa, 255);
    lv_subject_init_int(&subject_index, 0);
    lv_subject_init_int(&subject_checked, 0);
    static char subject_text_buf[UI_SUBJECT_STRING_LENGTH];
    static char subject_text_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&subject_text,
                           subject_text_buf,
                           subject_text_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "Hello"
                          );

    /*----------------
     * Translations
     *----------------*/

#if LV_USE_XML
    /* Register widgets */

    /* Register fonts */
    lv_xml_register_font(NULL, "font_large", font_large);

    /* Register subjects */
    lv_xml_register_subject(NULL, "subject_value", &subject_value);
    lv_xml_register_subject(NULL, "subject_value2", &subject_value2);
    lv_xml_register_subject(NULL, "subject_opa", &subject_opa);
    lv_xml_register_subject(NULL, "subject_index", &subject_index);
    lv_xml_register_subject(NULL, "subject_checked", &subject_checked);
    lv_xml_register_subject(NULL, "subject_text", &subject_text);

    /* Register callbacks */
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
    lv_xml_register_image(NULL, "img_logo", img_logo);
    lv_xml_register_image(NULL, "img_bulb", img_bulb);
    lv_xml_register_image(NULL, "imgbtn_left", imgbtn_left);
    lv_xml_register_image(NULL, "imgbtn_mid", imgbtn_mid);
    lv_xml_register_image(NULL, "imgbtn_right", imgbtn_right);
#endif

#if LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manaully from XML using lv_xml_create() */
#endif
}

/* Callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/