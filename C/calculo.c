#include <stdio.h>

int main(){
    int A,B,D,E;
    double C,F,total;
    scanf("%d %d %lf",&A,&B,&C);
    scanf("%d %d %lf",&D,&E,&F);

    total = (C*B)+(E*F);
    printf("VALOR A PAGAR: R$ %.2f\n",total);
}