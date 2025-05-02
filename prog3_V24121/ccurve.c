/***********************************************************
    ccurve.c -- Cã»ê¸
***********************************************************/
#include "svgplot.c"          /* Ç‹ÇΩÇÕ epsplot.c */

void c(int i, double dx, double dy)
{
    if (i == 0) draw_rel(dx, dy);
    else {
        c(i - 1, (dx + dy) / 2, (dy - dx) / 2);
        c(i - 1, (dx - dy) / 2, (dy + dx) / 2);
    }
}

int main(void)
{
    int order = 10;  /* à êî */

    plot_start(400, 250);
    move(100, 200);  c(order, 200, 0);
    plot_end(0);
    return 0;
}
