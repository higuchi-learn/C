/* p4-2.c */
#include<stdio.h>

int main() {
    int a;

   	printf("a の値を入力＞");
	scanf("%d",&a);

	


	printf("Program start\n");
	if (a == 9){
        	printf("1.OK\n");
	}

	if (a > 3){
        	printf("2.OK\n");
	}

	if (a < 6){
		printf("3.OK\n");
	}

	if (a % 3 == 0){
		printf("4.OK\n");
	}

	if (a % 2 == 0){
		printf("5.OK\n");
   	}else{
		printf("5.NG\n");
	}
    printf("Program end\n");

    return 0;
}
