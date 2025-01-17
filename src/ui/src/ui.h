// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: TRGB_ESP32S3

#ifndef _TRGB_ESP32S3_UI_H
#define _TRGB_ESP32S3_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"

void Navigation_Animation(lv_obj_t * TargetObject, int delay);
void FadeOutRecordBT_Animation(lv_obj_t * TargetObject, int delay);
void ArcAnimated_Animation(lv_obj_t * TargetObject, int delay);
void RollingEmo_Animation(lv_obj_t * TargetObject, int delay);
// SCREEN: ui_Splash_Screen
void ui_Splash_Screen_screen_init(void);
void ui_event_Splash_Screen(lv_event_t * e);
extern lv_obj_t * ui_Splash_Screen;
void ui_event_Image1(lv_event_t * e);
extern lv_obj_t * ui_Image1;
// SCREEN: ui_Welcome_Screen
void ui_Welcome_Screen_screen_init(void);
extern lv_obj_t * ui_Welcome_Screen;
extern lv_obj_t * ui_Image2;
void ui_event_NextBT(lv_event_t * e);
extern lv_obj_t * ui_NextBT;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_Description;
// SCREEN: ui_SettingScreen
void ui_SettingScreen_screen_init(void);
extern lv_obj_t * ui_SettingScreen;
extern lv_obj_t * ui_Panel1;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_SensitivityValue;
void ui_event_SensitivitySlider(lv_event_t * e);
extern lv_obj_t * ui_SensitivitySlider;
extern lv_obj_t * ui_SensitivityTxt;
extern lv_obj_t * ui_MicrophoneSettings;
extern lv_obj_t * ui_GainTxt;
void ui_event_GainSlider(lv_event_t * e);
extern lv_obj_t * ui_GainSlider;
extern lv_obj_t * ui_GainValue;
extern lv_obj_t * ui_NoiseCancelling;
void ui_event_NextBT1(lv_event_t * e);
extern lv_obj_t * ui_NextBT1;
extern lv_obj_t * ui_Label2;
void ui_event_SwitchNoise(lv_event_t * e);
extern lv_obj_t * ui_SwitchNoise;
// SCREEN: ui_Loading_Screen
void ui_Loading_Screen_screen_init(void);
void ui_event_Loading_Screen(lv_event_t * e);
extern lv_obj_t * ui_Loading_Screen;
void ui_event_Spinner1(lv_event_t * e);
extern lv_obj_t * ui_Spinner1;
extern lv_obj_t * ui_Label7;
// SCREEN: ui_Home_Screen
void ui_Home_Screen_screen_init(void);
extern lv_obj_t * ui_Home_Screen;
extern lv_obj_t * ui_Image3;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui_Label5;
void ui_event_RecordBT(lv_event_t * e);
extern lv_obj_t * ui_RecordBT;
extern lv_obj_t * ui_Label6;
// SCREEN: ui_Navigation_Screen
void ui_Navigation_Screen_screen_init(void);
void ui_event_Navigation_Screen(lv_event_t * e);
extern lv_obj_t * ui_Navigation_Screen;
extern lv_obj_t * ui_Navigator;
extern lv_obj_t * ui_ArcDesign;
extern lv_obj_t * ui_Label8;
extern lv_obj_t * ui____initial_actions0;


LV_IMG_DECLARE(ui_img_logo_png);    // assets/Logo.png
LV_IMG_DECLARE(ui_img_navigation_png);    // assets/navigation.png






void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
