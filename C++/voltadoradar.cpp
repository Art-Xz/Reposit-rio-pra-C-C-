#include <iostream>
using namespace std;

int main(){
    int t,n;

    while(true){
        cin>>t;
        if(t==0){
            break;
        }
        for (int i = 0; i < t; i++)
        {
            int total;
            cin>>n;
            if(n%2==0){
                total = (2*1)+(n-2)*2;
                cout<<total<<"\n";
            } else {
                total = (1*1)+(n-1)*2;
                cout<<total<<"\n";
            }
        }
    }
    
}