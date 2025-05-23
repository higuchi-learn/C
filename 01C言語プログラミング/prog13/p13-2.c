/*  p13-2.c  */
#include<stdio.h>

struct triangle {
	double teihen;
	double takasa;
};

typedef struct triangle TRIANGLE;

int main() {
	TRIANGLE tdata[3] = { { 7.9, 7.2 }, {4.2, 8.6}, {9.2, 6.3} };
	TRIANGLE t;
	double menseki;

	for (int i = 0; i < 3; i++) {
		t = tdata[i];
		menseki = t.teihen * t.takasa / 2;
		printf("底辺と高さはそれぞれ %.2f, %.2f で", t.teihen, t.takasa);
		printf("面積は %.2fです。\n", menseki);

		if (menseki > 30.0) {
			 printf("面積が規格外です。\n");
			 return 1;  // 呼び出し元にエラーを伝える
		}
		if (t.teihen > 10.0) {
			 printf("底辺長が規格外です\n");
			 return 1;
		}
		if (t.takasa > 10.0) {
			printf("高さが規格外です\n");
			return 1;
		}
	}

	return 0;    // 0 は正常終了の意味
}
