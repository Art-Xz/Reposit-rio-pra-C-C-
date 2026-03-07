#include <stdio.h>
#include <math.h>
int main(){
    double A,B,C,delta,bhaskarap,bhaskaras;
    scanf("%lf %lf %lf",&A,&B,&C);
    delta = pow(B,2)-(4*A*C);
    if(A == 0 || delta < 0){
        printf("Impossivel calcular\n");
    }else{
        bhaskarap = (-B + sqrt(delta))/(2*A);
        bhaskaras = (-B - sqrt(delta))/(2*A);
        printf("R1 = %.5f\n",bhaskarap);
        printf("R2 = %.5f\n",bhaskaras);
    }
}