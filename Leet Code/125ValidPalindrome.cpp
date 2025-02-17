#include<iostream>
#include<cctype>
using namespace std;

class Solution{
    public:
        bool isPalindrome(string s){
            if(s.length() <= 1){
                return true;
            }
            string str = getOnlyAlphaNumeric(s);
            // cout<<"after sanitizing : "<<str<<endl;
            int i = 0;
            int j = str.length();
            int it = j;
            --j;
            for (int i = 0; i < it/2; i++)
            {
                if(str[i] != str[j]){
                    return false;
                }
                j--;
            }
            return true;
        }
        string getOnlyAlphaNumeric(string s){
            string res = "";
            for (int i = 0; i < s.length(); i++)
            {
                if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')){
                    res += tolower(s[i]);
                }
            }
            return res;
        }
};


int main(){
    Solution s;
    string input = "A man, a plan, a canal: Panama";
    cout << s.isPalindrome(input) << endl;
    return 0;
}