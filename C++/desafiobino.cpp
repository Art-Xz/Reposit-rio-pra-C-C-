#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,dois=0,tres=0,quatro=0,cinco=0;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(v[i]%2==0){
            dois++;
        }
        if(v[i]%3==0){
            tres++;
        }
        if(v[i]%4==0){
            quatro++;
        }
        if(v[i]%5==0){
            cinco++;
        }
    }

    cout<<dois<<" Multiplo(s) de 2\n"<<tres<<" Multiplo(s) de 3\n"<<quatro<<" Multiplo(s) de 4\n"<<cinco<<" Multiplo(s) de 5\n";
    
    
}