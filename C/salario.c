#include <stdio.h>

int main(){
    int num,hour;
    double sal,total;
    scanf("%d %d %lf",&num,&hour,&sal);
    total = hour*sal;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",num,total);
}