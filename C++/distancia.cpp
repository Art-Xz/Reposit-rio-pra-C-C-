#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double x1,x2,y1,y2,valor;
    cin>>x1>>y1;
    cin>>x2>>y2;
    valor = sqrt(pow(x2-x1,2) + pow(y1-y2,2));
    cout<<std::fixed<<std::setprecision(4)<<valor<<"\n";

}