/* p6-3.c */
#include<stdio.h>

int main(){
  double rest = 120, left = 0.5, right = 0.2;
  int step = 0;

  printf("一歩づつ歩いていこう!\n");

  while (1){
    if (step==0){
      printf("右足前にして %.1fm 進む\n",right);
      rest -= right;
      step = 1;
    }
    else if (step==1){
      printf("左足前にして %.1fm 進む\n",left);
      rest -= left;
      step = 0;
    }
    if (rest<=0) break;

    printf("のこり %.2fm ", rest);
    if (rest>60) {
      printf("まだまだ先は長いな\n");
    } else if (rest<10) {
      printf("もう少しだ、がんばろう！\n");
    }

  }

  printf("到着だ！\n");

  return 0;
}
