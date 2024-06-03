// 27RemoveElement.cpp
//

#include <iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int s = 0;
        int il = nums.size();
        for (int i = 0; i < il; i++)
        {
            if (nums[i] != val) {
                nums[s] = nums[i];
                s++;
            }
        }
        return s;
    }
};

int main()
{
    Solution s;
    vector<int>nums = { 1,2,2,3,4,5 };
    s.removeElement(nums, 2);
}