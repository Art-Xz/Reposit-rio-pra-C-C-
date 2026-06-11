#include <stdio.h>

int main(){
    int a,b,maior=0;
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("%d\n",a);
    }

    if(a>b){
        printf("%d\n",a);
    }
    if(a<b){
        printf("%d\n",b);
    }
}