/***********************************************************
    gauss.c -- Gauss (ガウス) 法
***********************************************************/
#include "matutil.c"

void gauss(int n, matrix a) {
  int i, j, k;
  double t;

  for (k = 0; k < n - 1; k++) {
    for (i = k + 1; i < n; i++) {
      t = a[i][k] / a[k][k];
      for (j = k + 1; j <= n; j++) a[i][j] -= t * a[k][j];
    }
  }
  for (i = n - 1; i >= 0; i--) {
    t = a[i][n];
    for (j = i + 1; j < n; j++) t -= a[i][j] * a[j][n];
    a[i][n] = t / a[i][i];
  }
}

#include <limits.h>

int main(void) {
  int i, j, k, n;
  matrix a, b;
  double s;

  n = 3;
  int arr[] = {2, 5, 7, 4, 13, 20, 8, 29, 50, 23, 58, 132};
  a = new_matrix(n, n + 1);
  b = new_matrix(n, n + 1);
  k = 0;
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++) {
      a[i][j] = b[i][j] = arr[k];
      k++;
    }
  for (i = 0; i < n; i++) {
    a[i][n] = b[i][n] = arr[k];
    k++;
  }
  printf("係数行列 (右辺も含む)\n");
  matprint(a, n + 1, 10, "%8.3f");
  gauss(n, a);
  printf("解と, 解を代入したときの両辺の差\n");
  for (i = 0; i < n; i++) {
    s = b[i][n];
    for (j = 0; j < n; j++) s -= b[i][j] * a[j][n];
    printf("%4d: %12.7f %12.7f\n", i, a[i][n], s);
  }
  return 0;
}
