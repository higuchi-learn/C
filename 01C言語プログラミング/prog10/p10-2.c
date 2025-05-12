/* p10-2.c */
#include<stdio.h>

double sankaku(double teihen, double takasa);

int main(){
    double teihen = 2, takasa = 4, menseki;
    menseki = sankaku(teihen,takasa);
    printf("面積 = %.2f\n", menseki);
    
    teihen = 3;  takasa = 9;
    menseki = sankaku(teihen,takasa);
    printf("面積 = %.2f\n", menseki);
    
    return 0;
}

double sankaku(double teihen, double takasa){
    double menseki;
    
    menseki = (teihen * takasa) / 2;
    printf("%.2f * %.2f / 2 = %.2f\n", teihen, takasa, menseki);

    return menseki;
}