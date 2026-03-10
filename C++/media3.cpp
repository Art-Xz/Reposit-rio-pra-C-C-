#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    double n1,n2,n3,n4,media,n5,nmedia;
    cin>>n1>>n2>>n3>>n4;
    media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    cout<<"Media: "<<std::fixed<<setprecision(1)<<media<<"\n";
    if(media<5.0){
        cout<<"Aluno reprovado.\n";
    }
    if(media>=7){
        cout<<"Aluno aprovado.\n";
    }
    if(media<7.0 and media>=5.0){
        cout<<"Aluno em exame.\n";
        cin>>n5;
        cout<<"Nota do exame: "<<n5<<"\n";
        nmedia = (n5+media)/2;
        if(nmedia>=5){
            cout<<"Aluno aprovado.\n";
        }
        if(nmedia<5){
            cout<<"Aluno reprovado.\n";
        }
        cout<<"Media final: "<<std::fixed<<std::setprecision(1)<<nmedia<<"\n";
    }

}