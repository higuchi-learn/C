/* p14-2.c */
#include <stdio.h>

int main()
{
    int x;
    int *px = &x;

    x = 3;
    printf("x = %d\n", x);

    *px = 5;
    printf("x = %d\n", x);

    x = 1;
    printf("x= %d\n", *px);

    return 0;
}
