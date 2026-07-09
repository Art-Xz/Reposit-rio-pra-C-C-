#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int n;
    double p,m;
    cin>>n;
    double nat = log(n);
    p = n/nat;
    m = 1.25506*(n/nat);

    printf("%.1f %.1f\n",p,m);
}