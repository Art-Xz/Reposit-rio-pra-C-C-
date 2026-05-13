#include <iostream>
using namespace std;

int main(){
    int val;
    cin>>val;
    for (int i = 0; i <= val; i++)
    {
        if(i<(val-1)){
            cout<<"Ho ";
        }
        if(i>=(val)){
            cout<<"Ho!\n";
        }
    }
    
}