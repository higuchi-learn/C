#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	int dead = 0;
	int hp1 = 100, mp1 = 3;
	int hp2 = 150, mp2 = 10;
	int cmd1, atk1;
	int cmd2, atk2;
	int r_at = 40, r_hi = 20, r_ma = 40;
	int r;
	int junjo, turn;
	char buf[128], name[128];

	srand(time(NULL)); // �����������i�������j

	printf("���O����͂��Ă������� : ");
	gets(name); // ��������́i�������j

	printf("\n\n�����Ȃ�G�����ꂽ�I\n");

	while (1)
	{
		//*****************************************
		//  �@�@�@�@�@�@�@�@�@�@�@�@�@�@�U���̑I��
		// �E�҂̍U���I��
		do
		{
			printf("\n%s\n", name);
			printf("HP:%3d\n", hp1);
			printf("MP:%3d\n", mp1);
			printf("\n");
			printf("�R�}���h��I��ł�������\n");
			printf(" 1:��������\n");
			printf(" 2:�Ђ�����\n");
			printf(" 3:�܂���\n");
			printf("> ");
			scanf("%d", &cmd1);
			// rewind(stdin); // �L�[�{�[�h����̐��l���́i�������j
		} while (cmd1 != 1 && cmd1 != 2 && cmd1 != 3);

		// �G�̍U���I��
		r = rand() % (r_at + r_hi + r_ma);
		if (r < r_at)
		{
			cmd2 = 1;
		}
		else if (r < r_at + r_hi)
		{
			cmd2 = 2;
		}
		else
			cmd2 = 3;

		//*****************************************
		// �U���͂̌v�Z
		// �E�҂̍U����
		atk1 = rand() % 6 + 5; // 5?10�̗��� �i�������j
		if (cmd1 == 3)
			atk1 = 0;
		if (cmd1 == 2)
		{
			if (mp1 > 0)
			{
				mp1--;
				atk1 *= 3;
			}
			else
			{
				cmd1 = 1;
			}
		}
		if (cmd2 == 3)
			atk1 /= 5;

		// �G�̍U����
		atk2 = rand() % 6 + 5; // 5?10�̗���
		if (cmd2 == 3)
			atk2 = 0;
		if (cmd2 == 2)
		{
			if (mp2 > 0)
			{
				mp2--;
				atk2 *= 3;
			}
			else
			{
				cmd2 = 1;
			}
		}
		if (cmd1 == 3)
			atk2 /= 5;

		//***************************************
		//                           �U���J�n
		// ��U�A��U�̌���
		junjo = rand() % 2; // �E�҂̃^�[��������

		for (turn = 0; turn < 2; turn++)
		{
			if (turn == junjo)
			{
				// �E�҂̃^�[��
				printf("%s�̍U��\n", name);
				switch (cmd1)
				{
				case 2:
					printf("MP���g�����U���̓A�b�v!!\n��S�̈ꌂ�I�I\n");
				case 1:
					printf("�G��%d�̃_���[�W��^����\n", atk1);
					hp2 -= atk1;
					break;
				default:
					printf("%s�͐g������Ă���\n", name);
					break;
				}
				if (hp2 <= 0)
				{
					dead = 2;
					goto DONE;
				}
			}
			else
			{
				// �G�̃^�[��
				printf("�G�̍U��\n");
				switch (cmd2)
				{
				case 2:
					printf("MP���g�����U���̓A�b�v!!\n��S�̈ꌂ�I�I\n");
				case 1:
					printf("%s��%d�̃_���[�W���󂯂�\n", name, atk2);
					hp1 -= atk2;
					break;
				default:
					printf("�G�͐g������Ă���\n");
					break;
				}
				if (hp1 <= 0)
				{
					dead = 1;
					goto DONE;
				}
			}
			// ���͑҂�
			// printf("��");
			// gets(buf);
		}
	}

DONE:
	// ���͑҂�
	printf("��");
	gets(buf);

	if (dead == 2)
	{
		printf("�G��|����!\n");
	}
	else
	{
		printf("%s�͗͐s�����E�E�E\n", name);
	}
}
