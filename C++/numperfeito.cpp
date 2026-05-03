#include <iostream>
using namespace std;

int main(){
    int val;
    cin>>val;
    for (int j = 0; j < val; j++)
    {
        int num,sum=0;

        cin>>num;
        for (int i = 1; i < num; i++)
        {
            if(num%i==0){sum+=i;}
        }
        if(sum==num){
            printf("%d eh perfeito\n",num);
        } else {
            printf("%d nao eh perfeito\n",num);
        }
    }
    

    
    
}