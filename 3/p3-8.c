#include<stdio.h>
int main(void){
        double r1=10.2,r2=8.5,l=16.5,pi=3.141592,s1=0,s2=0;

        s1=r1*r2*pi;
        s2=l*l;

        printf("s1 = %f\ns2 = %f\n",s1,s2);

	//‚±‚±‚©‚ç‰º‚Í•s—v//

        if (s1>s2){
            printf("‘È‰~‚Ì‚Ù‚¤‚ª‘å‚«‚¢\n");
        }
        else{
             printf("³•ûŒ`‚Ì‚Ù‚¤‚ª‘å‚«‚¢\n");
        }

        return 0;
    }