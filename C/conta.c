#include <stdio.h>

int main(){
    int c;
    scanf("%d",&c);
    for (int i = 0; i < c; i++)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0){
            printf("0\n");
        } else {
            printf("1\n");
        }
    }
    
}