#include <stdio.h>
int main()
{
    int number, input_data, times, time, space = 0;
    printf("‰½’i‚Å‚·‚©F");

    scanf("%d", &input_data);
    times = 1 + 2 * (input_data - 1);

    for (number = 1; number <= input_data; number++)
    {
        for (space = 0; space < number - 1; space++)
        {
            printf(" ");
        }
        for (time = 0; time < times; time++)
        {

            printf("%d", number % 10);
        }
        printf("\n");
        times = times - 2;
    }

    return 0;
}