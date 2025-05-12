/* p6-6.c */

#include<stdio.h>

int main(){

	int i=1, ix, iy;
	int cnt=0;
	int bj=0, sj=0;
    
	printf("Let's go!\n");
    
	while(1){
		cnt++;
		ix = i%5;
		iy = i%9;
		printf("%d :: i=%d\n", cnt, i);

		if(ix<3){
			i++;
			printf("One step.\n");
		}
		else if(iy==1 || iy==5 || iy==6){
			printf("Big jump!!\n");
			i += 5;
			bj++;
		}
		else if(iy==4 || iy==8){
			printf("Small jump.\n");
			i += 3;
			sj++;
		}
		else{
			printf("easy, easy...\n");
			i+=2;
		}
		if(i>=50){
			break;
		}
	}
    
	printf("Finally, BigJump=%d, SmallJump=%d, Total=%dsteps\n", bj,sj,cnt);

	return 0;
}
