#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
    vector<int> productExceptSelf(vector<int>&nums){
        vector<int>left(nums.size());
        vector<int>right(nums.size());
        vector<int>result(nums.size());
        int il = nums.size();

        int leftMul = 1, rightMul = 1;
        left[0] = 1;
        right[il-1] = 1;

        for (int i = 1; i < il; i++)
        {
            leftMul *= nums[i-1];
            left[i] = leftMul;
        }
        
        for (int i = il-2; i >= 0; i--)
        {
            rightMul *= nums[i+1];
            right[i] = rightMul;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            result[i] = left[i] * right[i];
        }
        
        return result;
    }
};

int main(){

    return 0;
}