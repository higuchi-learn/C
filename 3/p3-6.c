/* p3-6.c */
#include<stdio.h>

int main(){
  int a=10, b=4;
  double c, d, e;

  c=a/b;
  printf("c = a/b = %.2f\n", c);
  printf("a/3.0 = %.2f\n", a/3.0);

  c=10.0/b;
  printf("c = 10.0/b = %.2f\n", c);

  d=a/b*b;
  printf("d = a/b*b = %.2f\n", d);

  e=a/b*(double)b;
  printf("e = a/(double)b*b = %.2f\n", e);

  return 0;
}