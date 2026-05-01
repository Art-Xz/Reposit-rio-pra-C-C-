#include <iostream>
using namespace std;

int main() {
    int a,x,y;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        int soma=0,count=0;
        cin>>x>>y;
        for (int j = x; count < y; j++)
        {
            if(j%2!=0){
                count+=1;
                soma+=j;
            }
        }
        cout<<soma<<"\n";
        
    }
    
}