#include <iostream>
using namespace std;

int main(){
    int counter;
    double valor;
    counter = 0;
    for ( int i = 0; i < 6; i++)
    {
        cin>>valor;
        if (valor>0){++counter;}
    }
    cout<<counter<<" valores positivos\n";
}