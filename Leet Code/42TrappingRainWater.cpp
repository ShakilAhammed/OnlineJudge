#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
        // its not memory friendly solution, i got sucked. runtime error :(
        int trapMemoryHungry(vector<int>&height){
            
            int size = height.size();
            if(size <3) return 0;
            int highest = 0;
            //find the highest tower
            for (int i = 0; i < size; i++)
            {
                if(height[i] > highest) highest = height[i];
            }
            
            int arr[highest][size];
            for (int i = 0; i < highest; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    arr[i][j] = 0;
                }
            }
            
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < height[i]; j++)
                {
                    arr[j][i] = 1;
                }   
            }

            //lets count
            int total = 0;
            for (int i = 0; i < highest; i++)
            {
                bool left = false;
                int lastLeftPosition = 0;
                for (int j = 0; j < size; j++)
                {
                    if(arr[i][j] && !left) {
                        lastLeftPosition = j;
                        left = true;
                    }
                    if(arr[i][j] && left) {
                        if(j - lastLeftPosition - 1 > 0) total += j - lastLeftPosition - 1;
                        lastLeftPosition = j;
                    }
                    // cout<<"current height : "<<i<<"Total now : "<<total<<endl;
                }
            }
            return total;
            
        }
        // i was amazed :O this solution beats 100%, it took 1 week to think and implement
        int trap(vector<int>&height){
            int size = height.size();
            if(size <3) return 0;
            
            vector<int>leftHeight(size);
            vector<int>rightHeight(size);

            //set left to right increasing order
            leftHeight[0] = height[0];
            for(int i = 1; i <size; i++){
                if(height[i] < leftHeight[i - 1]) leftHeight[i] = leftHeight[i-1];
                else leftHeight[i] = height[i];
            }
            // cout<<"left height : ";
            // for (auto i : leftHeight)
            // {
            //     cout<<i<<" ";
            // }
            // cout<<endl<<"right height : ";
            //set right to left increasing order
            rightHeight[size - 1] = height[size - 1];
            for (int i = size - 2; i >=0; i--)
            {
                if(height[i] < rightHeight[i + 1]) rightHeight[i] = rightHeight[i+1];
                else rightHeight[i] = height[i];
            }
            // for (auto i : rightHeight)
            // {
            //     cout<<i<<" ";
            // }
            // cout<<endl;
            int total = 0;
            for (int i = 0; i < size; i++)
            {
                int minHeight = min(leftHeight[i], rightHeight[i]);
                int current = height[i];
                if(minHeight > current) total += minHeight - height[i];
            
            }
            return total;
            
        }
};
int main(){
    Solution s;
    vector<int>in = {4,2,0,3,2,5};
    cout<<s.trap(in)<<endl;
    return 0;

}