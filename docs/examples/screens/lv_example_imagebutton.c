/**
 * @file lv_example_imagebutton.c
 */

#include "../lv_examples.h"

/**
 * @title Image button
 * @brief A button drawn from per-state images instead of a styled rectangle.
 *
 * `<lv_imagebutton-src_left>`, `-src_mid` and `-src_right` set the image for
 * a given `state`. The middle image is tiled to fill the width, so left and
 * right act as fixed end-caps. Here the released and pressed states use the
 * same source to keep the example self-contained.
 */
void lv_example_imagebutton(void)
{
    static lv_style_t style_pressed;

    static bool inited = false;

    if (!inited) {
        lv_style_init(&style_pressed);
        lv_style_set_transform_width(&style_pressed, 10);
        lv_style_set_image_recolor(&style_pressed, lv_color_hex3(0x000));
        lv_style_set_image_recolor_opa(&style_pressed, (255 * 20 / 100));

        inited = true;
    }

    lv_screen_active();
}

