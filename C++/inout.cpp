#include <iostream>
using namespace std;

int main(){
    int val,dentro=0, fora=0,num;
    cin>>val;
    for (int i = 0; i < val; i++)
    {
        cin>>num;
        if(num>=10 && num<=20){
            dentro+=1;
        } else{
            fora+=1;
        }
    }
    cout<<dentro<<" in\n"<<fora<<" out\n";
    
}