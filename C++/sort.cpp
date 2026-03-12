#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c;
    if(a<b and a<c){
        cout<<a<<"\n";
        if(c<b){
            cout<<c<<"\n";
            cout<<b<<"\n";
        }else{
            cout<<b<<"\n";
            cout<<c<<"\n";
        }
    }
    if(b<a and b<c){
        cout<<b<<"\n";
        if(a<c){
            cout<<a<<"\n";
            cout<<c<<"\n";
        }else{
            cout<<c<<"\n";
            cout<<a<<"\n";
        }
    }
    if(c<b and c<a){
        cout<<c<<"\n";
        if(a<b){
            cout<<a<<"\n";
            cout<<b<<"\n";
        }else{
            cout<<b<<"\n";
            cout<<a<<"\n";
        }
    }
    cout<<"\n";
    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<c<<"\n";

}