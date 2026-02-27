#include <stdio.h>

int main(){
    int dist;
    double gasto,gastopordist;
    scanf("%d %lf",&dist,&gasto);
    gastopordist = dist/gasto;
    printf("%.3f km/l\n",gastopordist);
}