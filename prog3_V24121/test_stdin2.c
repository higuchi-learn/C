#include <stdio.h>
int main(void)
{
    int x1, x2;

    printf("�o��\n");
    fprintf(stdout, "�W���o��\n");
    fprintf(stderr, "�W���G���[�o��\n");


    fprintf(stderr, "x1=");
    scanf("%d", &x1);
    fprintf(stderr, "x2=");
    fscanf(stdin, "%d", &x2);
    printf("x1, x2 = %d, %d\n", x1, x2);
    fprintf(stderr, "stderr:x1, x2 = %d, %d\n", x1, x2);

    return 0;
}

