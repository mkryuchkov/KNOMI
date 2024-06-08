// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: Knomi2

#include "../ui.h"

void ui_ScreenPrinting_screen_init(void)
{
    ui_ScreenPrinting = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenPrinting, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenPrinting, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenPrinting, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label_printing_progress = lv_label_create(ui_ScreenPrinting);
    lv_obj_set_width(ui_label_printing_progress, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_printing_progress, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_printing_progress, 0);
    lv_obj_set_y(ui_label_printing_progress, -24 - 4);
    lv_obj_set_align(ui_label_printing_progress, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_printing_progress, "--%");
    lv_obj_set_style_text_color(ui_label_printing_progress, lv_color_hex(0xFFD164), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_label_printing_progress, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_label_printing_progress, &ui_font_InterSemiBold48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_printing_progress = lv_arc_create(ui_ScreenPrinting);
    lv_obj_set_width(ui_arc_printing_progress, 212);
    lv_obj_set_height(ui_arc_printing_progress, 212);
    lv_obj_set_align(ui_arc_printing_progress, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_printing_progress,
                      LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_arc_set_value(ui_arc_printing_progress, 1);
    lv_arc_set_bg_angles(ui_arc_printing_progress, 0, 360);
    lv_arc_set_rotation(ui_arc_printing_progress, 270);
    lv_obj_set_style_arc_color(ui_arc_printing_progress, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_printing_progress, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_arc_printing_progress, lv_color_hex(0xC02F30), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_printing_progress, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_printing_progress, 20, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_arc_printing_progress, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_printing_progress, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_label_time_left = lv_label_create(ui_ScreenPrinting);
    lv_obj_set_width(ui_label_time_left, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_time_left, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_x(ui_label_time_left, 0);
    lv_obj_set_y(ui_label_time_left, 16 + 12);
    lv_obj_set_align(ui_label_time_left, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_time_left, "--:--");  // d:hh:mm
    lv_obj_set_style_text_font(ui_label_time_left, &ui_font_InterSeimiBold32, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_label_time_left, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_bg_1 = lv_arc_create(ui_ScreenPrinting);
    lv_obj_set_width(ui_arc_bg_1, 240);
    lv_obj_set_height(ui_arc_bg_1, 240);
    lv_obj_set_align(ui_arc_bg_1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_bg_1, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_arc_set_value(ui_arc_bg_1, 100);
    lv_arc_set_bg_angles(ui_arc_bg_1, 0, 360);
    lv_obj_set_style_arc_color(ui_arc_bg_1, lv_color_hex(0xC02F30), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_bg_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_bg_1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_arc_bg_1, lv_color_hex(0xC02F30), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_bg_1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_bg_1, 2, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_arc_bg_1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_bg_1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_arc_bg_2_1 = lv_arc_create(ui_ScreenPrinting);
    lv_obj_set_width(ui_arc_bg_2_1, 230);
    lv_obj_set_height(ui_arc_bg_2_1, 230);
    lv_obj_set_align(ui_arc_bg_2_1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_bg_2_1, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_arc_set_value(ui_arc_bg_2_1, 100);
    lv_arc_set_bg_angles(ui_arc_bg_2_1, 272, 42);
    lv_obj_set_style_arc_color(ui_arc_bg_2_1, lv_color_hex(0xC02F30), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_bg_2_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_bg_2_1, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_bg_2_1, false, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_arc_bg_2_1, lv_color_hex(0xC02F30), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_bg_2_1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_bg_2_1, 4, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_bg_2_1, false, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_arc_bg_2_1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_bg_2_1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_arc_bg_2_2 = lv_arc_create(ui_ScreenPrinting);
    lv_obj_set_width(ui_arc_bg_2_2, 230);
    lv_obj_set_height(ui_arc_bg_2_2, 230);
    lv_obj_set_align(ui_arc_bg_2_2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_bg_2_2, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_arc_set_value(ui_arc_bg_2_2, 100);
    lv_arc_set_bg_angles(ui_arc_bg_2_2, 47, 134);
    lv_obj_set_style_arc_color(ui_arc_bg_2_2, lv_color_hex(0xC02F30), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_bg_2_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_bg_2_2, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_bg_2_2, false, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_arc_bg_2_2, lv_color_hex(0xC02F30), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_bg_2_2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_bg_2_2, 4, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_bg_2_2, false, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_arc_bg_2_2, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_bg_2_2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_arc_bg_2_3 = lv_arc_create(ui_ScreenPrinting);
    lv_obj_set_width(ui_arc_bg_2_3, 230);
    lv_obj_set_height(ui_arc_bg_2_3, 230);
    lv_obj_set_align(ui_arc_bg_2_3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_bg_2_3, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_arc_set_value(ui_arc_bg_2_3, 100);
    lv_arc_set_bg_angles(ui_arc_bg_2_3, 138, 268);
    lv_obj_set_style_arc_color(ui_arc_bg_2_3, lv_color_hex(0xC02F30), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_bg_2_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_bg_2_3, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_bg_2_3, false, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_arc_bg_2_3, lv_color_hex(0xC02F30), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_bg_2_3, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_arc_bg_2_3, 4, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_bg_2_3, false, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_arc_bg_2_3, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_bg_2_3, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ScreenPrinting, ui_event_ScreenPrinting, LV_EVENT_ALL, NULL);

}
