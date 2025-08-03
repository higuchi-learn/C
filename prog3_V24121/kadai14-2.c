#include <stdio.h>

int main(void) {
#define X_MAX 10000
#define N_MAX 10

  int x, n;
  printf("Enter two integers:\n");
  printf("x=");
  scanf("%d", &x);
  printf("n=");
  scanf("%d", &n);
  if (x > X_MAX || n > N_MAX) {
    printf("Invalid input\n");
    return 0;
  }
  printf("x * 2^n = %d\n", x << n);
  printf("x * 2^n in hex = %X\n", x << n);
  return 0;
}
