#include <iostream>
using namespace std;

int main(){
    int par[5],impar[5],counterP=0,counterI=0,val;

    for (int i = 0; i < 15; i++)
    {
        if(counterP>=5){
            for (int x = 0; x < 5; x++)
            {
                printf("par[%d] = %d\n",x,par[x]);
            }
            counterP=0;
        }
        if(counterI>=5){
            for (int x = 0; x < 5; x++)
            {
                printf("impar[%d] = %d\n",x,impar[x]);
            }
            counterI=0;
        }
        cin>>val;
        if(val%2==0){
            par[counterP]=val;
            counterP+=1;
        } else {
            impar[counterI]=val;
            counterI+=1;
        }
        
    }
    for (int i = 0; i < counterI; i++)
    {
        printf("impar[%d] = %d\n",i,impar[i]);
    }
    for (int i = 0; i < counterP; i++)
    {
        printf("par[%d] = %d\n",i,par[i]);
    }
    
 
}