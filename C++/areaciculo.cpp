#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double PI = 3.14159;
    double raio;
    cin>>raio;
    double formula = PI*(pow(raio,2));
    std::cout<<"A="<<std::fixed<<std::setprecision(4)<<formula<<"\n";
    

}