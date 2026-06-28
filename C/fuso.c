#include <stdio.h>

int main(){
    int a,b,c,d;

    scanf("%d %d %d",&a,&b,&c);
    d = a+b+c;
    if(d>=24){
        d-=24;
    }
    if(d<0){
        d+=24;
    }
    printf("%d\n",d);
}