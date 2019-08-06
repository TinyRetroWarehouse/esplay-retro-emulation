#ifndef __ESPLAY_UI__
#define __ESPLAY_UI__

#include <string.h>
#include <stdint.h>
#include "ugui.h"

void ui_clear_screen();
void ui_flush();
void ui_init();
void ui_deinit();
void ui_display_progress(int x, int y, int width, int height, int percent, UG_COLOR frameColor, UG_COLOR infillColor, UG_COLOR progressColor);
char* ui_file_chooser(const char *path, const char *filter, int currentItem, char *title);

#endif /*__ESPLAY_UI__*/