#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    while(true){
        int n;
        cin>>n;
        if(n==0){break;}
        int m[n][n];
    
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
               m[i][j] = abs(i-j)+1;
            }
    }
    
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout<< setw(3) << m[i][j];
                if(j!=n-1){
                    cout<<" ";
                }
            }
            printf("\n");
        }
        printf("\n");
        }
}