/* p3-8.c */

#include<stdio.h>

int main(){
	double r1, r2, l, s1, s2, pi;
	r1 = 10.2;
	r2 = 8.5;
	l  = 16.5;
	s1 = 0;
	s2 = 0;
	pi = 3.14;
	
	

	s1 = r1 * r2 * pi;
	s2 = l * l;

	printf("s1 = %f, s2 = %f\n", s1, s2);

	if(s1>s2)
		printf("楕円の面積の方が大きい");
	
	else
		printf("正方形の面積の方が大きい");

	return 0;
}
/*
πの精度の小さな違いによって、
比較結果が異なることが分かりました。
*/
