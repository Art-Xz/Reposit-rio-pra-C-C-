#include <iostream>
using namespace std;

int main(){
    int A,B,tempo;
    cin>>A>>B;
    tempo = 24-A+B;
    if(tempo>24){
        tempo-=24;
    }
    cout<<"O JOGO DUROU "<<tempo<<" HORA(S)\n";
}