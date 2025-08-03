#include <iostream>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    unordered_map<char, int> mp;
    unordered_map<char, int> mc;
    void init(string t)
    {
        for (int i = 0; i < t.size(); i++)
        {
            mp[t[i]] += 1;
        }
    }

    bool checkFreq()
    {
        // check if all characters in mc have a frequency more than or equal to mp
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (mc.find(it->first) == mc.end() || mc[it->first] < it->second)
            {
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t)
    {
        mp.clear();
        mc.clear();
        init(t);
        int slen = s.size();
        int tlen = t.size();

        int left, right, currCount;
        left = right = currCount = 0;
        int minLeft = -1, minRight = -1;
        while (left <= right && right < slen)
        {
            if (mp.find(s[right]) != mp.end())
            {
                mc[s[right]]++;
                currCount++;
            }
            if (currCount >= tlen)
            {
                // cout<< "Current window: " << s.substr(left, right - left + 1) << endl;
                // check frequency of characters in mc
                while (checkFreq())
                {
                    // cout << "Current window: " << s.substr(left, right - left + 1) << endl;
                    if (right - left < minRight - minLeft || minRight == -1)
                    {
                        minLeft = left;
                        minRight = right;
                    }
                    mc[s[left]]--;
                    left++;
                    
                    while (left <= right && mp.find(s[left]) == mp.end())
                    {
                        left++;
                        // cout << "Left pointer moved to: " << left << endl;
                    }
                }
            }
            right++;
            // cout << "Right pointer moved to: " << right << endl;
        }
        // if (minRight == 0){
        //     cout<<minLeft << " " << minRight << endl;
        //     return "";
        // }
            
        if (minLeft == -1 || minRight == -1)
        {
            return "";
        }
        return s.substr(minLeft, minRight - minLeft + 1);
    }
};

int main()
{
    Solution sol;
    string s = "ADOBECODEBANC";
    string t = "ABC";
    string result = sol.minWindow(s, t);
    cout << "=====================================" << endl;
    cout << "Input string: " << s << endl;
    cout << "Target string: " << t << endl;
    cout << "Minimum window substring: " << result << endl;
    cout << "=====================================" << endl;
    s = "cabwefgewcwaefgcf";
    t = "cae";
    string result2 = sol.minWindow(s, t);
    cout<< "Input string: " << s << endl;
    cout << "Target string: " << t << endl;
    cout << "Minimum window substring: " << result2 << endl;
    cout<<"====================================="<<endl;
    s = "a";
    t = "a";
    string result3 = sol.minWindow(s, t);
    cout << "Input string: " << s << endl;
    cout << "Target string: " << t << endl;
    cout << "Minimum window substring: " << result3 << endl;
    cout << "=====================================" << endl;
    return 0;
}
