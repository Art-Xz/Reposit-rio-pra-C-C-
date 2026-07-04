#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>resultado;

        for(int i=0;i < n;i++){
            resultado.push_back(nums[i]);
            resultado.push_back(nums[i+n]);
        }
        return resultado;
    }
};