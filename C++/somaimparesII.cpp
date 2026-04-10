#include <iostream>
using namespace std;

int main(){
    int n,maior,menor;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,soma=0;
        cin>>a>>b;
        if(a>b){maior=a;menor=b;}else{maior=b;menor=a;}
        for(menor+=1;menor<maior;menor++){
            if(menor%2!=0){
                soma+=menor;

            }
        }
        printf("%d\n",soma);
    }
}
