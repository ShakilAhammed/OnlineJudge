// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

using namespace std;


class Solution {
public:
    void MergeArray(vector<int> nums1, int m, vector<int> nums2, int n)
    {
        int p1 = m - 1;
        int p2 = n - 1;
        int p = m + n - 1;
        while (p1>=0 && p2>=0) {
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
        while (p2>=0) {
            nums1[p] = nums2[p2];
            p2--;p--;
        }
    }

};

int main()
{
    std::cout << "Hello World!\n";
}
