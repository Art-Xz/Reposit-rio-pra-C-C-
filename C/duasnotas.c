#include <stdio.h>

int main(){
    while (1)
    {
        int notas[] = {2,5,10,20,50,100};

        int n,m,troco,pass=0;
        scanf("%d %d",&n,&m);
        if(n==0&&m==0){
            break;
        }

        troco = m-n;

        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                if(notas[i]+notas[j]==troco){
                    pass = 1;
                }
            }
            
        }
        if(pass==1){
            printf("possible\n");
        } else {
            printf("impossible\n");
        }
    }
    
    
}