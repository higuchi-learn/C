/* p5-7.c */
#include<stdio.h>

int main(){
	int i;
	i = 9;

	while ( i>0 ){
		printf("while :: i=%d\n", i); //iが0以下(i=0)になるまで繰り返す
		i-=3;
	}
	printf("-------------\n");

	for( i=0; i<9; i=i+3 ){
		printf("for   :: i=%d\n", 9-i);
	}

  return 0;
}
/*
このプログラムの場合は、繰り返す回数が実行前から
ある程度分かっているので、for文を用いて記述するのが適している。
*/
