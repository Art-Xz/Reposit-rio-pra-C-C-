#include <iostream>
using namespace std;

int main() {
    int idade,val=0,counter=0;
    double media;
    while (true)
    {
        cin>>idade;
        if(idade<0){break;} else {counter+=1;}
        val+=idade;
    }
    media = (double)val/counter;
    printf("%.2f\n",media);
}