#include <stdio.h>

int main(){
    int a,b,atraso=0;
    while(scanf("%d:%d",&a,&b)==2){
        
        int horario = a*60+b+60;
        int inicio= 8*60;
        atraso = horario - inicio;
        if(atraso<0){atraso =0;}
        printf("Atraso maximo: %d\n",atraso);
    }

}