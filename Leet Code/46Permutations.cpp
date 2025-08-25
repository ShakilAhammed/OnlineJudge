#include <iostream>
#include <vector>

using namespace std;
class Solution
{
    public:
        vector<vector<int>>res;
        void myPermute(vector<int>& nums, int index){          
            if(index == nums.size() - 1){
                res.push_back(nums);
                return;
            }

            for(int j = index; j < nums.size(); ++j){
                swap(nums[index], nums[j]);
                myPermute(nums, index+1);
                swap(nums[j], nums[index]);
            }
        }

        vector<vector<int>> permute(vector<int> nums){
            res.clear();
            myPermute(nums, 0);
            return res;
        }
};

int main()
{
    Solution s;
    s.permute(vector<int>{1, 2, 3});
    for(const auto& v : s.res){
        for(int num : v){
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
