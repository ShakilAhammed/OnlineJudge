#include<iostream>
#include<vector>
#include <climits>

using namespace std;

class Solution{
    public:
     int maxSubArray_my_solution(vector<int>&nums){
        int globalMax = 0;
        int localMax = 0;
        int size = nums.size();
        //handle negative case here
        int trackNegativeCase = INT_MIN;
        bool isNegative = true;
        for (int i = 0; i < size; i++)
        {
            if(nums[i] < 0){
                if(trackNegativeCase < nums[i]){
                    trackNegativeCase = nums[i];
                }
            }
            else {
                isNegative = false;
                break;
            }
        }
        if(isNegative){
            return trackNegativeCase;
        }
        

        for (int i = 0; i < size; i++)
        {
            if(nums[i] + localMax > 0){
                localMax+= nums[i];
                if(localMax > globalMax){
                    globalMax = localMax;
                }
            }
            else{
                localMax = 0;
            }
        }

        return globalMax;
        
     }
     //after watching others implementation, implemented again. this is so cool;
     int maxSubArray(vector<int>&nums){
        int globalMax = 0;
        int localMax = 0;
        int size = nums.size();
        for (auto i : nums)
        {
            //this is where -ve is being handled wonderfully!!!
            localMax = max(i, localMax + i);
            globalMax = max(globalMax, localMax);
        }
        return globalMax;
     }
};

int main(){
    Solution s;
    vector<int>in = {-1};
    cout<<s.maxSubArray(in)<<endl;
    return 0;
}