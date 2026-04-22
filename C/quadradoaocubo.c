#include <stdio.h>

int main(){
    int count,cubo,quad;
    scanf("%d",&count);

    for (int i = 1; i < (count+1); i++)
    {
        cubo=(i*i*i);
        quad=(i*i);
        printf("%d %d %d\n",i,quad,cubo);
    }
    
}