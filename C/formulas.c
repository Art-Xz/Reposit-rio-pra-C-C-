#include <stdio.h>

int main(){
    double A,B,C,tri,circ,trap,quadrado,ret,PI;
    PI = 3.14159;
    scanf("%lf %lf %lf",&A,&B,&C);
    tri = (A*C)/2;
    circ = PI*(C*C);
    trap = ((A+B)*C)/2;
    quadrado = B*B;
    ret = A*B;

    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",tri,circ,trap,quadrado,ret);


}