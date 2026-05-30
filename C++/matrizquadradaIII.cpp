#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    while (true)
    {
        int n,start=1, val = start;
        cin>>n;
        if(n==0){break;}
        int m[n][n];
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                m[i][j] = start;
                start = start*2;
            }
            start = val*2;
            val = val*2;
        }
        int maior = m[n-1][n-1];
        int largura = to_string(maior).size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(j==0){
                    cout<< setw(largura)<<m[i][j];
                } else {
                    cout<<" "<< setw(largura)<<m[i][j];
                }
            }
            cout<<"\n";
        }
        cout<<"\n";
        }
    
}