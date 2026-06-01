#include <stdio.h>

int main(){
    int report;
    while(scanf("%d",&report)==1){
        if(report>0){
            printf("vai ter duas!\n");
        } else {
            printf("vai ter copa!\n");
        }
    }
}