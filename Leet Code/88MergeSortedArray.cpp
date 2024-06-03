// 88MergeSortedArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>result;
        vector<int>input1(nums1.begin(), nums1.begin() + m);
        vector<int>input2(nums2.begin(), nums2.begin() + n);

        while (!input1.empty() && !input2.empty()) {
            int num1 = input1.back();
            int num2 = input2.back();
            if (num1 > num2) {
                result.push_back(num1);
                input1.pop_back();
            }
            else { result.push_back(num2); input2.pop_back(); }
        }

        if (!input1.empty()) {
            int nSize1 = input1.size() - 1;

            for (int i = nSize1; i >= 0; i--)
            {
                result.push_back(input1[i]);
                input1.pop_back();
            }
        }

        if (!input2.empty()) {
            int nSize2 = input2.size() - 1;

            for (int i = nSize2; i >= 0; i--)
            {
                result.push_back(input2[i]);
                input2.pop_back();
            }
        }
        nums1.clear();
        while (!result.empty()) {
            nums1.push_back(result.back());
            result.pop_back();
        }
    }
};

//i tried to search with simplied solution i got surprised when i saw the solution :O

//here is the code from chatgpt, its very simple.

class SolutionByChatGpt {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1; // Pointer for nums1
        int p2 = n - 1; // Pointer for nums2
        int p = m + n - 1; // Pointer for merged array

        // Merge the arrays starting from the end
        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1];
                p1--;
            }
            else {
                nums1[p] = nums2[p2];
                p2--;
            }
            p--;
        }

        // If there are remaining elements in nums2, copy them
        while (p2 >= 0) {
            nums1[p] = nums2[p2];
            p2--;
            p--;
        }
    }
};


int main()
{
    vector<int>nums1 = { 1,2,3,0,0,0 };
    vector<int>nums2 = { 2,5,6 };
    Solution s;
    s.merge(nums1, 3, nums2, 3);
    return 0;
}
