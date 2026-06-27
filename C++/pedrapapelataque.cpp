#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string a,b;
        cin>>a>>b;
        if(a=="ataque" && b=="pedra"){
            printf("Jogador 1 venceu\n");
        }
        if(a=="pedra" && b=="ataque"){
            printf("Jogador 2 venceu\n");
        }
        if(a=="pedra" && b=="papel"){
            printf("Jogador 1 venceu\n");
        }
        if(a=="papel" && b=="pedra"){
            printf("Jogador 2 venceu\n");
        }
        if(a=="ataque" && b=="papel"){
            printf("Jogador 1 venceu\n");
        }
        if(a=="papel" && b=="ataque"){
            printf("Jogador 2 venceu\n");
        }
        if(a=="papel" && b=="papel"){
            printf("Ambos venceram\n");
        }
        if(a=="pedra" && b=="pedra"){
            printf("Sem ganhador\n");
        }
        if(a=="ataque" && b=="ataque"){
            printf("Aniquilacao mutua\n");
        }
    }
    
}