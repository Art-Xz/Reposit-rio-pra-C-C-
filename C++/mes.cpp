#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int mes;
    cin>>mes;
    vector<string> meses = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    cout<< meses[mes-1]<<endl;
}