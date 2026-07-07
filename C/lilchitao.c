#include <stdio.h>
#include <string.h>

int main(){
    int n;
    double s;
    char str[10001];

    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s",str);
        s = (double)strlen(str)/100;
        printf("%.2f\n", s);
    }
    
}