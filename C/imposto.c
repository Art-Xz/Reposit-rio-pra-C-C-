#include <stdio.h>

int main(){
    double imp,sal;
    scanf("%lf",&sal);
    if(sal>=0 && sal <=2000){
        printf("Isento\n");
    } else{
        if(sal>4500){
            imp += (sal-4500)*0.28;
            sal = 4500;
    }
        if(sal>3000){
            imp += (sal-3000)*0.18;
            sal = 3000;
    }
        if(sal>2000){
            imp += (sal-2000)*0.08;
    }
    printf("R$ %.2f\n",imp);
}
}