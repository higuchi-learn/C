/*  p13-3.c  */
#include<stdio.h>

struct _item {
    char name[32];
    int price;
};

typedef struct _item item;

int main() {
    item party[10] = {
        {"���ݕ�", 820}, {"�����", 1430}, {"����t��", 2540},{"����P�[�L",21200},
        {"�C�x���g", 21500}, {"�����̊���", 0}, {"��Еt��", 2200},
        {"�ԕ�", -1}
    };
    //char* important;
    item* important = NULL;
    item* p;
    int sum;

    for (p = party; p->price >= 0; p++) {
        printf("���i: %s\n", p ->name);
        printf("���i: ");
        if (p->price == 0) {
            printf("�v���C�X���X�I\n");
            printf(" % d", &(p->name));
            important = p;
            printf(" % d", &important);
        }
        else {
            printf("%d�~\n", p ->price);
            sum = sum + p->price;
        }
        printf("\n");
    }
    printf("---\n");
    printf("���v��p �F %d\n", sum);
    printf("�d�v�ȍ��� : %s\n", important);
    printf("�d�v�ȍ��� : %d\n", &important);

    return 0;
}
