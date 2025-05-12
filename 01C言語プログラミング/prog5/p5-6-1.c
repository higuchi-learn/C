/* p5-6.c */
#include <stdio.h>

int main(){
  int ans;
  int count;
	
	count=1;
 	printf("第%d回目の入力です\n", count);
 	count ++;
 	printf("5以下で入力してください :");
 	scanf("%d", &ans);

  	while( ans>5 ){
		printf("第%d回目の入力です\n", count);
 		count ++;
 		printf("5以下で入力してください :");
 		scanf("%d", &ans);
	}

  printf("入力値は%dです\n", ans);

  return 0;
}
