/* p11-6.c */

#include<stdio.h>

void minmax(int *a, int *b){

	int tmp;

	if(*a>*b){
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
}

int main(void){

	int x=5,y=7,z=3;

	printf("x y z \n");
	minmax(&x, &y);
	printf("%d %d %d \n", x, y, z);
	minmax(&y, &z);
	printf("%d %d %d \n", x, y, z);
	minmax(&x, &y);
	printf("%d %d %d \n", x, y, z);

    	return 0;
}
