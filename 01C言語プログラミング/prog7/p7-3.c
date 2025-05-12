/* p7-3.c */
#include<stdio.h>

int main(){
  char str[10]="bat";

  printf("%s\n", str);

  printf("%sの文字を一文字変えて", str);
  str[1] = 'e';
  printf("%s\n", str);

  printf("%sの文字を一文字変えて", str);
  str[0] = 'w';
  printf("%s\n", str);

  printf("%sに一文字追加して", str);
  str[2] = 's';
  str[3] = 't';
  str[4] = '\0';
  printf("%s\n", str);

  str[4] = 'e';
  str[5] = 'r';
  str[6] = 'n';
  printf("%s\n", str);

  str[2] = '\0';
  printf("%s\n", str);

  return 0;
}
