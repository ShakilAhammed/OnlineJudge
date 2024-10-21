#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution{
    public:
        int lengthOfLastWord(string s){
            int len = s.length();
            int count = 0;
            while(s[len - 1] == ' '){
                len--;
            }
            for (int i = len - 1; i >= 0; i--)
            {
                if(s[i] == ' '){
                    return count;
                }
                else{
                    count++;
                }
            }
        }
};

int main(){
    //dont need to test :P
    return 0;
}