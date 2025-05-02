/***********************************************************
    grj3.c -- �O���t�B�b�N�X
************************************************************
    �O���t�B�b�N�X��{���[�`�� (J-3100, LSI C-86, far�g�p)
***********************************************************/
#ifndef GRJ3_C
#define GRJ3_C

#include <stdio.h>   /* fputc, fputs, stderr */
#include <stdlib.h>  /* exit, atexit */
#include <string.h>  /* memset */
#include <dos.h>     /* union REGS, int86 */
#include <farstr.h>  /* LSI C-86 far functions */

#define XMAX  640U  /* ���h�b�g�� */
#define YMAX  400U  /* �c�h�b�g�� */
enum {BLACK, BLUE, RED, MAGENTA, GREEN, CYAN, YELLOW, WHITE};
    /* �F�R�[�h (���ۂ� BLACK �ȊO�͂��ׂĔ�) */

#define PLANE ((unsigned char far *)0xb8000000L)

static union REGS regs;  /* 8086���W�X�^ */
static unsigned int offset;  /* GVRAM �̃I�t�Z�b�g */

static int dgetc(void)  /* ctrl-C �Ŏ~�܂�Ȃ�1�������� */
{                       /* �L�[��������Ă��Ȃ����0��Ԃ� */
    regs.h.ah = 6;  regs.h.dl = 0xff;
    int86(0x21, &regs, &regs);  /* DOS call */
    return regs.h.al;
}

void hitanykey(void)  /* �L�[�������܂ő҂� */
{
    fputc('\a', stderr);    /* beep */
    while (dgetc() != 0) ;  /* flush key buffer */
    while (dgetc() == 0) ;  /* wait for any key */
}

void gr_dot(unsigned int x, unsigned int y,
            unsigned int color)  /* �_��\�� */
{
    static unsigned char
        count = 100,
        mask1[] = { 128, 64, 32, 16,  8,  4,  2,  1 },
        mask2[] = { 127,191,223,239,247,251,253,254 };

    if (--count == 0) {
        if (dgetc() == 0x1b) exit(0);  /* ESC */
        count = 100;
    }
    if (x >= XMAX || y >= YMAX) return;
    if (color)
        PLANE[(((x >> 3) + (y >> 2) * 80 + offset) & 0x1FFF)
            + (y & 3) * 0x2000] |= mask1[x & 7];
    else
        PLANE[(((x >> 3) + (y >> 2) * 80 + offset) & 0x1FFF)
            + (y & 3) * 0x2000] &= mask2[x & 7];
}

void gr_off(void)  /* �O���t�B�b�N��ʃN���A */
{
    far_memset(PLANE, 0, 0x8000);  /* �O���t�B�b�N��ʃN���A */
    fputs("\x1b[>5l", stderr);  /* �J�[�\���\�� */
}

void gr_on(void)  /* �O���t�B�b�N��ʏ����� */
{
    static int first = 1;

    if (first) {  atexit(gr_off);  first = 0;  }
    far_memset(PLANE, 0, 0x8000);  /* �O���t�B�b�N��ʃN���A */
    /* ��ʃN���A, �J�[�\����\��, �ŉ��s���[�U�g�p */
    fputs("\x1b[2J\x1b[>5h\x1b[>1h", stderr);
    regs.x.ax = 0x8300;
    int86(0x10, &regs, &regs);
    offset = regs.x.ax;
}

#endif  /* GRJ3_C */

#if 0  /* �e�X�g */
int main(void)
{
    int i, j, k, c, d;

    gr_on();  d = 0;
    for (k = 0; k < 320; k += 20) {
        c = (k / 10) & 3;
        for (i = 0; i < 40; i++) {
            c ^= 1;
            for (j = 0; j < 40; j++) gr_dot(k + i, k + j, c);
        }
    }
    hitanykey();
    return 0;
}
#endif /* �e�X�g */
