#include <stdio.h>

int main(){
    int ent,menor=10000,index;
    scanf("%d",&ent);
    int num[ent];
    for (int i = 0; i < ent; i++)
    {
        scanf("%d",&num[i]);
    }
    
    for (int i = 0; i < ent; i++)
    {
        if(num[i]<menor){menor=num[i]; index = i;}
    }
    
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n",index);
    
}