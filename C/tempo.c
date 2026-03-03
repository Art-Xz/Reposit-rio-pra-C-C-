#include <stdio.h>

int main(){
    int tempo,minutos,horas,segundos;
    scanf("%d",&tempo);
    horas = tempo/3600;
    tempo = tempo%3600;
    minutos = tempo/60;
    tempo = tempo%60;
    

    printf("%d:%d:%d\n",horas,minutos,tempo);
}