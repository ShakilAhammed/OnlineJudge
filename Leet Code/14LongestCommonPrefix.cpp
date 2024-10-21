#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution{
    public:
        string longestCommonPrefix(vector<string>&strs){
            int len = strs.size();
            string result = "";
            if(len == 0) return result;
            if(len == 1) return strs[0];

            sort(strs.begin(), strs.end());
            string first = strs[0];
            string last = strs[len - 1];
            for (int i = 0; i < first.length(); i++)
            {
                if(first[i] != last[i]){
                    return result;
                }
                result += first[i];
            }
            return result;
        }
};

int main(){
    //dont need to test :P
    return 0;
}