/***********************************************************
    circle.c -- グラフィックス
***********************************************************/
#include "grBMP.c"

void gr_circle(int xc, int yc, int r, long color) {
  int x, y;

  x = r;
  y = 0;
  while (x >= y) {
    gr_dot(xc + x, yc + y, color);
    gr_dot(xc + x, yc - y, color);
    gr_dot(xc - x, yc + y, color);
    gr_dot(xc - x, yc - y, color);
    gr_dot(xc + y, yc + x, color);
    gr_dot(xc + y, yc - x, color);
    gr_dot(xc - y, yc + x, color);
    gr_dot(xc - y, yc - x, color);
    if ((r -= (y++ << 1) + 1) <= 0) r += --x << 1;
  }
}

#if 1 /* テスト用 */
#include <stdlib.h>
#define CIRCLE_SIZE 20

int main(void) {
  int n = 4;  // e=1 + 3
  int color_list[] = {RED, GREEN, BLUE};
  int color;
  for (int i = 0; i < n; i++) {
    color = color_list[i % 3];
    gr_circle(XMAX * (i + 1) / 5, YMAX / 2 - 1, CIRCLE_SIZE, color);
  }
  gr_BMP("V24121.bmp");
  return 0;
}
#endif
