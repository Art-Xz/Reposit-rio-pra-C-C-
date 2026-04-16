#include <iostream>
using namespace std;

int main(){
    int counter=0;
    double media=0,nota;
    while(true){
        if(counter==2){break;}
        cin>>nota;
        if(nota<0 || nota>10){
            printf("nota invalida\n");
        } else {
            media+=nota;
            counter+=1;
        }
    }
    media = media/2;
    printf("media = %.2f\n",media);
}