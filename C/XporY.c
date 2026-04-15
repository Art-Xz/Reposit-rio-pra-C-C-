#include <stdio.h>

int main(){
    int X,Y,val;
    double div;
    scanf("%d",&val);
    for (int i = 0; i < val; i++)
    {
        scanf("%d %d",&X,&Y);
        if(Y==0){
            printf("divisao impossivel\n");
        } else {
            div = (double)X/Y;
            printf("%.1f\n",div);
        }
    }
    
}