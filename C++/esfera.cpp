#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double raio, result,pi;
    pi = 3.14159;
    cin>>raio;
    result = (4.0/3)*pi*(raio*raio*raio);
    cout<<"VOLUME = "<<std::fixed<<std::setprecision(3)<<result<<"\n";
}