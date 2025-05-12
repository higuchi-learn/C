/* p9-1.c */
#include<stdio.h>

int max( int a, int b, int c ){
    int v;

    printf("%d",a);
    printf("%d",b);
    printf("%d",c);

    if(a>b){
	v = a;
    }
    else{
	v = b;
    }
    if(c>v){
	v = c;
    }
    return v;
}

int main(){
    int v1=4, v2=6, v3=3;
    int vmax;
    
    vmax = max(v1, v2, v3);
    
    printf("max(%d,%d,%d) -> %d\n", v1,v2,v3, vmax);
    
    printf(" change v1 to .. : ");
    scanf("%d", &v1);
    
    vmax = max(v1, v2, v3);
    printf("max(%d,%d,%d) -> %d\n", v1,v2,v3, vmax);
    
    return 0;
}
