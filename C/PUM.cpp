#include <iostream>
using namespace std;

int main(){
    int num=1,counter=0,val;
    cin>>val;
    for (int i = 0; i < (val*3); i++)
    {
        if(counter==3){
            cout<<"PUM\n";
            counter=0;
            num+=1;
        }
        cout<<num<<" ";
        counter+=1;
        num+=1;
    }
    cout<<"PUM\n";
    
}