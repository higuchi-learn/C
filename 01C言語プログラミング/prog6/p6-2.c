/* p6-2.c */
#include<stdio.h>

int main(){
  char ch;

  printf("文字を一文字入力＞");
  scanf("%c",&ch);

  if ( 'A'<= ch && ch<='Z' ){
    printf("%c は大文字です。", ch);
    printf("小文字にすると%cです。\n", ch+'a'-'A');
  }

  else if ( 'a'<= ch && ch<='z' ){
    printf("%c は小文字です。", ch);
    printf("大文字にすると%cです。\n", ch+'A'-'a');
  }
  else if( '0'<= ch && ch<='9' ){
    printf("%c は数字です。", ch);
    printf("5を足すと%dです。\n", ch-'0'+5);
  }
  else {
    printf("%c は記号です。", ch);
  }
  return 0;
}
