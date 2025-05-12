/* p4-6.c */ 
#include<stdio.h>

int main(){
    // 変数の準備nenrei, n
    int nenrei,n;
    scanf("%d",&nenrei);

   
    //4-3と同じ処理
    if ( nenrei>=50 ){
        printf("50歳以上の世代です\n");
    }
    else if( nenrei>40 ){
       printf("40歳以上の世代です\n");
    }
    else if( nenrei>=30 ){
       printf("30歳以上の世代です\n");
    }
    else if( nenrei>=20 ){
       printf("20歳以上の世代です\n");
    }
    else {
       printf("20歳未満の世代です\n");
    }

    // この下の処理が、上の処理の結果とおなじものが出力されるようにする
    // nの定義
    n = nenrei / 10;
   
    //50歳以上だったら「50歳以上の世代です」と表示
    if   (n >= 5 ) {
       printf("%d0歳以上の世代です",n);
    }

    //通常時は"%d0歳以上の世代です。"を表示
    else if ( 2 <= n  ){
      printf("%d0歳以上の世代です。",n);
    }

    //20歳未満だったら「20歳未満の世代です」と表示
    else {
       printf("%d0歳未満の世代です.",n);
    }
    return 0;
}

