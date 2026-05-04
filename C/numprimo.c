#include <stdio.h>

int main() {
    int val;
    scanf("%d",&val);

    for (int i = 0; i < val; i++)
    {
        int num,flag=0;
        scanf("%d",&num);
        for (int j = 2; j < num; j++)
        {
            if(num%j==0){flag=1;}
        }

        if(flag==1){
            printf("%d nao eh primo\n",num);
        } else {
            printf("%d eh primo\n",num);
        }
        
    }
    
}