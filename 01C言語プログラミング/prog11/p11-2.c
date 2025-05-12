/* p11-2.c */
#include<stdio.h>

int main() {
    int a;
    int *ptr=&a;
  
    a = 3;

    printf("a address = %p\n", &a);
    printf("ptr address = %p\n", ptr);
  
    printf("*ptr = %d\n", *ptr);
    *ptr = 10;
    printf("*ptr = %d\n", *ptr);
    
    printf("a = %d\n", a);
    a = 5;
    printf("a = %d\n", a);
  
    return 0;
}