#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    for (int i = 0; i < a; i++)
    {
        int r1,r2,soma=0;
        scanf("%d %d",&r1,&r2);
        soma=r1+r2;
        printf("%d\n",soma);
    }
    
}