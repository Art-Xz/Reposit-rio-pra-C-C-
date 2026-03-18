#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double salario,aumento;
    cin>>salario;

    if(salario>=0 and salario<=400){
        aumento = salario*0.15;
        salario+=aumento;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<salario<<"\n";
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<aumento<<"\n";
        cout<<"Em percentual: 15 %\n";
    }else{
        if(salario>400 and salario<=800){
            aumento = salario*0.12;
            salario+=aumento;
            cout<<"Novo salario: "<<fixed<<setprecision(2)<<salario<<"\n";
            cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<aumento<<"\n";
            cout<<"Em percentual: 12 %\n";
    }

    if(salario>800 and salario<=1200){
        aumento = salario*0.10;
        salario+=aumento;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<salario<<"\n";
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<aumento<<"\n";
        cout<<"Em percentual: 10 %\n";
    }else{
        if(salario>1200 and salario<=2000){
            aumento = salario*0.07;
            salario+=aumento;
            cout<<"Novo salario: "<<fixed<<setprecision(2)<<salario<<"\n";
            cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<aumento<<"\n";
            cout<<"Em percentual: 7 %\n";
        }else{
            if(salario>2000){
        aumento = salario*0.04;
        salario+=aumento;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<salario<<"\n";
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<aumento<<"\n";
        cout<<"Em percentual: 4 %\n";
        }}
}

}}