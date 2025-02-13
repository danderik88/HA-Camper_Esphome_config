// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: Camper_Dashboard

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_Home
void ui_Home_screen_init(void);
lv_obj_t *ui_Home;
lv_obj_t *ui_Panel1;
lv_obj_t *ui_Button2;
lv_obj_t *ui_Image5;
lv_obj_t *ui_Label2;
lv_obj_t *ui_Image1;
lv_obj_t *ui_Label5;
lv_obj_t *ui_Panel2;
lv_obj_t *ui_Button1;
lv_obj_t *ui_Image2;
lv_obj_t *ui_Label1;
lv_obj_t *ui_Image3;
lv_obj_t *ui_Label3;
// CUSTOM VARIABLES


// SCREEN: ui_Startup
void ui_Startup_screen_init(void);
void ui_event_Startup( lv_event_t * e);
lv_obj_t *ui_Startup;
lv_obj_t *ui_LoadingLabel;
lv_obj_t *ui_Spinner1;
// CUSTOM VARIABLES

// EVENTS
lv_obj_t *ui____initial_actions0;

// IMAGES AND IMAGE SETS

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
    #error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Startup( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_SCREEN_LOADED) {
      _ui_screen_change( &ui_Home, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Home_screen_init);
}
}

///////////////////// SCREENS ////////////////////

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Home_screen_init();
ui_Startup_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_Home);
}
