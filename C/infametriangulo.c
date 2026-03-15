#include <stdio.h>
#include <math.h>
int main(){
    double A,B,C,d;
    scanf("%lf %lf %lf",&A,&B,&C);
    if(A<B){d = A; A = B; B = d;}
    if(A<C){d = A; A = C; C = d;}
    if(B<C){d = B; B = C; C = d;}
    if(A >= B+C){
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if(pow(A,2)==(pow(B,2)+pow(C,2))){
            printf("TRIANGULO RETANGULO\n");
        }
        if(pow(A,2) > (pow(B,2) + pow(C,2))){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(pow(A,2) < (pow(B,2)+pow(C,2))){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(A == B && A==C){
            printf("TRIANGULO EQUILATERO\n");
        }else{
            if(A==B || A==C || B==C){
                printf("TRIANGULO ISOSCELES\n");
            }
        }
        
    }
}