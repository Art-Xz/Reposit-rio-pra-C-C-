#include <iostream>
using namespace std;

int main(){
    double s=1,owo=1.0,abc=2.0;
    int counter=0;

    while(counter !=19){
        owo +=2;
        s+=owo/abc;
        abc= abc*2;
        counter+=1;
    }
    printf("%.2f\n",s);
}