#include <stdio.h>

int reverse(int x){
    int a, b, c, d, reverse;//�ϐ��̐錾
    
    a = x / 1000;
    x = x - a * 1000;
    b = x / 100;
    x = x - b * 100;
    c = x / 10;
    d = x % 10;
    reverse = d * 100 + c * 10 + b;
    
    return reverse;
}


int main(void)
{
  int x;
  
  printf("3���̎��R������͂��Ă������� = ");
  scanf("%d", &x);//���R���̓���
  
  x = reverse(x);
    
    if(x / 100 == 0)
    {
        printf("���т𔽑΂ɂ������R�� = 0");
        printf("%d", x);
    }else
    {
        printf("���т𔽑΂ɂ������R�� = %d\n", x);//�l���o��
    }

  return 0;
}
