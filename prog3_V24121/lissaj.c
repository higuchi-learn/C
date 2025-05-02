/***********************************************************
    lissaj.c -- Lissajous (���T�W���[) �}�`
***********************************************************/
#include "svgplot.c"  /* �܂��� epsplot.c */
#include <math.h>  /* sin, cos */
#define PI 3.141592653589793

int main(void)
{
    int i;
    double t;

    plot_start(420, 420);  /* ���W�w�� */
    move(210 + 200 * cos(0), 210 + 200 * sin(0));  /* �����y���ʒu */
    for (i = 1; i <= 360; i++) {
        t = (PI / 180) * i;
        draw(210 + 200 * cos(3 * t), 210 + 200 * sin(5 * t));  /* �y���ړ� */
    }
    plot_end(0);
    return 0;
}
