#include <iostream>
using namespace std;
int main(){
    int item,anos,meses,dias;
    cin>>item;
    anos = item/365;
    item = item%365;
    meses = item/30;
    item = item%30;
    dias = item;
    cout<<anos<<" ano(s)\n"<<meses<<" mes(es)\n"<<dias<<" dia(s)\n";
}