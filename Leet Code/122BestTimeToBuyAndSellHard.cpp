#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>&prices){
        int minP = 2147483647, maxP = -1, profitMade = 0;
        int s = prices.size();
        if(s==1){
           return 0;
        }

        for (int i = 0; i < s; i++)
        {
            if(prices[i]<minP){
                minP = prices[i];
                maxP = 0;
            }
            if(prices[i] > maxP){
                maxP = prices[i];
            }
            if(maxP > minP) {profitMade += (maxP - minP);minP = prices[i], maxP = -1;}
        }
        
        return profitMade;
    }
};
int main(){
    Solution s;
    vector<int>in = {7,1,5,3,6,4};

    cout<<s.maxProfit(in)<<endl;
    return 0;
}