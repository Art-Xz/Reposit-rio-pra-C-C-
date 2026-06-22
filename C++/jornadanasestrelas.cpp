#include <iostream>
using namespace std;

int main(){
    int est_num,num,esttaq=0;
    long long soma=0;
    cin>>est_num;
    int est[est_num],atk[est_num] = {false};

    for (int i = 0; i < est_num; i++)
    {
        cin>>est[i];
    }
    
    for (int i = 0; i < est_num && i>=0; i=i)
    {
        if(!atk[i]){
            atk[i] = true;
            esttaq++;
        }
        if(est[i]%2==0){
            if(est[i]>0){
                est[i]--;
            }
            i--;
        } else {
            if(est[i]>0){
                est[i]--;
            }
            i++;
        }
    }
    for (int i = 0; i < est_num; i++)
    {
        soma+=est[i];
    }
    printf("%d %lld\n",esttaq,soma);
    
    exit(0);
}