#include <stdio.h>

int main(){
    double A,B,C,soma,valor;
    scanf("%lf %lf %lf",&A,&B,&C);
    valor = ((A+B)*C)/2;
    soma = (A+B+C);
    if(A+B>C && A+C>B && C+B>A){
        printf("Perimetro = %.1f\n",soma);
    }else{
        printf("Area = %.1f\n",valor);
    }
}