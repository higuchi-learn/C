/* p14-1.c */
#include <stdio.h>
int inputnum(char a, int b);
int power(int x, int y);

int main()
{
    int x, y, val;
    x = inputnum('x', 9);
    y = inputnum('y', 5);

    val = power(x, y);

    printf("%d^%d = %d\n", x, y, val);

    return 0;
}

int inputnum(char a, int b)
{
    int num;
    printf("%c の整数を入力してください(1-%d)\n", a, b);
    scanf("%d", &num);
    if (num > b)
    {
        printf("範囲外です。再入力してください。\n");
        inputnum(a, b);
    }

    return num;
}

int power(int x, int y)
{
    int i, val = 1;
    for (i = 0; i < y; i++)
    {
        val = val * x;
    }

    return val;
}