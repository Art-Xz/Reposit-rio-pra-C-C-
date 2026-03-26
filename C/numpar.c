#include <stdio.h>

int main (){
    int val,counter=0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&val);
        if(val%2==0){
            ++counter;
        }
    }
    printf("%d valores pares\n",counter);
}