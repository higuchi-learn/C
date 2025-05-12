/* p14-4.c */
#include <stdio.h>

struct _val2
{
    int x;
    int y;
};

typedef struct _val2 v2;

v2 swapv2(v2 a)
{
    v2 tmp;
    tmp.x = a.y;
    tmp.y = a.x;

    return tmp;
}

v2 swapv3(v2 *p)
{
    int tmp;
    tmp = p->y;
    p->y = p->x;
    p->x = tmp;
}

int main()
{
    v2 a = {1, 2};

    printf("1‚Â‚ß: %d\n", a.x);
    printf("2‚Â‚ß: %d\n", a.y);
    a = swapv2(a);
    printf("* 1‚Â‚ß: %d\n", a.x);
    printf("* 2‚Â‚ß: %d\n", a.y);

    swapv3(&a);
    printf("** 1‚Â‚ß: %d\n", a.x);
    printf("** 2‚Â‚ß: %d\n", a.y);

    return 0;
}
