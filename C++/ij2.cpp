#include <iostream>
using namespace std;

int main(){
    int i = 1;
    while(i<=9){
        for ( int j = 7; j >= 5; j--)
        {
            printf("I=%d J=%d\n",i,j);
        }
        i+=2;
    }
    
}