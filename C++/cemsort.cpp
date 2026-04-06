#include <iostream>
using namespace std;

int main(){
    int val,maior=0,indice;
    for (int i = 0; i < 100; i++)
    {
        cin>>val;
        if(val>maior){
            maior = val;
            indice = i+1;
        }
    }
    cout<<maior<<"\n"<<indice<<"\n";
    
}