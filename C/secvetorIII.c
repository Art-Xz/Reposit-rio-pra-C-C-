#include <stdio.h>

int main(){
    double n[100],val;
    scanf("%lf",&val);
    for (int i = 0; i < 100; i++)
    {
        n[i] = val;
        val = val/2;
    }
    for (int i = 0; i < 100; i++)
    {
        printf("N[%d] = %.4f\n",i,n[i]);
    }
    
}