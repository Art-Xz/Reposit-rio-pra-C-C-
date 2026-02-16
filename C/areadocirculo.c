#include <stdio.h>

int main(){
    double PI = 3.14159;
    double raio;
    scanf("%lf",&raio);
    double area = PI*(raio*raio);

    printf("A=%.4f\n",area);
}