#include <stdio.h>
#include <string.h>
int main(void)
{
    char export_message = -1;
    while (export_message != 0)
    {
        int char_num = 0;
        char long_flag = 0;
        char small_flag = 0;
        char big_flag = 0;
        char number_flag = 0;
        char strong_checker = 0;

        printf("password�����->");
        char pw[100];
        scanf("%s", &pw);
        char pw_long = strlen(pw);

        if (pw_long >= 8)
        {
            long_flag = 1;
        }

        while (char_num < pw_long)
        {
            if ('a' <= pw[char_num] && pw[char_num] <= 'z')
            {
                small_flag = 1;
            }
            if ('A' <= pw[char_num] && pw[char_num] <= 'Z')
            {
                big_flag = 1;
            }
            if ('0' <= pw[char_num] && pw[char_num] <= '9')
            {
                number_flag = 1;
            }
            char_num++;
        }

        if (small_flag == 1)
        {
            strong_checker++;
        }
        if (big_flag == 1)
        {
            strong_checker++;
        }
        if (number_flag == 1)
        {
            strong_checker++;
        }

        if (long_flag == 1 && strong_checker == 3)
        {
            export_message = 0;
        }
        else if (long_flag == 1 && strong_checker == 2)
        {
            export_message = 1;
        }
        else
        {
            export_message = 2;
        }

        switch (export_message)
        {
        case 0:
            printf("���x : �ƂĂ�����\n�p�X���[�h��o�^���܂����B\n");
            break;

        case 1:
            printf("���x : ����\n�p�X���[�h���ȒP�ł��B�ē��͂��Ă��������B\n");
            break;

        case 2:
            printf("���x : �ア\n�p�X���[�h���ȒP�ł��B�ē��͂��Ă��������B\n");
            break;
        }
    }

    return 0;
}
