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
		printf("’ê•Ó‚Æ‚‚³‚Í‚»‚ê‚¼‚ê %.2f, %.2f ‚Å", t.teihen, t.takasa);
		printf("–ÊÏ‚Í %.2f‚Å‚·B\n", menseki);

		if (menseki > 30.0) {
			 printf("–ÊÏ‚ª‹KŠiŠO‚Å‚·B\n");
			 return 1;  // ŒÄ‚Ño‚µŒ³‚ÉƒGƒ‰[‚ğ“`‚¦‚é
		}
		if (t.teihen > 10.0) {
			 printf("’ê•Ó’·‚ª‹KŠiŠO‚Å‚·\n");
			 return 1;
		}
		if (t.takasa > 10.0) {
			printf("‚‚³‚ª‹KŠiŠO‚Å‚·\n");
			return 1;
		}
	}

	return 0;    // 0 ‚Í³íI—¹‚ÌˆÓ–¡
}
