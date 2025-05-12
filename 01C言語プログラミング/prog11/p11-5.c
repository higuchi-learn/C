/* p11-5.c */
#include<stdio.h>

void swap( int *x, int *y ){
  int tmp;

  tmp = *x;
  *x = *y;
  *y = tmp;
}

int main(){
  int a=10, b=35, c=21;
  int *p1=&a,*p2=&b;

  printf("a,b,c=%d,%d,%d\n", a,b,c);
  printf("a,b,c=%p,%p,%d\n", &a,&b,&c);

  swap( &a, &b );
  printf("a,b,c=%p,%p,%d\n", &a,&b,&c);
  printf("a,b,c=%d,%d,%d\n", a,b,c);

  swap( &c, &b );
  printf("a,b,c=%p,%p,%d\n", &a,&b,&c);
  printf("a,b,c=%d,%d,%d\n", a,b,c);

  swap( &a, &b );
  printf("a,b,c=%p,%p,%d\n", &a,&b,&c);
  printf("a,b,c=%d,%d,%d\n", a,b,c);

  swap( p1, p2 );
  printf("a,b,c=%p,%p,%d\n", &a,&b,&c);
  printf("a,b,c=%d,%d,%d\n", a,b,c);

  return 0;
}
