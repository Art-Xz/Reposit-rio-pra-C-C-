#include <iostream>
using namespace std;

int main(){
    double soma=0,media=0;
    int v=12,counter = 0;
    double m[12][12] = {0};
    string ope;
    cin>>ope;
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cin>>m[i][j];
        }
        
    }
    //soma------------
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if(j<i && j < 11 -i){
                soma += m[i][j];
                counter++;
            }
        }
        
    }
    media = soma/counter;

    //-------------------
    if(ope=="S"){
        printf("%.1f\n",soma);
    } else {
        printf("%.1f\n",media);
    }
}