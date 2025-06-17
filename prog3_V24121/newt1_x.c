/***********************************************************
    newt1.c -- Newton (ニュートン) 法
***********************************************************/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
double d;

double f(double x) /* $f(x) = 0$ を解く関数 $f(x)$ */
{
  return x * x * x * x + d;
}

double f_prime(double x) /* $f(x)$ の導関数 */
{
  return 3 * x * x * x;
}

double newton(double x) /* 初期値 $x$ を与えて $f(x) = 0$ の解を返す */
{
  double fx, fp, xprev, xprev2 = x;

  do {
    fx = f(x);
    printf("  x = % -24.16g  f(x) = % -.2g\n", x, fx);
    if ((fp = f_prime(x)) == 0) fp = 1; /* 強引にずらす */
    xprev2 = xprev;
    xprev = x;
    x -= fx / fp;
  } while (x != xprev && x != xprev2); /* 振動の回避 */
  return (x + xprev) / 2; /* 振動した場合は平均を返す */
}

int main(void) {
  double a, x;

  printf("ax^4+d=0を解きます。\na d ? ");
  scanf("%lf%lf", &a, &d);
  d /= a;
  x = newton(0); /* 適当な点から */
  printf("x = %g\n", x);
  return 0;
}
