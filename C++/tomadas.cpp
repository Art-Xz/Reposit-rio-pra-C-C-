#include <iostream>
using namespace std;

int main(){
    int soma=0,val;

    for (int i = 0; i < 4; i++)
    {
        cin>>val;
        soma+=val;
    }
    soma= soma-3;
    cout<<soma<<"\n";
}