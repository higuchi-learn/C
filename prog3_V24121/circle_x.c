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
#define CIRCLE_SIZE 80
int main(void) {
  gr_circle(XMAX / 2 - 1, YMAX / 2 - 1, CIRCLE_SIZE, WHITE);
  gr_BMP("test.bmp");
  return 0;
}
#endif
