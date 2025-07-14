/***********************************************************
    orddif.c -- 常微分方程式
***********************************************************/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double F(double x, double y) /* $F(x, y)$ */
{
  return y - 12 * x + 3;
}

double Fx(double x, double y) /* $F_{x}(x, y)$ */
{
  return -12 + F(x, y);
}

double Fxx(double x, double y) /* $F_{xx}(x, y)$ */
{
  return 0;
}

double euler(int n, int nprint, double x0, double y0, double xn) /* Euler法 */
{
  int i;
  double x, y, h;

  x = x0;
  y = y0;
  h = (xn - x0) / n;
  for (i = 1; i <= n; i++) {
    y += F(x, y) * h;
    x = x0 + i * h;
    if (i % nprint == 0) printf("% -14g % -14g\n", x, y);
  }
  return y;
}

double tayl3(int n, int nprint, double x0, double y0, double xn) /* 3次Taylor級数 */
{
  int i;
  double x, y, h;

  x = x0;
  y = y0;
  h = (xn - x0) / n;
  for (i = 1; i <= n; i++) {
    y += h * (F(x, y) + (h / 2) * (Fx(x, y) + (h / 3) * Fxx(x, y)));
    x = x0 + i * h;
    if (i % nprint == 0) printf("% -14g % -14g\n", x, y);
  }
  return y;
}

double runge4(int n, int nprint, double x0, double y0, double xn) /* 4次Runge-Kutta法 */
{
  int i;
  double x, y, h, h2, f1, f2, f3, f4;

  x = x0;
  y = y0;
  h = (xn - x0) / n;
  h2 = h / 2;
  for (i = 1; i <= n; i++) {
    f1 = h * F(x, y);
    f2 = h * F(x + h2, y + f1 / 2);
    f3 = h * F(x + h2, y + f2 / 2);
    f4 = h * F(x + h, y + f3);
    x = x0 + i * h;
    y += (f1 + 2 * f2 + 2 * f3 + f4) / 6;
    if (i % nprint == 0) printf("% -14g % -14g\n", x, y);
  }
  return y;
}

int main(void) {
  int n = 16, i;

  printf("\nEuler法:          n = %d\n", n);
  (void)euler(n, n / 4, 0, 1, 1);
  printf("\n3次Euler法:       n = %d\n", n);
  (void)tayl3(n, n / 4, 0, 1, 1);
  printf("\n4次Runge-Kutta法: n = %d\n", n);
  (void)runge4(n, n / 4, 0, 1, 1);
  printf("\n正解\n");
  for (i = 1; i <= 4; i++)
    printf("% -14g % -14g\n", i / 4.0, 12 * (i / 4.0) + 9 - 8 * exp(i / 4.0));
  return 0;
}
