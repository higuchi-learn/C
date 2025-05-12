/* p12-2.c */
#include<stdio.h>

int main() {
    int a[10];
    int *p;
    int i;

    for (i = 0; i < 10; i++) {
        p = a+i;
        *p = i * 2;
    }

    p = a;

    for (i = 0; i < 10; i++) {
        printf("a[i] = %d, *p = %d\n", a[i], *p);
        p++;
    }

    return 0;
}
