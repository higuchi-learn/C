/* p9-5.c */
#include<stdio.h>

int hms2sec( int h, int m, int s ){
    // h 時間 m 分 s 秒 の情報から 秒数を求める
    // (参考) 「XXX から YYY」は「XXX to YYY」と訳され XXX2YYY と書くことが多い

    m += h*60;
    s += m * 60;

    return s;
}

int sec2hour( int s ){
    int h;

    h = s/3600;

    return h;
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
    printf("%d秒となる\n", sec );
    printf("%d秒は", sec );
    hour = sec2hour(sec);
    printf("%d時間となる\n", hour );
    

    return 0;
}
