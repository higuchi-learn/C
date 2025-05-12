/* p9-3.c */
#include<stdio.h>

char oomoji( char c ){
    char ret;
    if ( 'a'<= c && c <= 'z' ){
        ret = c-'a'+'A';
    }
    else{
	ret = c;
    }
    return ret;
}

char komoji( char c){
    if ( 'A'<= c && c <= 'Z' ){
	return c-'A'+'a';
    }
    return c;
}

int main(){
    char msg[]="Test";
    char in;

    printf("0文字目を大文字化 : %c\n", msg[0]);
    msg[0] = oomoji(msg[0]);
    printf("0文字目の変更結果 : %c\n", msg[0]);

    printf("次のテスト\n");
    printf("2文字目を大文字化 : %c\n", msg[2]);
    msg[2] = oomoji(msg[2]);
    printf("2文字目の変更結果 : %c\n", msg[2]);
    
    printf("文字を一文字入力＞\n");
    scanf("%c",&in);
    printf("'%c'を大文字にすると'%c'です。\n", in, oomoji(in) );
    printf("'%c'を小文字にすると'%c'です。\n", in, komoji(in) );

    return 0;
}
