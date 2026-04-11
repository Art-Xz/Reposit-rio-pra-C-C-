#include <stdio.h>

int main(){
    int A= -1,B= -1,maior,menor,k,soma=0,fim=0;
    while(true){
        scanf("%d %d",&A,&B);
        if(A>B){maior = A;menor=B;}else{maior=B;menor=A;}
        for(k=menor;k<=maior;k++){
            if(k<=0){fim=1;break;}
            printf("%d ",k);
            soma+=k;
        }
        if(fim==1){break;}
        printf("Sum=%d\n",soma);
        soma=0;
    }
}