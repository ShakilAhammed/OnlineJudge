#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int>twoSum(vector<int>&numbers, int target){
            int i = 0;
            int j = numbers.size() - 1;
            while (i<j)
            {
                if(numbers[i] + numbers[j] == target){
                    return {i+1, j+1};
                }else if(numbers[i] + numbers[j] < target){
                    i++;
                }else{
                    j--;
                }
            }
            return {};
        }

};

int main(){
    Solution s;
    vector<int>numbers = {2, 7, 11, 15};
    int target = 9;
    vector<int>res = s.twoSum(numbers, target);
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}