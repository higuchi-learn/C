/* p11-3.c */
#include<stdio.h>

int main() {
  int dt1=0, *p1;
  double dt2=3.14, *p2;

  printf("dt1 = %d\n",dt1);
  printf("dt2 = %.2f\n",dt2);

  p1 = &dt1;
  p2 = &dt2;

  printf("Set each value via pointer\n");
  *p1 = 1;
  *p2 = 1;

  printf("dt1=%d, dt2=%.2f\n", dt1,dt2);

  *p1 = 2.71828;
  *p2 = 2.71828;

  printf("dt1=%d, dt2=%.2f\n", dt1,dt2);

  p2 = &dt1;
  p1 = &dt2;
  printf("dt1=%d, dt2=%.2f\n", dt1,dt2);

  *p1 = 10;
  *p2 = 10;
  printf("dt1=%d, dt2=%.2f\n", dt1,dt2);

  return 0;
}
