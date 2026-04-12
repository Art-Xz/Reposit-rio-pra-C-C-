#include <iostream>
using namespace std;

int main(){
    int A,B,flagd,flagc;
    while(true){
        cin>>A>>B;
        if(A==B){break;}
        if(A>B){
            flagd =1;
            flagc =0;
        }
        if(B>A){
            flagc=1;
            flagd=0;
        }
        if(flagd == 1){
            printf("Decrescente\n");
            flagc = 0;
        } else {
            printf("Crescente\n");
            flagd = 0;
        }
    
    }
}