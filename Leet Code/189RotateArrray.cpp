#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int s = nums.size();
        if(k>s) k = k%s;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());

    }
};
int main(){
    Solution s;
    vector<int>in = {};

    s.rotate(in, 2);
    return 0;
}