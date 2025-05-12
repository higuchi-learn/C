/* p13-1.c */
#include<stdio.h>
#include<string.h>

struct box {
	char name[32];
	int width, depth, height; // 幅, 奥行, 高さ
};

int main() {
	struct box b1 = { "ダンボール箱", 200, 300, 450 };
	printf("%s : %dx%dx%d\n",
		b1.name, b1.width, b1.depth, b1.height);

	struct box b2;
	strcpy(b2.name, "名刺ケース");
	b2.width = 60;
	b2.depth = 15;
	b2.height = 55;
	printf("%s : %dx%dx%d\n",
		b2.name, b2.width, b2.depth, b2.height);

	struct box b3;
	strcpy(b3.name, "みかん箱");
	b3.width = 325;
	b3.depth = 150;
	b3.height = 230;
	printf("%s : %dx%dx%d\n",
		b3.name, b3.width, b3.depth, b3.height);

	struct box b4;
	strcpy(b4.name, "マッチ箱");
	b4.width = 56;
	b4.depth = 35;
	b4.height = 9;
	printf("%s : %dx%dx%d\n",
		b4.name, b4.width, b4.depth, b4.height);

	return 0;
}

