/* p12-3.c */
#include<stdio.h>

int main() {
    int a[5], i;
    int *p = a;

    for (i = 0; i < 5; i++) {
        a[i] = i * i;
        printf("i=%d\n", i);
        printf(" a[i] = %d\n", a[i]);
        printf(" *(a+i) = %d\n", *(a + i));
        printf("p[i] = %d\n", *(p + i));
        printf("*(p+i) = %d\n",*(p + i));
        printf("--------------\n");
    }

    while (p < a + 5)
    {
        printf("a[%d] = %d\n", -(a - p), *p);
        p++;
    }

    printf("a[5]=%d\n", a[5]);
    printf("*p=%d\n", *p);

    return 0;
}
