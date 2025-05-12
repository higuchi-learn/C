/* p6-1.c */
#include<stdio.h>
int main(){
	int toshi;
	printf("年齢を入力＞");
	scanf("%d",&toshi);

	if ( 40 <= toshi ){
		printf("%d才は40歳以上\n", toshi);
	}
	else if ( 30 <= toshi ){
		printf("%d才は30代。\n", toshi);
	}
	else if ( 20 <= toshi ){
		printf("%d才は20代。\n", toshi);
	} 
	else {
		printf("%d才は20歳未満。\n", toshi);
	}
	return 0;
}

