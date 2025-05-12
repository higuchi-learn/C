/* p4-6.c */

#include<stdio.h>

int main(){
    int nenrei,n;
	printf("年齢を入力＞");
	scanf("%d",&nenrei);

    if ( nenrei>=50 ){
        printf("50歳以上の世代です\n");
    }else if ( nenrei>=40 ){
        printf("40歳以上の世代です\n");
    }else if ( nenrei>=30 ){
        printf("30歳以上の世代です\n");
    }else if ( nenrei>=20 ){
        printf("20歳以上の世代です\n");
    }else{
	printf("20歳未満の世代です\n");
    }

    n = nenrei / 10;
    if(n >= 5){
	printf("50歳以上の世代です\n");
    }
    else if(n >= 2){
    printf("%d0歳以上の世代です\n", n);
    }
    else{
    printf("20歳未満の世代です\n", n);
    }

    return 0;
}
/*
プログラムを短くする工夫を考える練習を
することができました。
*/
