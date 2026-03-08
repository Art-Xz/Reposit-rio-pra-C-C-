#include <iostream>
using namespace std;

int main(){
    double num;
    cin>>num;
    if(num<0 || num>100){
        printf("Fora de intervalo\n");
    }else{
        if(num<=25 and num>=0){
            printf("Intervalo [0,25]\n");
        }
        if(num<=50 and num>25){
            printf("Intervalo (25,50]\n");
        }
        if(num>50 and num<=75){
            printf("Intervalo (50,75]\n");
        }
        if(num>75 and num<=100){
            printf("Intervalo (75,100]\n");
        }
    }
}