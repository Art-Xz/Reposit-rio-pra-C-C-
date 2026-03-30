#include <stdio.h>

int main(){
    int A,B,C=0;
    scanf("%d %d",&A,&B);
    int inicio = (A < B) ? A : B;
    int fim = (A>B) ? A : B;
    for (int i = inicio+1; i < fim; i++)
    {
        if(i%2!=0){
            C+=i;
        }
    }
    printf("%d\n",C);
    
}