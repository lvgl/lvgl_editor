/**
 * @file example_gen.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "example_gen.h"

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

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*Fonts*/
lv_font_t * inter_sm;
lv_font_t * inter_md;
lv_font_t * inter_xl;

/*Images*/
const char * screenshot;
const char * wink;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void example_init_gen(const char * asset_path)
{
    char buf[256];
    /* create tiny tff font 'inter_sm' from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Inter-SemiBold.ttf");
    inter_sm = lv_tiny_ttf_create_file(buf, 14);
    /* create tiny tff font 'inter_md' from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Inter-SemiBold.ttf");
    inter_md = lv_tiny_ttf_create_file(buf, 18);
    /* create tiny tff font 'inter_xl' from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Inter-SemiBold.ttf");
    inter_xl = lv_tiny_ttf_create_file(buf, 22);

    lv_snprintf(buf, 256, "%s%s", asset_path, "images/lvgl.png");
    screenshot = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/wink.png");
    wink = lv_strdup(buf);

}

/**********************
 *   STATIC FUNCTIONS
 **********************/