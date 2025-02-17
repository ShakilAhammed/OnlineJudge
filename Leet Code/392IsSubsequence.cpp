#include<iostream>

using namespace std;

class Solution{
    public:
        bool isSubsequence(string s, string t){
            int slen = s.length();
            int tlen = t.length();
            if(slen == 0) return true;
            if(tlen == 0) return false;
            int si = 0;
            int ti = 0;
            while(ti < tlen){
                if(s[si] == t[ti]){
                    si++;
                    if(si == slen) return true;
                }
                ti++;
            }
            return false;
        }

};
int main(){
    Solution s;
    cout << s.isSubsequence("abc", "ahbgdc") << endl;
    return 0;
}