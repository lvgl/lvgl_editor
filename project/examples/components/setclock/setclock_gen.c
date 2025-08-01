/**
 * @file setclock_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "setclock_gen.h"
#include "ui.h"

/*********************
 *      DEFINES
 *********************/

#define HOURS_STRING "0\n1\n2\n3\n4\n5\n6\n7\n8\n9\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23"

#define MINS_STRING "0\n1\n2\n3\n4\n5\n6\n7\n8\n9\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23\n24\n25\n26\n27\n28\n29\n30\n31\n32\n33\n34\n35\n36\n37\n38\n39\n40\n41\n42\n43\n44\n45\n46\n47\n48\n49\n50\n51\n52\n53\n54\n55\n56\n57\n58\n59"

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

lv_obj_t * setclock_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_ROW);
    lv_obj_set_width(lv_obj_0, LV_SIZE_CONTENT);
    lv_obj_set_height(lv_obj_0, LV_SIZE_CONTENT);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);

    lv_obj_t * column_0 = column_create(lv_obj_0);
    lv_obj_set_style_flex_cross_place(column_0, LV_FLEX_ALIGN_CENTER, 0);

    lv_obj_t * subtitle_0 = subtitle_create(column_0, "Hour");


    lv_obj_t * lv_roller_0 = lv_roller_create(column_0);
    lv_roller_set_options(lv_roller_0, HOURS_STRING, LV_ROLLER_MODE_NORMAL);lv_roller_bind_value(lv_roller_0, &hours);
    lv_obj_add_subject_set_int_event(lv_roller_0, &hour_edited, LV_EVENT_PRESSED, 1);
    lv_obj_add_subject_set_int_event(lv_roller_0, &hour_edited, LV_EVENT_RELEASED, 0);



    lv_obj_t * column_1 = column_create(lv_obj_0);
    lv_obj_set_style_flex_cross_place(column_1, LV_FLEX_ALIGN_CENTER, 0);

    lv_obj_t * subtitle_1 = subtitle_create(column_1, "Mins");


    lv_obj_t * lv_roller_1 = lv_roller_create(column_1);
    lv_roller_set_options(lv_roller_1, MINS_STRING, LV_ROLLER_MODE_NORMAL);lv_roller_bind_value(lv_roller_1, &mins);
    lv_obj_add_subject_set_int_event(lv_roller_1, &min_edited, LV_EVENT_PRESSED, 1);
    lv_obj_add_subject_set_int_event(lv_roller_1, &min_edited, LV_EVENT_RELEASED, 0);




    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "setclock_#");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/