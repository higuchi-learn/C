/* p3-3.c */
#include<stdio.h>

int main(){
  int a, b, c, sum;
  double ave;

    printf("a����́�");
    scanf("%d",&a);
    printf("b����́�");
    scanf("%d",&b);
    printf("c����́�");
    scanf("%d",&c);

  sum = a+b+c;
  ave = (double)sum/3;
  printf("���ς�%f�_�ł��B\n", ave);

  return 0;
}