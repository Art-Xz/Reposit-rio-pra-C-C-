#include <stdio.h>

int main(){
    int val;
    double a,b,c,media;
    scanf("%d",&val);
    for (int i = 0; i < val; i++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        media = ((a*2)+(b*3)+(c*5))/10;
        printf("%.1f\n",media);
    }
    
}