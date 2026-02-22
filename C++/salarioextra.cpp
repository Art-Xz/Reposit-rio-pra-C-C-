#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double fixo,vendas,total;
    string nome;
    cin>>nome>>fixo>>vendas;
    
    total = fixo+(vendas*0.15);
    cout<<"TOTAL = R$ "<<std::fixed<<std::setprecision(2)<<total<<"\n";
}