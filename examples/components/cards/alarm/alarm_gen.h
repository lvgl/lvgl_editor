/**
 * @file alarm_gen.h
 */

#ifndef ALARM_H
#define ALARM_H

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

/**********************
 *      TYPEDEFS
 **********************/

typedef enum {
    ALARM_TIMELINE_OPEN = 0,
    _ALARM_TIMELINE_CNT = 1
}alarm_timeline_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/


lv_obj_t * alarm_create(lv_obj_t * parent);

/**
 * Get a timeline of a alarm
 * @param obj          pointer to a alarm component
 * @param timeline_id  ID of the the timeline
 * @return             pointer to the timeline or NULL if not found
 */
lv_anim_timeline_t * alarm_get_timeline(lv_obj_t * obj, alarm_timeline_t timeline_id);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*ALARM_H*/