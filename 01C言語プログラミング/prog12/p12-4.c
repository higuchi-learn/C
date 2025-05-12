/* p12-4.c */

#include<stdio.h>

int maxint(int* v,int n) {
    int max = -1;
    int i;

    for (i = 0; i < n; i++) {
        if (max < v[i]) {
            max = v[i];
        }
    }

    return max;
}

int minint(int* v, int n) {
    int i;
    int min = v[i];

    for (i = 0; i < n; i++) {
        if (min > v[i]) {
            min = v[i];
        }
    }

    return min;
}

int main() {
    int valset1[10] = { 4,3,6,9,2, 7,5,6,3,6 };
    int valset2[5] = { 1,2,3,4,5 };

    printf("max = %d\n", maxint(valset1, sizeof(valset1) / sizeof(valset1[0])));
    printf("max = %d\n", maxint(valset2, sizeof(valset2) / sizeof(valset2[0])));

    printf("\n");

    printf("min = %d\n", minint(valset1, sizeof(valset1) / sizeof(valset1[0])));
    printf("min = %d\n", minint(valset2, sizeof(valset2) / sizeof(valset2[0])));

    return 0;
}
