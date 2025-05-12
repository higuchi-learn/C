/* p7-1.c */
#include<stdio.h>
int main(){
	int i;
	int a1[4];
	int a2[4] = { 2, 9, 4, 7 };
	int a3[4] = { 8, 1, 3, 5 };

	a2[1] = 5;
	printf("a2[1] = %d\n", a2[1]);
	printf("a3[2] = %d\n", a2[2]);
	a1[2] = a2[2];printf("a1[2] = %d\n", a1[2]);
	for( i=0; i<3; i++){
		a1[i] = 1;
	}	
	for( i=0; i<3; i++){
		printf("%d\n",a1[0]);
	}

	a2[4] = 100;
	printf("a2[4] = %d\n", a2[4]);
	for( i=0; i<4; i++){
		printf("a1[%d] = %d\n", i, a1[i]);
	}
	for( i=0; i<4; i++){
		printf("a2[%d] = %d\n", i, a2[i]);
	}

	for( i=0; i<4; i++){
		printf("a3[%d] = %d\n", i, a3[i]);
	}
	printf("\na2[4]が存在しないので、a1[0]を参照している。 ***\n");

	return 0;
}
