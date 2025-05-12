/* p5-3.c */
#include<stdio.h>

int main(){
    int i;

    for (i=0; i<9; i++){
        printf("%d 回目の繰り返し処理\n", i+1);
    }
    printf("i が %d でループから抜けました\n", i);

    return 0;
}
