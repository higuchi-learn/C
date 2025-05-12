#include<stdio.h>

int main(void){
	int x;

	x = 0b1101000010111;
	printf("x(10) = %d, x(16) = %04x\n", x, x);

	x = 0xFE;
 	printf("x(10) = %d, x(16) = %04x\n", x, x);

	return 0;
}
