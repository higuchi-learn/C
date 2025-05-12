/* p6-6.c */

#include<stdio.h>

int main(){

    int i=1;
    int cnt=0;
    int bj=0, sj=0;
    
    printf("Let's go!\n");
    
    do{
      cnt++;
      printf("%d :: i=%d\n", cnt, i);
    
      if (i%5<3){
        i++;
        printf("One step.\n");
        continue;
      }
    
      switch( i%9 ){
      case 1:
      case 5:
      case 6:
        printf("Big jump!!\n");
        i += 5;
        bj++;
        break;
      case 4:
      case 8:
        printf("Small jump.\n");
        i += 3;
        sj++;
        break;
      default:
        printf("easy, easy...\n");
        i+=2;
      }
    } while( i<50 );
    
    printf("Finally, BigJump=%d, SmallJump=%d, Total=%dsteps\n", bj,sj,cnt);

    return 0;
}
