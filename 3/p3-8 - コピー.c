#include<stdio.h>
int main(void){
        double r1=10.2,r2=8.5,l=16.5,pi=3.141592,s1=0,s2=0;

        s1=r1*r2*pi;
        s2=l*l;

        printf("s1 = %f\ns2 = %f\n",s1,s2);

	//ここから下は不要//

        if (s1>s2){
            printf("楕円のほうが大きい\n");
        }
        else{
             printf("正方形のほうが大きい\n");
        }

        return 0;
    }