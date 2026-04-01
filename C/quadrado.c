#include <stdio.h>

int main(){
    int val,quadrado;
    scanf("%d",&val);
    for (int i = 1; i <= val; i++)
    {
        if (i%2==0){
            quadrado = i*i;
            printf("%d^2 = %d\n",i,quadrado);
        }
    }
    
}