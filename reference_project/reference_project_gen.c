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

/*----------------
 * Translation
 *----------------*/

static const char * translation_languages[] = {"en", "de", "hu", NULL};
static const char * translation_tags[] = {"dog", "cat", "snake", NULL};
static const char * translation_texts[] = {
		"The dog", "Der Hund", "A kutya", /*dog*/
		"The cat", "Die Katze", "A cica", /*cat*/
		"The snake", NULL, "A kígyó", /*snake*/
};

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/
 lv_obj_t * main_screen;

/*----------------
 * Global styles
 *----------------*/
lv_style_t global_style_1;

/*----------------
 * Fonts
 *----------------*/
lv_font_t * font_md;
extern uint8_t Nunito_SemiBold_ttf_data[];
extern size_t Nunito_SemiBold_ttf_data_size;

/*----------------
 * Images
 *----------------*/
const void * img_bell;

/*----------------
 * Subjects
 *----------------*/
lv_subject_t subject1;
lv_subject_t subject2;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void reference_project_init_gen(const char * asset_path)
{
    char buf[256];

    /*----------------
     * Global styles
     *----------------*/
    lv_style_init(&global_style_1);
    lv_style_set_bg_color(&global_style_1, PINK);
    lv_style_set_border_color(&global_style_1, lv_color_hex(0xffff00));
    lv_style_set_border_width(&global_style_1, 4);

    /*----------------
     * Fonts
     *----------------*/
    /* create tiny ttf font 'font_md' from C array */
    font_md = lv_tiny_ttf_create_data(Nunito_SemiBold_ttf_data, Nunito_SemiBold_ttf_data_size, 40);

    /*----------------
     * Images
     *----------------*/
     lv_snprintf(buf, 256, "%s%s", asset_path, "images/bell-solid.png");
     img_bell = lv_strdup(buf);

     /*----------------
      * Subjects
      *----------------*/
     lv_subject_init_int(&subject1, 10);
     lv_subject_init_int(&subject2, 20);

    /*----------------
     * Translations
     *----------------*/
    lv_translation_add_static(translation_languages, translation_tags, translation_texts);

    /*Register widgets*/
#if LV_USE_XML
        smart_slider_register();
#endif

    /*Register all the global assets so that they won't be created again when globals.xml is parsed.
     *While running in the editor skip this step to update the preview when the XML changes*/
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)

	/*Register fonts*/
	lv_xml_register_font(NULL, "font_md", font_md);

	/*Register images*/
	lv_xml_register_image(NULL, "img_bell", img_bell);

	/*Register subjects*/
	lv_xml_register_subject(NULL, "subject1", &subject1);
	lv_xml_register_subject(NULL, "subject2", &subject2);
#endif

   /*-------------------
   *  Permanent screen
   *------------------*/
   
   main_screen = main_screen_create();
}

/*----------------
 * Event callbacks
 *----------------*/

#if defined(LV_EDITOR_PREVIEW)

void __attribute__((weak)) my_cb1(lv_event_t * e)
{
   LV_UNUSED(e);
   LV_LOG("my_cb1 was called\n");
}

#endif
/**********************
 *   STATIC FUNCTIONS
 **********************/
