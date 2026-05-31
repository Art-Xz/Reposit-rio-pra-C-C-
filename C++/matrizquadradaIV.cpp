#include <iostream>
using namespace std;

int main(){
    int n;

    while (cin>>n)
    {
        int limit = n/3;
        int m[n][n];
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(j == n-1-i){
                    m[i][j] = 3;
                } else if(i==j) {
                    m[i][j] = 2;
                } else {m[i][j] = 0;}
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i>=limit && i<n - limit && j >= limit && j<n-limit){
                    m[i][j] = 1;
                }
            }
            
        }

        if(n%2!=0){
            int metade = n/2;
            m[metade][metade] = 4;
        }
        
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<m[i][j];
            }
            cout<<"\n";
        }
        cout<<"\n";
        }
    
    

}