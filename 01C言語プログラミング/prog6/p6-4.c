/* p6-4.c */
#include<stdio.h>

int main(){
    int i,j,ix,jx,result;

    printf("      ＜九九の表示＞");
    for (i=0; i<9; i++){
	printf("\n");
	for (j=0; j<9; j++){
		ix = i+1;
		jx = j+1;
		result = ix*jx;
		
		if( result >= 20){
			continue;
		}
		if( result <= 9){
			printf("  %d", result );
		}
		else{
			printf(" %d", result );
		}
  	}
    }

  return 0;
}
