#include <stdio.h>

int main(){
    double flut;
    int inteiro,ntsqin,moedas;
    scanf("%lf",&flut);
    inteiro = (int)flut;
    
    moedas = (int)((flut-inteiro)*100 + 0.5);
    printf("NOTAS:\n");

    ntsqin = inteiro/100;
    inteiro = inteiro%100;
    
    int ntscin = inteiro/50;
    inteiro = inteiro%50;

    int ntsvin = inteiro/20;
    inteiro = inteiro%20;

    int ntsdez = inteiro/10;
    inteiro = inteiro%10;

    int ntscinc = inteiro/5;
    inteiro = inteiro%5;

    int ntstwo = inteiro/2;
    inteiro = inteiro%2;


    //moedas ---
    int ntsone = inteiro/1;
    inteiro = inteiro%1;
    int mdcinq = moedas/50;
    moedas = moedas%50;
    int mdvin = moedas/25;
    moedas = moedas%25;
    int mddez = moedas/10;
    moedas = moedas%10;
    int mdcinc = moedas/5;
    moedas = moedas%5;
    int mdone = moedas/1;
    moedas = moedas%1;

    printf("%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",
    ntsqin,ntscin,ntsvin,ntsdez,ntscinc,ntstwo,ntsone,mdcinq,mdvin,mddez,mdcinc,mdone);

}