#include <iostream>
using namespace std;

int main(){
    int par=0,impar=0,posi=0,negat=0,valor;
    for ( int i = 0; i < 5; i++)
    {
        cin>>valor;
        if (valor%2==0){
            par++;
        }
        if (valor%2!=0){
            impar++;
        }
        if (valor<0){
            negat++;
        }
        if (valor>0){
            posi++;
        }
    }
    cout<<par<<" valor(es) par(es)\n";
    cout<<impar<<" valor(es) impar(es)\n";
    cout<<posi<<" valor(es) positivo(s)\n";
    cout<<negat<<" valor(es) negativo(s)\n";
}