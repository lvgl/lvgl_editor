/**
 * @file alarm_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "alarm_gen.h"
#include "ui.h"

/*********************
 *      DEFINES
 *********************/

#define HOURS_STRING "00\n01\n02\n03\n04\n05\n06\n07\n08\n09\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23"

#define MINS_STRING "00\n01\n02\n03\n04\n05\n06\n07\n08\n09\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23\n24\n25\n26\n27\n28\n29\n30\n31\n32\n33\n34\n35\n36\n37\n38\n39\n40\n41\n42\n43\n44\n45\n46\n47\n48\n49\n50\n51\n52\n53\n54\n55\n56\n57\n58\n59"

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

lv_obj_t * alarm_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t settings;
    static lv_style_t settings_dark;
    static lv_style_t has_border_bottom;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&settings);
        lv_style_set_border_color(&settings, SURFACE_PRIMARY_LIGHT);
        lv_style_set_border_opa(&settings, (255 * 10 / 100));
        lv_style_set_border_width(&settings, 1);
        lv_style_set_radius(&settings, 12);

        lv_style_init(&settings_dark);
        lv_style_set_border_color(&settings_dark, SURFACE_PRIMARY_DARK);

        lv_style_init(&has_border_bottom);
        lv_style_set_border_color(&has_border_bottom, SURFACE_PRIMARY_LIGHT);
        lv_style_set_border_width(&has_border_bottom, 1);
        lv_style_set_border_side(&has_border_bottom, LV_BORDER_SIDE_BOTTOM);
        lv_style_set_border_opa(&has_border_bottom, 26);

        style_inited = true;
    }

    lv_obj_t * card_0 = card_create(parent);
    lv_obj_set_width(card_0, 320);

    lv_obj_t * card_header_0 = card_header_create(card_0, "Alarm");

    lv_obj_t * switch_0 = switch_create(card_header_0);
    lv_obj_bind_checked(switch_0, &alarm_on);



    lv_obj_t * div_0 = div_create(card_0);
    lv_obj_set_flex_flow(div_0, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_flex_main_place(div_0, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_flex_cross_place(div_0, LV_FLEX_ALIGN_CENTER, 0);

    lv_obj_t * roller_0 = roller_create(div_0, &alarm_on);
    lv_roller_set_options(roller_0, HOURS_STRING, LV_ROLLER_MODE_NORMAL);lv_roller_bind_value(roller_0, &alarm_hour);


    lv_obj_t * lv_label_0 = lv_label_create(div_0);
    lv_label_set_text(lv_label_0, ":");
    lv_obj_set_style_text_font(lv_label_0, geist_light_60, 0);
    lv_obj_bind_style(lv_label_0, &style_disabled, 0, &alarm_on, 0);


    lv_obj_t * roller_1 = roller_create(div_0, &alarm_on);
    lv_roller_set_options(roller_1, MINS_STRING, LV_ROLLER_MODE_NORMAL);lv_roller_bind_value(roller_1, &alarm_min);



    lv_obj_t * div_1 = div_create(card_0);
    lv_obj_set_flex_flow(div_1, LV_FLEX_FLOW_COLUMN);
    lv_obj_add_style(div_1, &settings, 0);
    lv_obj_bind_style(div_1, &settings_dark, 0, &dark_theme, 1);

    lv_obj_t * div_2 = div_create(div_1);
    lv_obj_set_flex_flow(div_2, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_flex_main_place(div_2, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_pad_hor(div_2, 20, 0);
    lv_obj_set_style_pad_ver(div_2, 12, 0);
    lv_obj_add_style(div_2, &has_border_bottom, 0);
    lv_obj_bind_style(div_2, &settings_dark, 0, &dark_theme, 1);

    lv_obj_t * lv_label_1 = lv_label_create(div_2);
    lv_label_set_text(lv_label_1, "Sound");
    lv_obj_set_style_text_font(lv_label_1, geist_semibold_14, 0);


    lv_obj_t * lv_label_2 = lv_label_create(div_2);
    lv_label_set_text(lv_label_2, "Seedling");
    lv_obj_set_style_text_font(lv_label_2, geist_regular_14, 0);



    lv_obj_t * div_3 = div_create(div_1);
    lv_obj_set_flex_flow(div_3, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_flex_main_place(div_3, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_pad_hor(div_3, 20, 0);
    lv_obj_set_style_pad_ver(div_3, 12, 0);

    lv_obj_t * lv_label_3 = lv_label_create(div_3);
    lv_label_set_text(lv_label_3, "Snooze duration");
    lv_obj_set_style_text_font(lv_label_3, geist_semibold_14, 0);


    lv_obj_t * lv_label_4 = lv_label_create(div_3);
    lv_label_set_text(lv_label_4, "10min");
    lv_obj_set_style_text_font(lv_label_4, geist_regular_14, 0);





    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(card_0, "alarm_#");

    return card_0;
}



/**********************
 *   STATIC FUNCTIONS
 **********************/

