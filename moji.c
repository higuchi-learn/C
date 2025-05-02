#include <stdio.h>
int main(void)
{
    char str[99];
    int i = 0;

    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if ('a' <= str[i] && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
        }
    }

    printf("%s", str);

    return 0;
}
