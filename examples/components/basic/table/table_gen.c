/**
 * @file table_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "table_gen.h"
#include "ui.h"

/*********************
 *      DEFINES
 *********************/



/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/



/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * table_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * lv_obj_0 = lv_obj_create(parent);


    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "table_#");

    return lv_obj_0;
}



/**********************
 *   STATIC FUNCTIONS
 **********************/

