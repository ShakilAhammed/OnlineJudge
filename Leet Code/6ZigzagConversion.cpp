#include<iostream>

using namespace std;

class Solution {
    public:
        string convert(string s, int numRows){
            if(numRows == 1) return s;
            string ret;
            int n = s.size();
            if(n<=numRows) return s;
            int cycleLen = 2 * numRows - 2;

            for(int i = 0; i < numRows; i++){
                ret += s[i];
                int current = i;
                while (current + cycleLen - 2 * i < n)
                {
                    if (i != 0 && i != numRows - 1 && current + cycleLen - 2 * i < n)
                    {
                        ret += s[current + cycleLen - 2 * i];
                    }
                    current += cycleLen;
                    if(current < n){
                        ret += s[current];
                    }
                    else break;
                }
               
                
            }
            return ret;
        }    

};

int main() {
    Solution s;
    cout << s.convert("PAYPALISHIRING", 3) << endl;
    return 0;
}