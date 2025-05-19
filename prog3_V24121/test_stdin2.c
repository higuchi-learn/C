#include <stdio.h>
int main(void)
{
    int x1, x2;

    printf("出力\n");
    fprintf(stdout, "標準出力\n");
    fprintf(stderr, "標準エラー出力\n");


    fprintf(stderr, "x1=");
    scanf("%d", &x1);
    fprintf(stderr, "x2=");
    fscanf(stdin, "%d", &x2);
    printf("x1, x2 = %d, %d\n", x1, x2);
    fprintf(stderr, "stderr:x1, x2 = %d, %d\n", x1, x2);

    return 0;
}

