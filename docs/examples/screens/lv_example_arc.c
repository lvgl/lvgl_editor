/**
 * @file lv_example_arc.c
 */

#include "../lv_examples.h"

/**
 * @title Arc
 * @brief Custom range and background angles, a styled indicator, and binding.
 *
 * The left arc sets a custom `min_value`/`max_value` and a 270° background
 * span (`bg_start_angle`/`bg_end_angle`), with named styles on the MAIN,
 * INDICATOR and KNOB parts. The right arc uses `bind_value` so dragging it
 * updates `subject_value`, which the label below reads back.
 */
void lv_example_arc(void)
{
    static lv_style_t style_arc_main;
    static lv_style_t style_arc_ind;
    static lv_style_t style_arc_knob;

    static bool inited = false;

    if (!inited) {
        lv_style_init(&style_arc_main);
        lv_style_set_arc_color(&style_arc_main, lv_color_hex(0x334155));
        lv_style_set_arc_width(&style_arc_main, 10);

        lv_style_init(&style_arc_ind);
        lv_style_set_arc_color(&style_arc_ind, lv_color_hex(0x3b82f6));
        lv_style_set_arc_width(&style_arc_ind, 10);

        lv_style_init(&style_arc_knob);
        lv_style_set_bg_color(&style_arc_knob, lv_color_hex(0x3b82f6));
        lv_style_set_pad_all(&style_arc_knob, 6);
        lv_style_set_border_width(&style_arc_knob, 2);
        lv_style_set_border_color(&style_arc_knob, lv_color_hex3(0xfff));
        lv_style_set_shadow_offset_y(&style_arc_knob, 2);
        lv_style_set_shadow_opa(&style_arc_knob, (255 * 50 / 100));
        lv_style_set_shadow_width(&style_arc_knob, 10);

        inited = true;
    }

    lv_obj_t * screen = lv_screen_active();

    /* 💡 Drag the right arc — the label tracks subject_value live. */
    lv_obj_t * lv_arc_0 = lv_arc_create(screen);
    lv_obj_set_size(lv_arc_0, 120, 120);
    lv_obj_set_align(lv_arc_0, LV_ALIGN_CENTER);
    lv_arc_bind_value(lv_arc_0, &subject_value);
    lv_obj_add_style(lv_arc_0, &style_arc_main, 0);
    lv_obj_add_style(lv_arc_0, &style_arc_ind, LV_PART_INDICATOR);
    lv_obj_add_style(lv_arc_0, &style_arc_knob, LV_PART_KNOB);
    lv_obj_t * lv_label_0 = lv_label_create(lv_arc_0);
    lv_label_bind_text(lv_label_0, &subject_value, "value: %d");
    lv_obj_set_align(lv_label_0, LV_ALIGN_CENTER);
}

