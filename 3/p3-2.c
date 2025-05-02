/* p3-2.c */
#include<stdio.h>

int main(){
    double value,r;
    value = 4.2;
    
    printf("倍率を入力\n");
    scanf("%lf",&r);

    printf("最初の値 = %.2f\n", value);

    value *= r;
    printf("%.2f倍の数 = %.2f\n", r, value);

    printf("6割に減らした数 = %.2f\n", value*.6);

    return 0;
}