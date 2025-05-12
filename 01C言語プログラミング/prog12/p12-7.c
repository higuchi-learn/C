/* p12-7.c */

#include<stdio.h>

int maxint(int* v) {
    int max = v[0];
    int i = 0;

    while (v[i]!=-1){
        if (max < v[i]) {
            max = v[i];
        }
        i++;
    }

    return max;
}

int minint(int* v) {
    int min = v[0];
    int i = 0;

    while (v[i] != -1) {
        if (min > v[i]) {
            min = v[i];
        }
        i++;
    }

    return min;
}

int main() {
    int valset1[] = { 4,3,6,9,2, 7,5,6,3,6,-1 };
    int valset2[] = { 1,2,3,4,5,-1 };
    int valset3[] = { 4,6,3,4,3,7,3,2,5,-1,3,9,5,4,2,1,3,5 };

    printf("valset1 max = %d\n", maxint(valset1));
    printf("valset1 min = %d\n", minint(valset1));

    printf("valset2 max = %d\n", maxint(valset2));
    printf("valset2 min = %d\n", minint(valset2));

    printf("valset3 max = %d\n", maxint(valset3));
    printf("valset3 min = %d\n", minint(valset3));

    return 0;
}

/*
�ԕ��@���g�����z��̌J��Ԃ������̕��@�𗝉����邱�Ƃ��o���܂����B
�܂��A�ԕ��Ɏg���l���ԈႦ���valset3�̂悤�ɁA�{���~�����l��
�����Ȃ��Ȃ��Ă��܂����Ƃ�������܂����B
*/
