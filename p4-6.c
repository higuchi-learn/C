/* p4-6.c */ 
#include<stdio.h>

int main(){
    // �ϐ��̏���nenrei, n
    int nenrei,n;
    scanf("%d",&nenrei);

   
    //4-3�Ɠ�������
    if ( nenrei>=50 ){
        printf("50�Έȏ�̐���ł�\n");
    }
    else if( nenrei>40 ){
       printf("40�Έȏ�̐���ł�\n");
    }
    else if( nenrei>=30 ){
       printf("30�Έȏ�̐���ł�\n");
    }
    else if( nenrei>=20 ){
       printf("20�Έȏ�̐���ł�\n");
    }
    else {
       printf("20�Ζ����̐���ł�\n");
    }

    // ���̉��̏������A��̏����̌��ʂƂ��Ȃ����̂��o�͂����悤�ɂ���
    // n�̒�`
    n = nenrei / 10;
   
    //50�Έȏゾ������u50�Έȏ�̐���ł��v�ƕ\��
    if   (n >= 5 ) {
       printf("%d0�Έȏ�̐���ł�",n);
    }

    //�ʏ펞��"%d0�Έȏ�̐���ł��B"��\��
    else if ( 2 <= n  ){
      printf("%d0�Έȏ�̐���ł��B",n);
    }

    //20�Ζ�����������u20�Ζ����̐���ł��v�ƕ\��
    else {
       printf("%d0�Ζ����̐���ł�.",n);
    }
    return 0;
}

