#include <stdio.h>

int main(){
    int Hi,Mi,Hf,Mf,inicio,fim,dura,totalH,totalM;
    scanf("%d %d %d %d",&Hi,&Mi,&Hf,&Mf);
    inicio = Hi*60+Mi;
    fim = Hf*60+Mf;

    if(fim<=inicio){
        fim+=24*60;
    }
    dura = fim - inicio;
    totalH = dura/60;
    totalM = dura%60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",totalH,totalM);
}