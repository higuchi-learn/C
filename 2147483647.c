//
//  04_challenge_x24054.c
//
//
//  Created by x24054xx on 2024/05/15.
//

#include <stdio.h>

int reverse(int x)
{
    int a, b, c, d, reverse;//変数の宣言
    
    a = x / 1000;//4桁目以降の値を取得
    x = x - a * 1000;//3桁に揃える
    b = x / 100;//3桁目の値を取得
    x = x - b * 100;//百の位を消す
    c = x / 10;//2桁目の値を取得
    d = x % 10;//1桁目の値を取得
    reverse = d * 100 + c * 10 + b;
    
    return reverse;
}


int main(void)
{
  int x;
  
  printf("自然数nを入力してください（0 <= n <= 2147483647） ＞ ");
  scanf("%d", &x);//自然数nの入力
  
  x = reverse(x);//上のreserveを呼び出す
    
    if(x / 10 == 0)
    {
        printf("自然数nの4桁目以降を除外し，下3桁を反対にした数x = 00%d\n", x);//1桁の時,00を付ける
    }else if(x / 100 == 0)
    {
        printf("自然数nの4桁目以降を除外し，下3桁を反対にした数x = 0%d\n", x);//2桁の時,0を付ける
    }else
    {
        printf("自然数nの4桁目以降を除外し，下3桁を反対にした数x = %d\n", x);//そのまま値を出力
    }

  return 0;
}
