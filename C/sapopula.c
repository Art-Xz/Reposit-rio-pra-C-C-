#include <stdio.h>
#include <stdlib.h>

int main(){
    int p,n,al;
    scanf("%d %d",&p,&n);
    int sal[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&sal[i]);
    }
    
    for (int i = 0; i < n-1; i++)
    {
        if(abs(sal[i]-sal[i+1])>p){
            printf("GAME OVER\n");
            return 0;
        }
    }
    printf("YOU WIN\n");

}