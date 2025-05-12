/*  p10-3.c  */
#include<stdio.h>

int zei(int price);
int zeikomi(int price);

int main(){
    int notebook = 120;
    int pen = 220;
    int eraser = 82;

    printf("ノートの税別価格 = %d\n", notebook);
    printf("ノートの税金 = %d\n", zei(notebook));
    printf("ノートの税込価格 = %d\n", zeikomi(notebook));

    printf("ペンの税込価格 = %d\n", zeikomi(pen));
    printf("消しゴムの税込価格 = %d\n", zeikomi(eraser));

    return 0;
}



int zei(int price){
    double tax_ratio = 0.10;

    // 税金は切り捨て価格
    return (int)(price*tax_ratio);
}

int zeikomi(int price){
    return price + zei(price);
}

