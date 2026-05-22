#include <iostream>
using namespace std;

int main(){
    double soma=0,media=0;
    int val,v=12,counter = 0;
    double m[v][v] = {0};
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
            if(j>i && i+j < 11){
                soma+=m[i][j];
                counter+=1;
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