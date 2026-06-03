#include <stdio.h>

int main(){
    int esq,dir,p1,p2,c1,c2;
    scanf("%d %d %d %d",&p1,&c1,&p2,&c2);
    esq = p1*c1;
    dir = p2*c2;
    if(esq==dir){
        printf("0\n");
    }

    if(esq>dir){
        printf("-1\n");
    }
    if(esq<dir){
        printf("1\n");
    }
}