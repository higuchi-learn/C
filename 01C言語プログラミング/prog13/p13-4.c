/*  p13-4.c  */
#include<stdio.h>

struct hms {
    int hour, min, sec;
};

int total_sec(struct hms tm) {
    tm.min += tm.hour * 60;
    tm.sec += tm.min * 60;

    return tm.sec;
}

struct hms addXsec(struct hms tm, int x) {
    tm.sec = total_sec(tm) + x;
    tm.hour = tm.sec / 3600;
    tm.min = (tm.sec % 3600) / 60;
    tm.sec = (tm.sec % 3600) % 60;

    struct hms data = { tm.hour, tm.min, tm.sec };
 
    return data;
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
    game = addXsec(game, addtime);
    printhms(game);

    printhms(dinner);
    printf(" -> %d sec\n", total_sec(dinner));

    addtime = -432;
    dinner = addXsec(dinner, addtime);
    printhms(dinner);

    return 0;
}
