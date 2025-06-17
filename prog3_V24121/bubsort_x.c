/***********************************************************
    bubsort.c -- バブルソート
***********************************************************/
#define N 10

typedef int keytype;
void bubblesort(int n, keytype a[]) {
  int i, j, k;
  keytype x;

  k = n - 1;
  while (k >= 0) {
    j = -1;
    for (i = 1; i <= k; i++)
      if (a[i - 1] > a[i]) {
        j = i - 1;
        x = a[j];
        a[j] = a[i];
        a[i] = x;
      }
    k = j;
    printf("%10d", a[0]);
    for (i = 1; i < N; i++) printf(" %2d", a[i]);
    printf("\n");
  }
}

void descending(int n, keytype a[]) {
  int i, j, k;
  keytype x;

  k = n - 1;
  while (k >= 0) {
    j = -1;
    for (i = 1; i <= k; i++)
      if (a[i - 1] < a[i]) {
        j = i - 1;
        x = a[j];
        a[j] = a[i];
        a[i] = x;
      }
    k = j;
  }
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;
  // V24121
  static keytype a[N] = {2, 4, 1, 2, 1, 9, 5, 3, 7, 1};

  
  printf("Before:");
  for (i = 0; i < N; i++) printf(" %2d", a[i]);
  printf("\n");
  bubblesort(N, a);
  printf("After: ");
  for (i = 0; i < N; i++) printf(" %2d", a[i]);
  printf("\n\n");
  return 0;
}
