#include <iostream>
using namespace std;

int main (){
    while (true)
    {
        int entrada;
        cin>>entrada;
        if (entrada==0){break;}

        for (int i = 1; i <= entrada; i++)
        {
            if (i == entrada){
                printf("%d\n",i);
            } else {
                printf("%d ",i);
            }
        }
    }
}