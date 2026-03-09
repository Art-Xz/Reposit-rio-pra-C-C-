#include <stdio.h>

int main(){
    int cod,quant;
    double valor;

    scanf("%d %d",&cod,&quant);

    if(cod == 1){
        valor = 4.00 * quant;
    }
    if(cod == 2){
        valor = 4.50 * quant;
    }
    if(cod == 3){
        valor = 5.00 * quant;
    }
    if(cod == 4){
        valor = 2.00 * quant;
    }
    if(cod == 5){
        valor = 1.50 * quant;
    }
    printf("Total: R$ %.2f\n",valor);
}