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
		printf("��ӂƍ����͂��ꂼ�� %.2f, %.2f ��", t.teihen, t.takasa);
		printf("�ʐς� %.2f�ł��B\n", menseki);

		if (menseki > 30.0) {
			 printf("�ʐς��K�i�O�ł��B\n");
			 return 1;  // �Ăяo�����ɃG���[��`����
		}
		if (t.teihen > 10.0) {
			 printf("��Ӓ����K�i�O�ł�\n");
			 return 1;
		}
		if (t.takasa > 10.0) {
			printf("�������K�i�O�ł�\n");
			return 1;
		}
	}

	return 0;    // 0 �͐���I���̈Ӗ�
}
