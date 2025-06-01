/**
 * @file reference_project_gen.c
 */

/*********************
 *      INCLUDES
 *********************/
#include "reference_project_gen.h"

#if LV_USE_XML
   #include "widgets/smart_slider_private_gen.h"
#endif

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
 *  GLOBAL VARIABLES
 **********************/

/* Global Styles */
lv_style_t style_global_style_1;

/* Fonts */
lv_font_t * font_md;
extern uint8_t Nunito_SemiBold_ttf_data[];
extern size_t Nunito_SemiBold_ttf_data_size;

/* Images */

/*Subjects*/
lv_subject_t subject_subject1;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void reference_project_init_gen(const char * asset_path)
{
    char buf[256];

    /* Global Styles */
    static bool style_inited = false;

    if (!style_inited) {
        
        lv_style_init(&style_global_style_1);
        lv_style_set_bg_color(&style_global_style_1, #pink);
        lv_style_set_border_color(&style_global_style_1, lv_color_hex(0xffff00));
        lv_style_set_border_width(&style_global_style_1, 4);

        style_inited = true;
    }

    /* Subjects */
    lv_subject_init_int(&subject_subject1, 20);

    /* Fonts */
    /* create tiny ttf font 'font_md' from C array */
    font_md = lv_tiny_ttf_create_data(Nunito_SemiBold_ttf_data, Nunito_SemiBold_ttf_data_size, 40);

    /* Images */

    #if LV_USE_XML
        smart_slider_register();

        lv_xml_register_font(NULL, "font_md", font_md);


        lv_xml_register_subject(NULL, "subject1", &subject_subject1);

        lv_xml_register_event_cb(NULL, "my_cb1", my_cb1);
        lv_xml_register_event_cb(NULL, "my_cb1", my_cb1);
    #endif
}

/* callbacks */
#if defined(LV_EDITOR_PREVIEW)
void __attribute__((weak)) my_cb1(lv_event_t * e)
{
   LV_UNUSED(e);
   LV_LOG("my_cb1 was called\n");
}
void __attribute__((weak)) my_cb1(lv_event_t * e)
{
   LV_UNUSED(e);
   LV_LOG("my_cb1 was called\n");
}
#endif

/**********************
 *   STATIC FUNCTIONS
 **********************/
