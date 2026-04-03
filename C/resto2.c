#include <stdio.h>

int main(){
    int val;
    scanf("%d",&val);
    for (int i = 1; i <= 10000; i++)
    {
        if(i%val==2){
            printf("%d\n",i);
        }
    }
    
}