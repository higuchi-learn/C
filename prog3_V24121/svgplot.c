/***********************************************************
    svgplot.c -- SVG�O���t�B�b�N�X
***********************************************************/
#include <stdio.h>
static double ymax;

void plot_start(int x, int y)  /* �v���b�g�J�n */
{
    printf("<svg xmlns=\"http://www.w3.org/2000/svg\" ");
    printf("version=\"1.1\" width=\"%d\" height=\"%d\">\n", x, y);
    printf("<path d=\"");
    ymax = y;
}

void plot_end(int close)  /* �v���b�g�I�� */
{
    if (close) printf("Z");
    printf("\" fill=\"none\" stroke=\"black\" />\n");
    printf("</svg>\n");
}

void move(double x, double y)  /* �y���A�b�v�ňړ� */
{
    printf("M %g %g ", x, ymax - y);
}

void move_rel(double dx, double dy)  /* ���� (���΍��W) */
{
    printf("m %g %g ", dx, -dy);
}

void draw(double x, double y)  /* �y���_�E���ňړ� */
{
    printf("L %g %g ", x, ymax - y);
}

void draw_rel(double dx, double dy)  /* ���� (���΍��W) */
{
    printf("l %g %g ", dx, -dy);
}

#if 0  /* �e�X�g */

#include <math.h>

int main(void)
{
    int i;
    double theta, x, y;

    plot_start(300, 300);  /* x, y�̍ő�l�i�����j�B�ŏ��l��0, 0�i�������j */
    for (i = 0; i < 5; i++) {
        theta = 2 * M_PI * i / 5;
        x = 150 + 140 * cos(theta);
        y = 150 + 140 * sin(theta);
        if (i == 0) {
            move(x, y);
        } else {
            draw(x, y);
        }
    }
    plot_end(1);  /* 1�Ȃ����i�o���_�ɖ߂���������j�B0�Ȃ���Ȃ� */
    return 0;
}
#endif
