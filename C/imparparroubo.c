#include <stdio.h>

int main(){
    int p,j1,j2,r,a,flag=0;
    scanf("%d %d %d %d %d",&p,&j1,&j2,&r,&a);

    if(p==1){
        if((j1+j2)%2==0){
            flag=1;
        } else {
            flag = 2;
        }
    } else {
        if((j1+j2)%2==1){
            flag=1;
        } else {
            flag=2;
        }
    }

    if(r==1 && a == 0){
        flag= 1;
    } else if(r==1 && a == 1){
        flag= 2;
    } else if(r==0 && a == 1){
        flag= 1;
    }

    printf("Jogador %d ganha!\n",flag);

}