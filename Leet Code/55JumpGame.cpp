#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//i spent 5-6 hours to solve this problem, when i found others solution i was like i am super dumb.btw my solution is faster :O;

//i write the solution after checking a java solution

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int al = nums.size();
        int hcIndex = 0;
        if(al == 1 && !nums[0]) return true;
        if(!nums[0] && al>1)return false;

        for (int i = 0; i < al - 1; i++)
        {
            int npcIndex = i + nums[i];
            if(npcIndex >= al - 1) return true;
            while(!nums[npcIndex] && npcIndex >i){
                npcIndex--;
                if(hcIndex == npcIndex){
                    if(i == hcIndex){
                        while(nums[hcIndex] && hcIndex >0){
                        if(hcIndex + nums[hcIndex] >= al - 1) return true;
                        hcIndex--;
                    }
                        return false;
                    }
                    continue;
                    
                }
                if(npcIndex == i){
                    
                    i = hcIndex - 1;
                    continue;
                }
            }
            if(npcIndex > hcIndex) hcIndex = npcIndex;
            if(hcIndex >= al)return true;
        }
        return true;
    }
};

class QuickSolution {
public:
    bool canJump(vector<int>& nums) {
        int highCoverage = 0;
        int il = nums.size() - 1;
        for (int i = 0; i <= il; i++)
        {
            if(i > highCoverage)return false;
            highCoverage = max(highCoverage, i + nums[i]);
            if(highCoverage>= il)return true;
        }
        return true;
        
    }
};

int main(){
    vector<int> in = {8,2,4,4,4,9,5,2,5,8,8,0,8,6,9,1,1,6,3,5,1,2,6,6,0,4,8,6,0,3,2,8,7,6,5,1,7,0,3,4,8,3,5,9,0,4,0,1,0,5,9,2,0,7,0,2,1,0,8,2,5,1,2,3,9,7,4,7,0,0,1,8,5,6,7,5,1,9,9,3,5,0,7,5};
    Solution s;
    cout<<s.canJump(in)<<endl;
}