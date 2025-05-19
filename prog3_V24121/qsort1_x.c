/***********************************************************
    qsort1.c -- クイックソート
***********************************************************/
typedef int keytype;

void quicksort(keytype a[], int first, int last) {
  int i, j;
  keytype x, t;

  x = a[(first + last) / 2];
  i = first;
  j = last;
  for (;;) {
    while (a[i] < x) i++;
    while (x < a[j]) j--;
    if (i >= j) break;
    t = a[i];
    a[i] = a[j];
    a[j] = t;
    i++;
    j--;
  }
  if (first < i - 1) quicksort(a, first, i - 1);
  if (j + 1 < last) quicksort(a, j + 1, last);
}

#include <stdio.h>
#include <stdlib.h>

#define N 10
int a[N] = {8, 1, 3, 0, 5, 6, 9, 4, 7, 2};

int main(void) {
  int i;

  printf("Before:");
  for (i = 0; i < N; i++) {
    printf(" %2d", a[i]);
  }
  printf("\n");
  quicksort(a, 0, N - 1);
  printf("After: ");
  for (i = 0; i < N; i++) printf(" %2d", a[i]);
  printf("\n");
  return 0;
}
