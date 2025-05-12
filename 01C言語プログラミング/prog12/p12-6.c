/* p12-6.c */
#include<stdio.h>
#include<string.h>

int check_name(char* name);

int main() {
    char input[50];
    int flag;

    printf("guess my favorite animal : ");
    gets(input);

    flag = check_name(input);
    if (flag != 1)
    {
        printf("Again, input another name : ");
        gets(input);

        check_name(input);
    }

    return 0;
}

int check_name(char* name) {
    int flag = 0;
    char msg[100];
    if (0==strcmp("rabbit", name)) {
        flag = 1;
        printf("Exactly! I love a white rabbit\n");
    }
    else {
        printf("No, [%s] is wrong.\n", name);
    }
    sprintf(msg, "Do you like [%s]?\n", name);
    printf("%s", msg);

    return flag;
}
