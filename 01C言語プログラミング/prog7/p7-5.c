#include<stdio.h>
int main(){
	char msg[4][32] = { "Good Morning.", "Good Afternoon.","Good Evening.", "Good Night."};
	char newmeg[32];
	int i,j;

	for ( i=0; i<4; i++ ){
		printf("%s\n", msg[i]);
	}

	printf("msg[1][i] != '\0'");
	while((msg[1][i] != '\0')
		i++;
		printf("%c", msg[1][i]);
	}

	printf("<\n");
	for (i=0; i<4; i++ ){
  		printf("%d: %s\n", i, msg[i]);
		if ( msg[i][6] == 'v' ){
  			printf("これは「こんばんは」ってことですね？\n");
		}
	}

	for (i=0; i<4; i++ ){
		msg[i][0] = 'g';
  		printf("%s\n", msg[i]);
	}

	for(i=0; i<4; i++){
		for(j=0; j<32; j++){
			if(msg[i][j] == 'M' || msg[i][j] == 'E' || msg[i][j] == 'A' || msg[i][j] == 'N'){
				printf("msg[%d][%d] = [%c]\n", i, j, msg[i][j]);
			}
		}
	}

	/*printf("選択してください。\n 0-> Good Morning.\n 1->Good Afternoon.\n");
	printf("2->Good Evening.\n 3->Good Night.\n");
	scanf("%d",&i);

	for(j=0; j<32; j++){
		newmsg[j] = msg[i][j];
	}*/

	return 0;
}
