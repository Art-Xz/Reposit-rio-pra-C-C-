#include <iostream>
using namespace std;

int main(){
    int n[1000],val,counter=0;
    cin>>val;
    for(int i = 0; i<1000 ; i++){
        if(counter>=val){counter=0;}
        n[i] = counter;
        counter+=1;
    }
    for (int i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n",i,n[i]);
    }
    
}