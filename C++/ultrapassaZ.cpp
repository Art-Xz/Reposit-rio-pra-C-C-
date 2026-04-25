#include <iostream>
using namespace std;

int main (){
    int x,z,sum=0,counter=0;
    cin>>x>>z;
    while (z<=x)
    {
        cin>>z;
    }
    while (true)
    {
        sum+=x;
        x+=1;
        counter+=1;
        if(sum>z){
            cout<<counter<<"\n";
            break;
        }
    }
    
}