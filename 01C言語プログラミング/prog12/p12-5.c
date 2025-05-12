/* p12-5.c */
#include<stdio.h>
#include<string.h>

int mystrlen(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }

    return i;
}

void revprint(char* s) {
    //int len = strlen(s);
    int mylen = mystrlen(s);
    int i;

    //printf("%d\n", len);
    printf("%d\n", mylen);

    for (i = 0; i < mylen; i++) {
        printf("%c", s[mylen - i - 1]);
    }
    printf("\n");

}

int main() {
    char s1[20] = "hello";
    char s2[20] = "good bye!";

    revprint(s1);
    revprint(s2);

    return 0;
}
