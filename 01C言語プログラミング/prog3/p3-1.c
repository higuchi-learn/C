/* p3-1.c */
#include<stdio.h>

int main(){
	int     x = 18,  y = 4,  a,  b;
	double dx = 18, dy = 4, da, db;

	a = x/y;
	b = x%y;

	printf("%d ÷ %d = %d 余り %d\n", x, y, a, b);

	printf("dx = %.1f \ndy = %.1f \n", dx, dy);
	da = dx / dy;
	printf("%.1f ÷ %.1f = %.1f \n", dx, dy, da);

	printf("yの値を入力＞");
	scanf("%d", &y);
	a = x/y;
	b = x%y;

	printf("%d ÷ %d = %d 余り %d\n", x, y, a, b);

	return 0;
}
