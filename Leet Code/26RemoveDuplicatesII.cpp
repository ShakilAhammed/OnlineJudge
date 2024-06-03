#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    int removeDuplicates(vector<int>&nums){
        int il = nums.size();
        int p = 2;
        for (int i = 2; i < il; ++i) {
            if((nums[i] != nums[p-2])){
                nums[p] = nums[i];
                p++;
            }
        }
        return p;
    }
};

int main(){

    Solution s;
    vector<int> in= {1,1,1,2,2,3};
    int p = s.removeDuplicates(in);
    for (int i = 0; i < p; ++i) {
        cout<<in[i]<<" ";
    }
    cout<<endl;
    return 0;
}