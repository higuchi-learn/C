/* p7-6.c */

#include<stdio.h>
#include<string.h>

int main(){
	int flagl=0, flags=0, flagb=0, flagn=0, i,j=0;
	char pass[20];

	printf("パスワードを入力してください。＞");
	gets(pass);
	while(pass[j] != '\0'){
		j++;
	}

	for( i=0; i<=j; i++){
		if('a'<= pass[i] && pass[i] <='z'){
			flags = 1;
		}

		if('A'<= pass[i] && pass[i] <='Z'){
			flagb = 1;
		}

		if('0'<= pass[i] && pass[i] <='9'){
			flagn = 1;
		}

		if(j>=5 && j<10){
			flagl = 1;
		}
		
	}
	
	if(flagb == 1 && flags == 1 && flagn == 1 && flagl == 1){
		printf("パスワード条件を満たしています。\n");
		printf("password : %s\n",pass);
	}
	else{
		printf("パスワード条件を満たしていません。\n");
		printf("再度");
		main();
	}

	return 0;
}
/*
配列に文字列を入力して、格納された文字を参照し、
条件を満たすことを確認するプログラムの記述方法が分かりました。
*/
