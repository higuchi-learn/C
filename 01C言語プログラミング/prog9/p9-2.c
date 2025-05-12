/* p9-2.c */
#include<stdio.h>

double en( double r ){

    return r * r * 3.141592;;
}

int main(){
    double r, a;

    printf("半径 %d: 面積 %.2f\n", 4, en(4) );

    r = 12.3;
    printf("半径 %.2f: 面積 %.2f\n", r, en(r) );

    r = 9.2;
    a = en(r);
    printf("半径 %.2f: 面積 %.2f\n", r, a );

    return 0;
}

