/* p9-6.c */
#include<stdio.h>

int hms2sec( int h, int m, int s ){
    m += h*60;
    s += m * 60;

    return s;
}

int sec2hour( int s ){
    int h;

    h = s/3600;

    return h;
}

int sec2min( int s ){
    int ms,m;

    ms = s%3600;
    m = ms/60;

    return m;
}

int sec2sec( int s ){
    int ms, ss;

    ms = s%3600;
    ss = ms%60;

    return ss;
}

int main(){
    int hour,min,sec;  

    printf("時間 : ");
    scanf("%d", &hour);
    printf("分 : ");
    scanf("%d", &min);
    printf("秒 : ");
    scanf("%d", &sec);

    printf("%d時間 %d分 %d秒 は", hour,min,sec );
    sec = hms2sec(hour,min,sec);
    printf("%d 秒となる。\n", sec );

    printf("%d秒 は ", sec );
    hour = sec2hour(sec);
    min = sec2min(sec);
    sec = sec2sec(sec);
    printf("%d時間%d分%d秒となる。\n", hour, min, sec);

    return 0;
}
/*secを何度も違う関数が呼び出して、いくつかの異なる値を求めることで、
main関数を見やすくすることができました。*/
