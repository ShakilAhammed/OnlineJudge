#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int lengthOfLongestSubstring(string s) {
            int length = s.size();
            if(length == 0) return 0;
            vector<int> visited(256, -1);
            int maxLength = 0, start = 0;
            for (int j = 0; j < length; ++j) {
                if(visited[s[j]] > -1) {
                    if(visited[s[j]] >= start) {
                        maxLength = max(maxLength, j - start);
                        start = visited[s[j]] + 1;
                        // cout << "start: " << start << " j: // " << j << endl;
                    }
                    visited[s[j]] = j;
                    if(j == length - 1) {
                        maxLength = max(maxLength, j - start + 1);
                    }
                }
                else {
                    if(j==(length - 1)) {
                        
                        maxLength = max(maxLength, j - start + 1);
                    }
                    // cout << "start: " << start << " j: " << j << endl;
                    visited[s[j]] = j;
                    
                }
            }
            return maxLength;
    }
};

int main(){
    Solution s;
    string str = "tmmzuxt";
    cout << s.lengthOfLongestSubstring(str) << endl;
    return 0;
}