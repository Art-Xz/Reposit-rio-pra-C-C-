#include <stdio.h>

int main(){
    int i = 1,j=7;
    while (i<=9)
    {
        int min=(j-2);
        while (j>=min)
        {
            printf("I=%d J=%d\n",i,j);
            j--;
        }
        j+=5;
        i+=2;
        
    }
    
}