/* p3-2.c */
#include<stdio.h>

int main(){
    double value, r;
    value = 4.2;

    printf("最初の値 = %.2f\n", value);
    printf("倍率を入力＞");
    scanf("%lf", &r);


    value *= r;
    printf("%.1f倍の値 = %.2f\n", r, value);

    printf("6割に減らした値 = %.2f\n", value*.6);

    return 0;
}
