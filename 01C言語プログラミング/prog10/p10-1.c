/* p10-1.c */
#include<stdio.h>

int nijou(int a);

int main(){
    int a,b;

    a=10;
    b=15;
    printf("a=%d, b=%d\n", a, b);
    printf("nijou(a) = %d\n", nijou(a));
    printf("nijou(b) = %d\n", nijou(b));

    return 0;
}

int nijou(int a){
    int b;

    printf("%d\n",a);
    b = a*a;
    return b;
}