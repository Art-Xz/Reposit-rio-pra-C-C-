#include <stdio.h>

int main() {
    int num=0,alcool=0,gaso=0,diesel=0;
    while(num!=4){
        scanf("%d",&num);
        if(num==1){alcool+=1;}
        if(num==2){gaso+=1;}
        if(num==3){diesel+=1;}
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alcool,gaso,diesel);
}