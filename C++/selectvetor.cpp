#include <iostream>
using namespace std;

int main(){
    double num[100];
    for (int i = 0; i < 100; i++)
    {
        cin>>num[i];
    }

    for (int i = 0; i < 100; i++)
    {
        if(num[i]<=10){
            printf("A[%d] = %.1f\n",i,num[i]);
        }
    }
    
    
}