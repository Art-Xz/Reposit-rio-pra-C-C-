#include <stdio.h>
#include <stdlib.h>


int main(){
    int w,x,y,z;
    int aw,ax,ay,az;
    int dia,hora,minuto,segundo,dif;
    scanf("Dia %d",&w);
    scanf("%d : %d : %d",&x,&y,&z);
    scanf(" Dia %d",&aw);
    scanf("%d : %d : %d", &ax, &ay, &az);

    int difh = (w*86400) + (x*3600) + (y*60) + z;
    int difha = (aw*86400) + (ax*3600) + (ay*60) + az;
    int diftotal = difha - difh;
    
    
    dia = diftotal/86400;
    diftotal %= 86400;
    hora = diftotal/3600;
    diftotal %= 3600;
    minuto = diftotal/60;
    segundo = diftotal % 60;

    printf("%d dia(s)\n",dia);
    printf("%d hora(s)\n",hora);
    printf("%d minuto(s)\n",minuto);
    printf("%d segundo(s)\n",segundo);
    
}