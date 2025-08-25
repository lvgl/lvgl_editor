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

    static lv_style_t panel_size;
    static lv_style_t settings;
    static lv_style_t settings_dark;
    static lv_style_t has_border_bottom;
    static lv_style_t roller;
    static lv_style_t roller_dark;
    static lv_style_t roller_selected;
    static lv_style_t roller_disabled;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&panel_size);
        lv_style_set_width(&panel_size, 320);
        lv_style_set_height(&panel_size, 400);

        lv_style_init(&settings);
        lv_style_set_border_color(&settings, SURFACE_PRIMARY_LIGHT);
        lv_style_set_border_opa(&settings, 26);
        lv_style_set_border_width(&settings, 1);
        lv_style_set_radius(&settings, 12);

        lv_style_init(&settings_dark);
        lv_style_set_border_color(&settings_dark, SURFACE_PRIMARY_DARK);

        lv_style_init(&has_border_bottom);
        lv_style_set_border_color(&has_border_bottom, SURFACE_PRIMARY_LIGHT);
        lv_style_set_border_width(&has_border_bottom, 1);
        lv_style_set_border_side(&has_border_bottom, LV_BORDER_SIDE_BOTTOM);
        lv_style_set_border_opa(&has_border_bottom, 26);

        lv_style_init(&roller);
        lv_style_set_border_width(&roller, 0);
        lv_style_set_text_font(&roller, geist_light_60);
        lv_style_set_height(&roller, 180);
        lv_style_set_text_line_space(&roller, -16);
        lv_style_set_text_color(&roller, SURFACE_PRIMARY_LIGHT);
        lv_style_set_text_opa(&roller, 60);
        lv_style_set_bg_opa(&roller, 0);

        lv_style_init(&roller_dark);
        lv_style_set_text_color(&roller_dark, SURFACE_PRIMARY_DARK);

        lv_style_init(&roller_selected);
        lv_style_set_bg_opa(&roller_selected, 0);
        lv_style_set_text_opa(&roller_selected, 255);
        lv_style_set_text_color(&roller_selected, SURFACE_PRIMARY_LIGHT);

        lv_style_init(&roller_disabled);
        lv_style_set_opa_layered(&roller_disabled, 42);

        style_inited = true;
    }

    lv_obj_t * panel_0 = panel_create(parent);
    lv_obj_set_style_flex_main_place(panel_0, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_add_style(panel_0, &panel_size, 0);

    lv_obj_t * panel_header_0 = panel_header_create(panel_0);
    lv_obj_set_width(panel_header_0, lv_pct(100));

    lv_obj_t * lv_label_0 = lv_label_create(panel_header_0);
    lv_label_set_text(lv_label_0, "Alarm");
    lv_obj_set_style_text_font(lv_label_0, geist_semibold_20, 0);


    lv_obj_t * switch_0 = switch_create(panel_header_0);
    lv_obj_bind_checked(switch_0, &alarm_on);



    lv_obj_t * div_0 = div_create(panel_0);
    lv_obj_set_width(div_0, 240);
    lv_obj_set_height(div_0, 180);

    lv_obj_t * div_1 = div_create(div_0);
    lv_obj_set_style_layout(div_1, LV_LAYOUT_FLEX, 0);
    lv_obj_set_width(div_1, lv_pct(100));
    lv_obj_set_style_flex_main_place(div_1, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_flex_cross_place(div_1, LV_FLEX_ALIGN_CENTER, 0);

    lv_obj_t * lv_roller_0 = lv_roller_create(div_1);
    lv_roller_set_options(lv_roller_0, HOURS_STRING, LV_ROLLER_MODE_NORMAL);lv_roller_bind_value(lv_roller_0, &alarm_hour);
    lv_obj_bind_state_if_eq(lv_roller_0, &alarm_on, LV_STATE_DISABLED, 0);
    lv_obj_bind_style(lv_roller_0, &roller_disabled, 0, &alarm_on, 0);
    lv_obj_add_style(lv_roller_0, &roller, 0);
    lv_obj_bind_style(lv_roller_0, &roller_dark, 0, &theme, 1);
    lv_obj_add_style(lv_roller_0, &roller_selected, LV_PART_SELECTED);
    lv_obj_bind_style(lv_roller_0, &roller_dark, LV_PART_SELECTED, &theme, 1);


    lv_obj_t * lv_label_1 = lv_label_create(div_1);
    lv_label_set_text(lv_label_1, ":");
    lv_obj_set_style_text_font(lv_label_1, geist_light_60, 0);
    lv_obj_bind_style(lv_label_1, &roller_disabled, 0, &alarm_on, 0);


    lv_obj_t * lv_roller_1 = lv_roller_create(div_1);
    lv_roller_set_options(lv_roller_1, MINS_STRING, LV_ROLLER_MODE_NORMAL);lv_roller_bind_value(lv_roller_1, &alarm_min);
    lv_obj_bind_state_if_eq(lv_roller_1, &alarm_on, LV_STATE_DISABLED, 0);
    lv_obj_bind_style(lv_roller_1, &roller_disabled, 0, &alarm_on, 0);
    lv_obj_add_style(lv_roller_1, &roller, 0);
    lv_obj_bind_style(lv_roller_1, &roller_dark, 0, &theme, 1);
    lv_obj_add_style(lv_roller_1, &roller_selected, LV_PART_SELECTED);
    lv_obj_bind_style(lv_roller_1, &roller_dark, LV_PART_SELECTED, &theme, 1);




    lv_obj_t * div_2 = div_create(panel_0);
    lv_obj_set_width(div_2, lv_pct(100));
    lv_obj_set_style_layout(div_2, LV_LAYOUT_FLEX, 0);
    lv_obj_set_flex_flow(div_2, LV_FLEX_FLOW_COLUMN);
    lv_obj_add_style(div_2, &settings, 0);
    lv_obj_bind_style(div_2, &settings_dark, 0, &theme, 1);

    lv_obj_t * div_3 = div_create(div_2);
    lv_obj_set_width(div_3, lv_pct(100));
    lv_obj_set_style_layout(div_3, LV_LAYOUT_FLEX, 0);
    lv_obj_set_style_flex_main_place(div_3, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_pad_hor(div_3, 20, 0);
    lv_obj_set_style_pad_ver(div_3, 12, 0);
    lv_obj_add_style(div_3, &has_border_bottom, 0);
    lv_obj_bind_style(div_3, &settings_dark, 0, &theme, 1);

    lv_obj_t * lv_label_2 = lv_label_create(div_3);
    lv_label_set_text(lv_label_2, "Sound");
    lv_obj_set_style_text_font(lv_label_2, geist_semibold_14, 0);


    lv_obj_t * lv_label_3 = lv_label_create(div_3);
    lv_label_set_text(lv_label_3, "Seedling");
    lv_obj_set_style_text_font(lv_label_3, geist_regular_14, 0);



    lv_obj_t * div_4 = div_create(div_2);
    lv_obj_set_width(div_4, lv_pct(100));
    lv_obj_set_style_layout(div_4, LV_LAYOUT_FLEX, 0);
    lv_obj_set_style_flex_main_place(div_4, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_pad_hor(div_4, 20, 0);
    lv_obj_set_style_pad_ver(div_4, 12, 0);

    lv_obj_t * lv_label_4 = lv_label_create(div_4);
    lv_label_set_text(lv_label_4, "Snooze duration");
    lv_obj_set_style_text_font(lv_label_4, geist_semibold_14, 0);


    lv_obj_t * lv_label_5 = lv_label_create(div_4);
    lv_label_set_text(lv_label_5, "10min");
    lv_obj_set_style_text_font(lv_label_5, geist_regular_14, 0);





    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(panel_0, "alarm_#");

    return panel_0;
}



/**********************
 *   STATIC FUNCTIONS
 **********************/

