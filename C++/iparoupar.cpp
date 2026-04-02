#include <iostream>
using namespace std;

int main(){
    int val,num;
    cin>>val;
    for (int i = 0; i < val; i++)
    {
        cin>>num;
        if(num == 0){
            printf("NULL\n");
        } else{
        if(num%2==0){
            printf("EVEN ");
        }
        if(num%2!=0){
            printf("ODD ");
        }
        if(num>0){
            printf("POSITIVE\n");
        }
        if(num<0){
            printf("NEGATIVE\n");
        }

        
        
        
    }}}