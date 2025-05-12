#include<stdio.h>

int main(){

	int x;
	char a;

	x = 0b1101000010111;
	printf("x(10) = %d, x(16) = %04x\n", x, x);

	x = 0xFE;
 	printf("x(10) = %d, x(16) = %04x\n", x, x);

	a = 0x2B;
	printf("数値:%d,文字:%c\n", a, a);

	a = 98;
	printf("数値:%d,文字:%c\n", a, a);

	a = 49;
	printf("数値:%d,文字:%c\n", a, a);

	return 0;
}