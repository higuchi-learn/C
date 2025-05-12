/* p4-4.c */
#include <stdio.h>

int main() {
    int i;
    double a=0.0;

    printf("** まず 10回加算 での計算検証です **\n");
    // 0.1 を 10 回加算する。
    a += 0.1;
    printf("a = %.20f\n",a);
    a += 0.1;
    printf("a = %.20f\n",a);
    a += 0.1;
    printf("a = %.20f\n",a);
    a += 0.1;
    printf("a = %.20f\n",a);
    a += 0.1;
    printf("a = %.20f\n",a);
    a += 0.1;
    printf("a = %.20f\n",a);
    a += 0.1;
    printf("a = %.20f\n",a);
    a += 0.1;
    printf("a = %.20f\n",a);
    a += 0.1;
    printf("a = %.20f\n",a);
    a += 0.1;
    printf("a = %.20f\n",a);
    
    

    if (a == 1.0){
        printf("a は 1.0 になりました。\n");
    } else {
        printf("a は 1.0 にはなりませんでした\n");
    }

    printf("** 次は 10倍 での計算検証です **v");
    a = 0.1;
    printf("a = %.20f\n",a);
    a *= 10;

    printf("a の値は %f です。¥n", a);
    if (a == 1.0){
        printf("a は 1.0 になりました。¥n");
    } else {
        printf("a は 1.0 にはなりませんでした¥n");
    }

    return 0;
}