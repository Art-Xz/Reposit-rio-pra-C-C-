#include <iostream>
using namespace std;

int main(){
    int counter = 0, val;
    cin>>val;
    while (true)
    {
        if(val%2 != 0){
            cout<<val<<"\n";
            counter+=1;
            if(counter==6){break;}
        }
        val+=1;
    }
    
}

