/***********************************************************
    grBMP.c -- �O���t�B�b�N�X
***********************************************************/
#ifndef GRBMP_C
#define GRBMP_C

#include <stdio.h>

#define XMAX  640  /* ���s�N�Z���� */
#define YMAX  400  /* �c�s�N�Z���� */

#define BLACK 0x000000
#define WHITE 0xffffff
#define RED   0xff0000
#define GREEN 0x00ff00
#define BLUE  0x0000ff

long gr_screen[YMAX][XMAX];

void putbytes(FILE *f, int n, unsigned long x)  /* x�̖�������n�o�C�g�o�� */
{
    while (--n >= 0) {
        fputc(x & 255, f);  x >>= 8;
    }
}

void gr_dot(int x, int y, long color)  /* �_(x,y)��Fcolor�œh�� */
{
    if (x >= 0 && x < XMAX && y >= 0 && y < YMAX)
        gr_screen[y][x] = color;
}

void gr_clear(long color)  /* �F color �ŃN���A */
{
    int x, y;

    for (x = 0; x < XMAX; x++)
        for (y = 0; y < YMAX; y++)
            gr_dot(x, y, color);
}    

void gr_BMP(char *filename)  /* BMP�t�@�C���o�� */
{
    int x, y;
    
    FILE *f = fopen(filename, "wb");
    fputs("BM", f);  /* �t�@�C���^�C�v */
    putbytes(f, 4, XMAX * YMAX * 4 + 54);  /* �t�@�C���T�C�Y */
    putbytes(f, 4, 0);  /* �\��̈� */
    putbytes(f, 4, 54); /* �t�@�C����[����摜�܂ł̃I�t�Z�b�g */
    putbytes(f, 4, 40); /* ���w�b�_�T�C�Y */
    putbytes(f, 4, XMAX);  /* �摜�̕� */
    putbytes(f, 4, YMAX);  /* �摜�̍��� */
    putbytes(f, 2, 1);  /* �v���[�����i1�j */
    putbytes(f, 2, 32);  /* �F�r�b�g�� */
    putbytes(f, 4, 0);  /* ���k�`���i�����k�j */
    putbytes(f, 4, XMAX * YMAX * 4);  /* �摜�f�[�^�T�C�Y */
    putbytes(f, 4, 3780);  /* �����𑜓x�idot/m�j */
    putbytes(f, 4, 3780);  /* �����𑜓x�idot/m�j */
    putbytes(f, 4, 0);  /* �i�[�p���b�g�� */
    putbytes(f, 4, 0);  /* �d�v�F�� */
    for (y = 0; y < YMAX; y++)
        for (x = 0; x < XMAX; x++)
            putbytes(f, 4, gr_screen[y][x]);  /* �摜�f�[�^ */
    fclose(f);
}

#endif  /* GRBMP_C */

#if 1  /* �e�X�g */
int main(void)
{
    int x, y;

    for (x = 0; x < XMAX / 2; x++)
        for (y = 0; y < YMAX / 2; y++)
            gr_dot(x, y, GREEN);
    for (x = XMAX / 2; x < XMAX; x++)
        for (y = 0; y < YMAX / 2; y++)
            gr_dot(x, y, BLUE);
    for (x = 0; x < XMAX / 2; x++)
        for (y = YMAX / 2; y < YMAX; y++)
            gr_dot(x, y, RED);
    for (x = XMAX / 2; x < XMAX; x++)
        for (y = YMAX / 2; y < YMAX; y++)
            gr_dot(x, y, WHITE);
    gr_BMP("test.bmp");
    return 0;
}
#endif /* �e�X�g */
