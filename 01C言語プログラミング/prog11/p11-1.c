/* p11-1.c */
#include<stdio.h>

int main(){
  int x=2,y=1,z=0;

  printf("data    : %d\n", x);
  printf("address : %p\n", &x);
  printf("address : %p\n", &y);
  printf("address : %p\n", &z);
  return 0;
}
