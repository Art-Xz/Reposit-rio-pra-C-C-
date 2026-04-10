#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    float i = 0;
    for(i=0;i<=2.2;i+=0.2){
        for(int j=1;j<=3;j++){
            float J = j + i;
            cout<<fixed<<setprecision(1);
            if(fabs(fmod(i,1.0))< 1e-9&&fabs(fmod(J,1.0))< 1e-9){
                cout<<"I="<<(int)i<<" J="<<(int)J<<endl;
            } else {
                cout<<"I="<<i<<" J="<<J<<endl;
            }
        }
    }
}

//o float/double tá mt preciso. inacabado