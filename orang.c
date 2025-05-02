#include <stdio.h>

int main()
{
    int x, p, i;

    scanf("%d %d", &x, &p);

    do
    {
        x = x - (x * p * 0.01);
        printf("%d\n", x);
        i++;
    } while (x > 0);

    printf("%d\n", i);
    return 0;
}