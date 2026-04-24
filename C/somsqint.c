#include <stdio.h>

int main (){
    int a,n,sum;
    scanf("%d %d",&a,&n);
    while(n<=0){
        scanf("%d",&n);
    }
    sum = (n*(2*a+(n-1)))/2;
    printf("%d\n",sum);
}