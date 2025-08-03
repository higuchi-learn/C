#include <stdio.h>

int main(void) {
  int a, b, c, d, e, sum = 0, min, max;
  printf("Enter five integers:\n");
  printf("a b c d e : ");
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

  int student_number[] = {a, b, c, d, e};

  for (int i = 0; i < 5; i++) {
    sum = sum + student_number[i];
  }

  min = student_number[0];
  max = student_number[0];

  for (int i = 1; i < 5; i++) {
    if (student_number[i] < min) {
      min = student_number[i];
    }
    if (student_number[i] > max) {
      max = student_number[i];
    }
  }

  printf("ave = %.6f\n", (float)sum / 5);
  printf("min = %d\n", min);
  printf("max = %d\n", max);

  return 0;
}
