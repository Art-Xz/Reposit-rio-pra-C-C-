#include <stdio.h>
int main(){
    int x,y,maior,menor,soma=0;
    scanf("%d %d",&x,&y);
    if(x>y){maior=x;menor=y;} else {maior=y;menor=x;}
    for (int i = menor; i <= maior; i++)
    {
        if(i%13!=0){
            soma+=i;
        }
    }
    printf("%d\n",soma);
}