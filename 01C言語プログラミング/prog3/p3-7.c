/* p3-7.c */
#include<stdio.h>

int main(){
    int a=-8;
    double q=12.33;

    printf("%ld, %ld\n", sizeof(int), sizeof(double));

    printf("%d, %d\n", a, -8);
    printf("%ld, %ld\n", sizeof(a), sizeof(-8) );

    printf("%f, %f\n", q, 12.33);
    printf("%ld, %ld\n", sizeof(q), sizeof(12.33) );

    return 0;
}
