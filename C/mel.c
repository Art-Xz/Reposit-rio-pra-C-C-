#include <stdio.h>

int main(){
    double v,d;
    while(scanf("%lf %lf",&v,&d)==2){
        double area,altura,pi=3.14,r=d/2;
        area = pi*(r*r);
        altura = (4*v)/(pi*(d*d));

        printf("ALTURA = %.2f\nAREA = %.2f\n",altura,area);

    }
}