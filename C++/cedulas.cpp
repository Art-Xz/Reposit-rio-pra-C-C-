#include <iostream>
using namespace std;

int main(){
    int inteiro,ntsqin;
    cin>>inteiro;
    cout<<inteiro<<"\n";

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

    int ntsone = inteiro/1;
    inteiro = inteiro%1;

    cout<<ntsqin<<" nota(s) de R$ 100,00\n"<<ntscin<<" nota(s) de R$ 50,00\n"<<ntsvin<<" nota(s) de R$ 20,00\n"<<ntsdez<<" nota(s) de R$ 10,00\n"<<ntscinc<<" nota(s) de R$ 5,00\n"<<ntstwo<<" nota(s) de R$ 2,00\n"<<ntsone<<" nota(s) de R$ 1,00\n";

}