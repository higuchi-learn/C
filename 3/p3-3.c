/* p3-3.c */
#include<stdio.h>

int main(){
  int a, b, c, sum;
  double ave;

    printf("aを入力＞");
    scanf("%d",&a);
    printf("bを入力＞");
    scanf("%d",&b);
    printf("cを入力＞");
    scanf("%d",&c);

  sum = a+b+c;
  ave = (double)sum/3;
  printf("平均は%f点です。\n", ave);

  return 0;
}