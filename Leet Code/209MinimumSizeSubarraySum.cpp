#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {

        int sz = nums.size();
        if (sz == 1)
        {
            if (nums[0] >= target)
                return 1;
            else
                return 0;
        }
        int left = 0;
        int right = 0;
        int currMinIndex = INT_MAX;
        int sum = nums[left];
        while (left <= right && right < sz && left < sz)
        {
            if(left == right && left) {
                if(nums[left] >= target){
                    return 1;
                }
                break;
            }
            if (sum < target)
            {
                // cout << "left: " << left << " right: " << right << " sum: " << sum <<" target doesnt match" << endl;
                right++;
                sum += nums[right];
                if(right == sz - 1){
                    if(sum >= target){
                        currMinIndex = min(right - left + 1, currMinIndex);
                    }
                    else break;
                }
            }
            else
            {
                currMinIndex = min(right - left + 1, currMinIndex);
                // cout << "left: " << left << " right: " << right << " sum: " << sum << endl;
                if(left == right){
                    if(right == sz - 1)break;
                    else {
                        right++;
                        sum += nums[right];
                    }
                }
                else{
                    sum -= nums[left];
                    left++;
                }
                
                
            }
        }
        return currMinIndex == INT_MAX ? 0 : currMinIndex;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {12,28,83,4,25,26,25,2,25,25,25,12};
    int target = 213;
    string res = s.minSubArrayLen(target, nums)==8 ? "approved":"not approved";
    cout << res << endl;
    return 0;
}