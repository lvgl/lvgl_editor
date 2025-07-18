/**
 * @file examples.c
 */

/*********************
 *      INCLUDES
 *********************/
#include "examples.h"

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

void examples_init(const char * asset_path)
{
    examples_init_gen(asset_path);
}

void  about_click_event_cb(lv_event_t * e)
{
   LV_UNUSED(e);
   LV_LOG("The about button was clicked\n");
}
/**********************
 *   STATIC FUNCTIONS
 **********************/