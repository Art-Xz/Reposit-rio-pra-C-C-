#include <iostream>
using namespace std;

int main(){
    int A,B,C,D;
    cin>>A>>B;
    C = B%A;
    D = A%B;
    if(C == 0 || D == 0){
        cout<<"Sao Multiplos\n";
    } else{
        cout<<"Nao sao Multiplos\n";
    }
}