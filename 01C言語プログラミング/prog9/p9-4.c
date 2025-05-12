/* p9-4.c */
#include<stdio.h>
#include <stdlib.h>

void aisatsu( int jikoku ){


	if(24<jikoku){
		exit(0);
	}
	else if( jikoku<6||23<=jikoku ){
		printf("ねむいよう\n");
	}
	else if( 17<=jikoku ){
		printf("こんばんは\n");
	}
	else if( 11<=jikoku ){
		printf("こんにちは\n");
	}
	else {
		printf("おはよう！\n");
	}
	

	return;   
}

int main(){

    int i;
    for(i=0; i<27; i++){
	printf("今何時？　%d\n",i);
	aisatsu(i);
    }
    return 0;
}

