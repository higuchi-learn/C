/* p11-4.c */
#include<stdio.h>

int main() {
  int a=10, b=4, c=22;
  printf("a=%d, b=%d, c=%d\n", a,b,c );
  printf("each address : %p, %p, %p\n", &a, &b, &c );
  
  int *ptr;

  ptr = &a;
  (*ptr)++;
  printf("ptr = %p\n", ptr);
  printf("*ptr = %d\n", *ptr);

  ptr = &b;
  (*ptr)++;
  printf("ptr = %p\n", ptr);
  printf("*ptr = %d\n", *ptr);

  ptr = &c;
  (*ptr)++;
  printf("ptr = %p\n", ptr);
  printf("*ptr = %d\n", *ptr);

  printf("a=%d, b=%d, c=%d\n", a,b,c );

  return 0;
}
