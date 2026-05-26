#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    while(true){
        int R;
        cin>>R;
        if(R==0){
            break;
        }
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < R; j++)
            {
                int dist = min(
                    min(i,j), min(R-i-1, R-j-1));
                printf("%3d",dist + 1);
                if(j!=R-1){
                    printf(" ");
                }

            }
            printf("\n");
        }
        printf("\n");
    }
}