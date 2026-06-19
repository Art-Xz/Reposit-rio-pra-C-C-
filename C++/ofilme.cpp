#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a,b,dif,c;
    cin>>a>>b;
    dif = b-a;
    if(dif<0){
        dif = dif*(-1);
    }
    c= dif/a;
    c = c*100;
    cout<<fixed<<setprecision(2)<<c<<"%\n";
}