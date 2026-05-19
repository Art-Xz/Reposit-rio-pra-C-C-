#include <iostream>
using namespace std;

int main(){
    double soma=0,media=0;
    int val,v=12;
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
            if(i>j){
                soma+=m[i][j];
            }
        }
        
    }
    media = soma/66;

    //-------------------
    if(ope=="S"){
        printf("%.1f\n",soma);
    } else {
        printf("%.1f\n",media);
    }
}