#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
        int jump(vector<int>& nums){
            int totalNoOfJumps = 0;
            int len = nums.size();
            int farthest = 0;
            int currentEnd = 0;
            if(len == 1)return 0;
            if(len == 2 && nums[0] > 0) return 1;
            if(len == 2 && nums[0] <= 0) return 0;
            for (int i = 0; i <= len - 2; i++)
            {
                if(i> farthest) return 0;
                
                if(nums[i] + i > farthest){
                    farthest = nums[i] + i;
                    if(farthest >= len - 1) return totalNoOfJumps + 1;
                }
                if(i == currentEnd){
                    currentEnd = farthest;
                    totalNoOfJumps++;
                }
                if(currentEnd >= len - 1)return totalNoOfJumps + 1;
            }
            return totalNoOfJumps;
        }
};

int main(){

    vector<int>in = {1,2,3};
    Solution s;
    cout<<s.jump(in)<<endl;
    return 0;
}