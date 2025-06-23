/***********************************************************
    gseidel.c -- Gauss (�K�E�X)--Seidel (�U�C�f��) �@
***********************************************************/
#include <math.h>

#include "matutil.c"

#define VERBOSE 0    /* �r���o�߂��o�͂��Ȃ��Ȃ� 0 �ɂ��� */
#define EPS 1E-9     /* ���e�덷 (1E-6 ���� 1E-9�ɕύX)*/
#define MAX_ITER 500 /* �ő�J�Ԃ��� */

int gseidel(int n, matrix a, vector x, vector b) {
  int j, i, ok, iter;
  double s;

  for (iter = 1; iter <= MAX_ITER; iter++) {
    ok = 1;
    for (i = 0; i < n; i++) {
      s = b[i];
      for (j = 0; j < i; j++) s -= a[i][j] * x[j];
      for (j = i + 1; j < n; j++) s -= a[i][j] * x[j];
      s /= a[i][i]; /* ���炩���ߑΊp������1�ɂ��Ă����Εs�v */
      if (ok && fabs(x[i] - s) > EPS * (1 + fabs(s))) ok = 0;
      x[i] = s; /* SOR�@�Ȃ�Ⴆ�� x[i] += 1.2 * (s - x[i]); */
    }
#if VERBOSE
    printf("%3d:\n", iter);
    vecprint(x, n, 7, "%11.6f");
#endif
    if (ok) return 0; /* ���� */
  }
  return 1; /* �������� */
}

int main(void) {
  int i, j, k, n;
  matrix a;
  vector x, b;

  n = 3;
  int arr[] = {2, 5, 7, 23, 4, 13, 20, 58, 8, 29, 50, 132};
  a = new_matrix(n, n);
  x = new_vector(n);
  b = new_vector(n);
  k = 0;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      a[i][j] = arr[k];
      k++;
    }
    b[i] = arr[k];
    k++;
    x[i] = 0;
  }
  if (gseidel(n, a, x, b) == 1) printf("�������܂���\n");
  printf("��(�r�����ʕ\���Ȃ�)\n");
  vecprint(x, n, 7, "%11.6f");
  return 0;
}
