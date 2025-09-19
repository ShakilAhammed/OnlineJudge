#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
        vector<int>runningSum(vector<int>&nums){
            vector<int>res;
            int currentSum=0;
            for(auto e : nums){
                currentSum+=e;
                res.push_back(currentSum);
            }
            return res;
        }
};

int main(){
    Solution s;
    vector<int> in = {1, 2, 3, 4};
    vector<int> res = s.runningSum(in);
    for(auto e: res){
        cout<<e<< " ";
    }
    cout<<endl;
    return 0;
}