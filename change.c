#include <stdio.h>

int reverse(int x){
    int a, b, c, d, reverse;//変数の宣言
    
    a = x / 1000;
    x = x - a * 1000;
    b = x / 100;
    x = x - b * 100;
    c = x / 10;
    d = x % 10;
    reverse = d * 100 + c * 10 + b;
    
    return reverse;
}


int main(void)
{
  int x;
  
  printf("3桁の自然数を入力してください = ");
  scanf("%d", &x);//自然数の入力
  
  x = reverse(x);
    
    if(x / 100 == 0)
    {
        printf("並びを反対にした自然数 = 0");
        printf("%d", x);
    }else
    {
        printf("並びを反対にした自然数 = %d\n", x);//値を出力
    }

  return 0;
}
