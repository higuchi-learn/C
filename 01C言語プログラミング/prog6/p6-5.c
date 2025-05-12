/* p6-5.c */
#include <stdio.h>
int main(){
  int i=1;

  printf("10まで増やしていこう、スタート!\n");
  while(i<10){
    printf("i=%d が ", i);
    i++;
    printf("%dになったぞ。\n", i); 

    if ( i<=7 ){
    printf("全然足りないよ！\n");
    }

    if ( i<=4 ){
    printf("まだまだ先は長いぞ！\n");
    }
  }

  printf("よしゴールだ!!!\n");

  return 0;
}    
