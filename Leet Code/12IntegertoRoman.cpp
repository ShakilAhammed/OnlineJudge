#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

class Solution{
    public:
        map<int, string>roman;
        
        void preCompute(){
            roman.insert({1, "I"});
            roman.insert({4, "IV"});
            roman.insert({5, "V"});
            roman.insert({9, "IX"});
            roman.insert({10, "X"});
            roman.insert({40, "XL"});
            roman.insert({50, "L"});
            roman.insert({90, "XC"});
            roman.insert({100, "C"});
            roman.insert({400, "CD"});
            roman.insert({500, "D"});
            roman.insert({900, "CM"});
            roman.insert({1000, "M"});
        }
        string intToRoman(int num){
            preCompute();
            string result;
            while(num > 0){
                for(auto i = roman.rbegin(); i != roman.rend(); ++i){
                    if(num >= i->first){
                        int totalI = num / i->first;
                        num = num - (totalI * i->first);
                        while(totalI > 0){
                            result += i->second;
                            totalI--;
                        }
                    }
                }
            }
            return result;
        }
};
int main(){
    Solution s;
    string result = s.intToRoman(3749);
    cout<<result<<endl;
    string res = (result == "MMMDCCXLIX")? "passed" : "failed";
    cout<<res<<endl;
    return 0;
}