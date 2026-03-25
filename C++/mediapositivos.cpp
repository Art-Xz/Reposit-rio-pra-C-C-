#include <iostream>
#include <list>
#include <numeric>
using namespace std;

int main(){
    int counter;
    double valor,soma,valor2;
    list<double> nums;
    counter = 0;
    for ( int i = 0; i < 6; i++)
    {
        cin>>valor;
        if (valor>0){
            ++counter;
            nums.push_front(valor);
        }
    }
    soma = std::accumulate(nums.begin(),nums.end(),0.0);
    valor2 = soma/counter;
    cout<<counter<<" valores positivos\n";
    printf("%.1f\n",valor2);
}