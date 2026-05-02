#include <stdio.h>
#include <stdbool.h>

int main() {
    int x;
    bool a=1,b=1;
    while(a){
        int sum=0,counter=0;
        scanf("%d",&x);
        if(x==0){break;}
        while(b){
            if(counter==5){b=0;}
            if(x%2==0){
                sum+=x;
                counter+=1;
            }
            x+=1;
        }
        b=1;
        printf("%d\n",sum);
    }
}