/* p12-1.c */
#include<stdio.h>

int main() {
    int a[10];
    int i;
    int* p = a;

    for (i = 0; i < 10; i++) {
        printf("p+%d:%p  &a[%d]:%p\n", i, p + i, i, &a[i]);
    }

    return 0;
}