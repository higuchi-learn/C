#include <stdio.h>

void calc(int *x);

int main()
{
    int vals1[] = {1200, 210, 190, 40, 340, -1};
    int vals2[] = {500, 120, 240, -1};

    calc(vals1);
    printf("Žc‹à : %d\n", vals1[0]);

    calc(vals2);
    printf("Žc‹à : %d\n", vals2[0]);
}

void calc(int *a)
{
    int i = 0;
    do
    {
        i++;
        a[0] = a[0] - a[i];
    } while (a[i + 1] != -1);
}