/**
 * @file ui.c
 */

/*********************
 *      INCLUDES
 *********************/
#include "ui.h"

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
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void ui_init(const char * asset_path)
{
    lv_translation_set_language("en");
    LV_LOG_USER("ui_init()\n");
    examples_init(asset_path);
    
}

/**********************
 *   STATIC FUNCTIONS
 **********************/