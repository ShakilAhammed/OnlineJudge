#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution{
    public:
        unordered_map<char, int>roman;
        void preCompute(){
            roman.insert({'I', 1});
            roman.insert({'V', 5});
            roman.insert({'X', 10});
            roman.insert({'L', 50});
            roman.insert({'C', 100});
            roman.insert({'D', 500});
            roman.insert({'M', 1000});
        }
        int romanToInt(string s){
            int len = s.length();
            preCompute();
            int result = roman[s[len - 1]];
            if(len == 1) return result;

            for (int i = len - 2; i >=0; i--)
            {
                if(roman[s[i]] < roman[s[i+1]]){
                    result -= roman[s[i]];
                }
                else{
                    result += roman[s[i]];  
                }
            }

            return result;
            
        }
};

int main(){
    Solution s;
    string res = (s.romanToInt("MCMXCIV") == 1994)? "passed" : "not passed";
    cout<<res<<endl;
    return 0;
}
