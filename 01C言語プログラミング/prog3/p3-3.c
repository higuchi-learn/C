/* p3-3.c */
#include<stdio.h>

int input(){
	int x;
	printf("値を入力＞");
	scanf("%d",&x);
	return x;
}

int main(){
  int a, b, c, sum;
  double ave;
  
	a = input();
	b = input();
	c = input();

  sum = a+b+c;
  ave = (double)sum/3;
	printf("%d %d %d",a,b,c);
  printf("平均は%f点です。\n", ave);

  return 0;
}
