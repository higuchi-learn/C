/* p4-1.c */
#include<stdio.h>

int main() {
    int a;

	printf("a の値を入力＞");
	scanf("%d",&a);

    printf("Program start!\n");
    printf("Check val a = %d\n", a);
    if (a-1){
        printf(">> This process is executed. <<\n");
	a = ++a;
	printf("Check val a = %d\n", a);
    }

    printf("Program end!\n");
	printf("Check val a = %d\n", a);

    return 0;
}
