#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double AA;
    cin>>AA;
    double BB;
    cin>>BB;

    double form = (AA*3.5 + BB*7.5)/11;
    std::cout<<"MEDIA = "<<std::fixed<<std::setprecision(5)<<form<<"\n";
}