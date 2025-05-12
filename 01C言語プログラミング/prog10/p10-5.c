/* p10-5.c */

#include<stdio.h>

int h, m, s, sec;

void hms2sec();
void sec2hms();

int main(){

    sec = 12345;
    sec2hms();
    printf("sec=%d\nh=%d, m=%d, s=%d\n\n", sec, h, m, s);

    h = h+2;
    s = s-3;

    hms2sec();
    printf("h=%d, m=%d, s=%d\nsec=%d\n", h, m, s, sec);
}

void hms2sec(){
    sec = h*3600 + m*60 + s;
    printf("hms2sec内\nh=%d, m=%d, s=%d, sec=%d\n", h, m, s, sec);
    printf("---------------------------\n");
}

void sec2hms(){
    h = sec/3600;
    m = (sec%3600)/60;
    s = (sec%3600)%60;
    printf("sec2hms内\nsec=%d, h=%d, m=%d, s=%d\n", sec, h, m, s);
    printf("---------------------------\n");
}

/*
前回作ったプログラムをグローバル変数を用いて記述することで、
グローバル変数の仕様を理解することができました。
*/
