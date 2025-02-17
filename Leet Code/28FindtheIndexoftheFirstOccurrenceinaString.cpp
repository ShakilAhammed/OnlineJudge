#include<iostream>
using namespace std;

class Solution{
    public:
        int strStr(string haystack, string needle){
            if(needle.size() == 0) return 0;
            if(haystack.size() == 0) return -1;
            int i = 0;
            int j = 0;
            while(i < haystack.size()){
                if(haystack[i] == needle[j]){
                    j++;
                    if(j == needle.size()) return i - j + 1;
                }else{
                    i = i - j;
                    j = 0;
                }
                i++;
            }
            return -1;
        }
};

int main(){
    Solution s;
    cout << s.strStr("sadbutsad", "sad") << endl;  
    return 0;
}