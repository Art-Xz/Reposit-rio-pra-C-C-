#include <stdio.h>
#include <string.h>

int main(){
    char num[50];
    scanf("%49s",num);
    int tamanho = strlen(num),counter=0;
    for (int i = tamanho-1; i != -1; i--)
    {
        printf("%c",num[i]);
    }
    printf("\n");
    
}