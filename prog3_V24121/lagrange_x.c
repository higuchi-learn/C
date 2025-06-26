/***********************************************************
    lagrange.c -- Lagrange (ラグランジュ) 補間
***********************************************************/
#define N 7        /* データ点の数 */
double x[N], y[N]; /* データ */

double lagrange(double t) {
  int i, j;
  double sum, prod;

  sum = 0;
  for (i = 0; i < N; i++) {
    prod = y[i];
    for (j = 0; j < N; j++)
      if (j != i) prod *= (t - x[j]) / (x[i] - x[j]);
    sum += prod;
  }
  return sum;
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;

  printf("Enter x values: ");
  scanf("%lf %lf %lf %lf %lf %lf %lf", &x[0], &x[1], &x[2], &x[3], &x[4], &x[5], &x[6]);
  printf("Enter y values: ");
  scanf("%lf %lf %lf %lf %lf %lf %lf", &y[0], &y[1], &y[2], &y[3], &y[4], &y[5], &y[6]);

  for (i = 10; i <= 30; i++) printf("%3d %6.1f\n", i, lagrange(i));
  return 0;
}
