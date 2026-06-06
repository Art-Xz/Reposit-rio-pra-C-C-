#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,forca;
    cin>>n;
    string nome;
    for (int i = 0; i < n; i++)
    {
        cin>>nome;
        cin>>forca;
        if(nome=="Thor"){
            cout<<"Y\n";
        } else {
            cout<<"N\n";
        }

    }
    
}