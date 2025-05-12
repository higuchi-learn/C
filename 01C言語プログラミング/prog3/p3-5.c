/* p3-5.c */
#include<stdio.h>

int main(){
  int a=0b00001110, b, c, bb, cc;

  b = a<<3;
  c = b>>4;
	bb = a*(2*2*2);
	cc = a/(2*2*2*2);
  printf("a:%d(%x)\n", a, 0b00001110); // 0b00001110　
  printf("b:%d\n", b); //0b01001010
  printf("bb:%d\n", bb);
  printf("c:%d\n", c); //0b00000111
  printf("cc:%d\n", cc);

  return 0;
}