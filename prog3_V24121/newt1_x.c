/***********************************************************
    newt1.c -- Newton (�j���[�g��) �@
***********************************************************/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
double d;

double f(double x) /* $f(x) = 0$ �������֐� $f(x)$ */
{
  return x * x * x * x + d;
}

double f_prime(double x) /* $f(x)$ �̓��֐� */
{
  return 3 * x * x * x;
}

double newton(double x) /* �����l $x$ ��^���� $f(x) = 0$ �̉���Ԃ� */
{
  double fx, fp, xprev, xprev2 = x;

  do {
    fx = f(x);
    printf("  x = % -24.16g  f(x) = % -.2g\n", x, fx);
    if ((fp = f_prime(x)) == 0) fp = 1; /* �����ɂ��炷 */
    xprev2 = xprev;
    xprev = x;
    x -= fx / fp;
  } while (x != xprev && x != xprev2); /* �U���̉�� */
  return (x + xprev) / 2; /* �U�������ꍇ�͕��ς�Ԃ� */
}

int main(void) {
  double a, x;

  printf("ax^4+d=0�������܂��B\na d ? ");
  scanf("%lf%lf", &a, &d);
  d /= a;
  x = newton(0); /* �K���ȓ_���� */
  printf("x = %g\n", x);
  return 0;
}
