/**
 * @file lib_gen.c
 */

/*********************
 *      INCLUDES
 *********************/
#include "lib_gen.h"

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
 * Global styles
 *----------------*/

/*----------------
 * Fonts
 *----------------*/
lv_font_t * geist_bold_16;

/*----------------
 * Images
 *----------------*/
const void * image;

/*----------------
 * Subjects
 *----------------*/
lv_subject_t theme;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void lib_init_gen(const char * asset_path)
{
    char buf[256];

    /*----------------
     * Global styles
     *----------------*/

    /*----------------
     * Fonts
     *----------------*/
    /* create tiny ttf font "geist_bold_16" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Geist/Geist-SemiBold.ttf");
    geist_bold_16 = lv_tiny_ttf_create_file(buf, 16);

    /*----------------
     * Images
     *----------------*/
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/image.png");
    image = lv_strdup(buf);


    /*----------------
     * Subjects
     *----------------*/
    lv_subject_init_int(&theme, 0);

    /*----------------
     * Translations
     *----------------*/


#if LV_USE_XML
    /*Register widgets*/

    /* Register fonts */
    lv_xml_register_font(NULL, "geist_bold_16", geist_bold_16);

    /* Register subjects */
    lv_xml_register_subject(NULL, "theme", &theme);

    /* Register callbacks */
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)

    /* Register images */
    lv_xml_register_image(NULL, "image", image);
#endif

#if LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/

    /* If XML is enabled it's assumed that the permanent screens are created
     *manaully from XML using lv_xml_create() */

#endif
}

/* callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/