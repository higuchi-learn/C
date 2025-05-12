/* p5-2.c */
#include<stdio.h>
int main(){
	double rest = 120.0, w = 0.55;
	int cnt = 0;

	printf("食堂まで歩いていくぞ！\n");
	while ( rest>0 ){
		rest -= w;
		cnt += 1;
		printf("一歩進み %.2lfm 減らした。\n", w);
		printf("のこり %.2fmで食堂に到着。\n", rest);
	}
	printf("食堂に %d 歩で到着した\n", cnt);
	return 0;
}
