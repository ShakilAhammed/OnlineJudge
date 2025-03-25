#include <iostream>

using namespace std;

class Solution
{
public:
    int kthGrammar(int n, int k)
    {
        if (n == 1)
            return 0;
        int currentLen = (1 << (n - 1));
        int mid = currentLen / 2;
        if (k > mid)
        {
            return !(kthGrammar(n - 1, k - mid));
        }
        else
            return kthGrammar(n - 1, k);
    }
};

int main()
{
    Solution s;
    cout << s.kthGrammar(2, 2) << endl;
    return 0;
}