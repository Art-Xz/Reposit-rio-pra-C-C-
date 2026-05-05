#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums(10);
    for (int i = 0; i < 10; i++)
    {
        cin>> nums[i];
        if(nums[i]<=0){
            nums[i]=1;
        }
    }

    for (int j = 0; j < 10; j++)
    {
        cout<<"X["<<j<<"] = "<<nums[j]<<"\n";
    }
    
    
}