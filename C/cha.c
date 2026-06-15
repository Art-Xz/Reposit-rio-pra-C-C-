#include <stdio.h>

int main(){
    int cha,ent,count=0;
    scanf("%d",&cha);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&ent);
        if(ent==cha){
            count++;
        }
    }
    printf("%d\n",count);
    
}