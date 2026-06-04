#include <iostream>
using namespace std;

int main(){
    int n,l;
    
    while(cin>>n){
        int maior = 0;
        for (int i = 0; i < n; i++)
    {
        cin>>l;
        if(maior<l){
            maior = l;
        }
    }
    
        if(maior< 10){
            cout<<"1\n";
        }else if(maior<20){
            cout<<"2\n";
        }else{
            cout<<"3\n";
        }
    }
}