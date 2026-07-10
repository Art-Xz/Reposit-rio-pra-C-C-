#include <stdio.h>
#include <string.h>
int main(){
    char text[501];

    fgets(text,501,stdin);

    text[strcspn(text,"\n")] = '\0';
    int tamanho = strlen(text);
    if(tamanho>80){
        printf("NO\n");
    } else {
        printf("YES\n");
    }

}