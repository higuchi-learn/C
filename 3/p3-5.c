/* p3-5.c */
#include<stdio.h>

int main(){
  int a=0b00001110, b, c;

  b = a<<3;
  c = b>>4;
  printf("a:%x(%d)\n", a, 0b00001110); // 0b00001110Å@Å@
  printf("b:%x\n", b); //0b01110000
  printf("c:%x\n", c); //0b00000111

  b = a*2*2*2;
  c = b/(2*2*2*2);
  printf("b:%d\n", b);
  printf("c:%d\n", c); 

  return 0;
}