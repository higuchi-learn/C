/***********************************************************
    isbn13.c -- 13Œ…ISBN”Ô†
***********************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *isbn = "9784774196909";
    int i, s = 0, w = 1;

    for (i = strlen(isbn) - 1; i >= 0; i--) {
        s += w * (isbn[i] - '0');  w = 4 - w;
    }
    if (s % 10 == 0) puts("Valid");  /* —LŒø‚È”Ô† */
    else             puts("Wrong");  /* –³Œø‚È”Ô† */
    return 0;
}
