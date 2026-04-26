#include <stdio.h>

int main(){
    int num,val=0,mem;
    scanf("%d",&num);
    for (int i = (num-1); i > 0; i--)
    {
        val = num*i;
        num=val;
    }
    printf("%d\n",val);
    
}