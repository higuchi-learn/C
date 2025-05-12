/* p7-2.c */ 
#include<stdio.h>

int main() {
  int a[3] = {9, 2, 3};
  int a1=9, a2=2, a3=3;
  int b[8] = {5, 6, 8, 4, 4, 3, 2, 6};
  int i;
  int goukei=0;
  
  for(i=0; i<3; i++){
	goukei = goukei + a[i];
  }

  printf("変数の合計は %d です。\n", goukei);
  
  goukei=0;
  for (i=0; i<8; i++){
    goukei += b[i];
  }
  printf("配列の合計は %d です。\n", goukei);

  printf("配列の合計は %d です。\n", b[0]+b[1]+b[2]);

  return 0;
}
