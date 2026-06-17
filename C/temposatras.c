#include <stdio.h>

int main(){
    int ano, t,sla;
    scanf("%d",&sla);

    for (int i = 0; i < sla; i++)
    {
        scanf("%d",&ano);
        if(ano<2015){
            t = 2015-ano;
            printf("%d D.C.\n",t);
        }
        if(ano>=2015){
            t = ano-2014;
            printf("%d A.C.\n",t);
        }
    }
    
}