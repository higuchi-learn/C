/*  p13-3.c  */
#include<stdio.h>

struct _item {
    char name[32];
    int price;
};

typedef struct _item item;

int main() {
    item party[10] = {
        {"飲み物", 820}, {"おやつ", 1430}, {"飾り付け", 2540},{"特大ケーキ",21200},
        {"イベント", 21500}, {"今日の感動", 0}, {"後片付け", 2200},
        {"番兵", -1}
    };
    //char* important;
    item* important = NULL;
    item* p;
    int sum;

    for (p = party; p->price >= 0; p++) {
        printf("商品: %s\n", p ->name);
        printf("価格: ");
        if (p->price == 0) {
            printf("プライスレス！\n");
            printf(" % d", &(p->name));
            important = p;
            printf(" % d", &important);
        }
        else {
            printf("%d円\n", p ->price);
            sum = sum + p->price;
        }
        printf("\n");
    }
    printf("---\n");
    printf("合計費用 ： %d\n", sum);
    printf("重要な項目 : %s\n", important);
    printf("重要な項目 : %d\n", &important);

    return 0;
}
