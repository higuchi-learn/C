/*  p13-5.c  */
#include<stdio.h>

struct hms {
    int hour, min, sec;
};

int total_sec(struct hms tm) {
    tm.min += tm.hour * 60;
    tm.sec += tm.min * 60;

    return tm.sec;
}

void addXsec(struct hms *p, int x) {
    p->sec = total_sec(*p) + x;
    p->hour = (p->sec / 3600);
    p->min = (p->sec % 3600) / 60;
    p->sec = (p->sec % 3600) % 60;

    return ;
}

void printhms(struct hms tm) {
    printf("%02d:%02d:%02d\n", tm.hour, tm.min, tm.sec);

    return;
}

int main() {

    struct hms  game = { 3, 32, 10 };
    struct hms  dinner = { 1, 2, 33 };
    int addtime;

    printhms(game);
    printf(" -> %d sec\n", total_sec(game));

    addtime = 520;
    addXsec(&game, addtime);
    printhms(game);

    printhms(dinner);
    printf(" -> %d sec\n", total_sec(dinner));

    addtime = -432;
    addXsec(&dinner, addtime);
    printhms(dinner);

    return 0;
}
