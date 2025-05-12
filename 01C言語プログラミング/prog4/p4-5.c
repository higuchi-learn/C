/* p4-5.c */
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, c;

    printf("２つの数を入力してください\n");
    printf("1つめ : "); scanf("%d", &a);
    printf("2つめ : "); scanf("%d", &b);
    if(b == 0){
	printf("０割りは禁止です。\n");
	exit(0);
    }

    printf("¥n計算方法を選択してください\n");
    printf("1)加算 2)減算 3)乗算 4)除算:");
    scanf("%d", &c);

    switch(c){
    case 1:
	printf("%d + %d です。¥n", a, b);
        printf("計算結果は%dです。\n", a+b);
        break;
    case 2:
        printf("%d - %d です。¥n", a, b);
        printf("計算結果は%dです。¥n", a-b);
	break;
    case 3:
        printf("%d × %d です。¥n", a, b);
        printf("計算結果は%dです。¥n", a*b);
	break;
    case 4:
        printf("%d ÷ %d です。\n", a, b);
        printf("計算結果は %d あまり %d です。\n", a/b, a%b);
	break;
    deault:
        printf("不適切な計算方法の指示です。¥n");
    }

    return 0;
}
