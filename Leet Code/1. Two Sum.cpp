// https://leetcode.com/problems/two-sum/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    map<int, stack<int>> data;
    int m = 0;
    for (auto it : nums)
    {
        data[it].push(m++);
    }
    sort(nums.begin(), nums.end());
    int numLen = nums.size();
    int i = 0, j = numLen - 1;
    while (i < j)
    {

        if (nums[i] + nums[j] > target)
        {
            j--;
        }
        else if (nums[i] + nums[j] < target)
        {
            i++;
        }
        else
        {
            vector<int> ret;
            ret.push_back(data[nums[i]].top());
            data[nums[i]].pop();
            ret.push_back(data[nums[j]].top());
            data[nums[j]].pop();
            sort(ret.begin(), ret.end());
            return ret;
        }
    }
    return vector<int>{};
}
int main()
{
    vector<int> input;
    input.push_back(2);
    input.push_back(7);
    input.push_back(11);
    input.push_back(15);
    int target = 9;

    auto out = twoSum(input, target);
    for (auto i : out)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
