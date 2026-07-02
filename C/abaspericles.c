#include <stdio.h>
#include <string.h>
int main(){
    int n,m;
    char act[50];
    scanf("%d %d",&n,&m);
    for (int i = 0; i < m; i++)
    {
        scanf("%s",act);
        if(strcmp(act,"fechou")==0){
            n++;
        }
        if(strcmp(act,"clicou")==0){
            n--;
        }
    }

    printf("%d\n",n);
    
}