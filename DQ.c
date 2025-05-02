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

	srand(time(NULL)); // 乱数初期化（未説明）

	printf("名前を入力してください : ");
	gets(name); // 文字列入力（未説明）

	printf("\n\nいきなり敵が現れた！\n");

	while (1)
	{
		//*****************************************
		//  　　　　　　　　　　　　　　攻撃の選択
		// 勇者の攻撃選択
		do
		{
			printf("\n%s\n", name);
			printf("HP:%3d\n", hp1);
			printf("MP:%3d\n", mp1);
			printf("\n");
			printf("コマンドを選んでください\n");
			printf(" 1:こうげき\n");
			printf(" 2:ひっさつ\n");
			printf(" 3:まもる\n");
			printf("> ");
			scanf("%d", &cmd1);
			// rewind(stdin); // キーボードからの数値入力（未説明）
		} while (cmd1 != 1 && cmd1 != 2 && cmd1 != 3);

		// 敵の攻撃選択
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
		// 攻撃力の計算
		// 勇者の攻撃力
		atk1 = rand() % 6 + 5; // 5?10の乱数 （未説明）
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

		// 敵の攻撃力
		atk2 = rand() % 6 + 5; // 5?10の乱数
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
		//                           攻撃開始
		// 先攻、後攻の決定
		junjo = rand() % 2; // 勇者のターンを決定

		for (turn = 0; turn < 2; turn++)
		{
			if (turn == junjo)
			{
				// 勇者のターン
				printf("%sの攻撃\n", name);
				switch (cmd1)
				{
				case 2:
					printf("MPを使った攻撃力アップ!!\n会心の一撃！！\n");
				case 1:
					printf("敵に%dのダメージを与えた\n", atk1);
					hp2 -= atk1;
					break;
				default:
					printf("%sは身を守っている\n", name);
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
				// 敵のターン
				printf("敵の攻撃\n");
				switch (cmd2)
				{
				case 2:
					printf("MPを使った攻撃力アップ!!\n会心の一撃！！\n");
				case 1:
					printf("%sは%dのダメージを受けた\n", name, atk2);
					hp1 -= atk2;
					break;
				default:
					printf("敵は身を守っている\n");
					break;
				}
				if (hp1 <= 0)
				{
					dead = 1;
					goto DONE;
				}
			}
			// 入力待ち
			// printf("▼");
			// gets(buf);
		}
	}

DONE:
	// 入力待ち
	printf("▼");
	gets(buf);

	if (dead == 2)
	{
		printf("敵を倒した!\n");
	}
	else
	{
		printf("%sは力尽きた・・・\n", name);
	}
}
