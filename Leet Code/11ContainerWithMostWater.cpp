#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
        int maxArea(vector<int>& height){
            int l = 0;
            int r = height.size() - 1;
            int max_area = 0;
            while (l<r)
            {
                max_area = max(max_area, min(height[l], height[r]) * (r-l));
                if (height[l] < height[r])
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
            return max_area;
        }
};

int main(){
    Solution s;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << s.maxArea(height) << endl;
    return 0;
}