/**
 * @file super_button_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "super_button_gen.h"
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

lv_obj_t * super_button_create(lv_obj_t * parent, const char * button_text, lv_subject_t * subject)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * mybutton_1 = mybutton_create(parent);
    
    lv_obj_t * extra_label = lv_label_create(mybutton_1);
    lv_obj_set_name(extra_label, "extra_label");
    lv_label_set_text(extra_label, "Extra");
    lv_obj_set_align(extra_label, LV_ALIGN_RIGHT_MID);


    LV_TRACE_OBJ_CREATE("finished");

    return mybutton_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/