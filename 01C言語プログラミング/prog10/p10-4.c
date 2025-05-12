/*  p10-4.c  */
#include<stdio.h>

int  n = 0;

void greeting();

int main(){

  for (int i=0; i<3;i++){
    greeting();

    printf("＊次の日になりました\n\n");
  }

  printf("もうお金がありません\n");
  printf("%d回も行ったので仕方ないです。\n", n);

  return 0;
}

void greeting(){
  static char name[32]="";
  if (name[0]=='\0'){
    printf("お名前は？:");
    scanf("%s", name);     // gets でもOKです。スペース入れたい人は gets 使ってください
  }

  n++;
  if(n==1){
     printf("メイドさん「はじめまして！」「お会いするのは初めてですね？」\n");
  }
  else{
  printf("メイドさん「%sさん、いらっしゃい！\n", name);
  printf("　　　　　　　いつもありがとうございます！\n");
  printf("メイドさん「お会いするのは%d回目ですよね？」\n\n", n);
  }
}
