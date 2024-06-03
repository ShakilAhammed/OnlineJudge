#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    int removeDuplicates(vector<int>&nums){
        int il = nums.size();
        int p = 1;
        for (int i = 1; i < il; ++i) {
            if(nums[i] != nums[i-1]){
                nums[p] = nums[i];
                p++;
            }
        }
        return p;
    }
};

int main(){

    Solution s;
    vector<int> in= {1, 1,2,3,4,6,5,6};
    s.removeDuplicates(in);
    return 0;
}