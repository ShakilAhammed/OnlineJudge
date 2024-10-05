#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

class Solution{
    public:
        int candy_my_solution(vector<int>&ratings){
            int sz = ratings.size();
            if(sz == 1) return 1;
            vector<int>trackCandies(sz, 1);
            //traverse left to right
            for (int i = 1; i < sz; i++)
            {
                if(ratings[i] > ratings[i-1]) trackCandies[i] = trackCandies[i-1] + 1;
            }
            // cout<<"Left candy track : ";
            // for (auto i : trackCandies)
            // {
            //     cout<<i<<" ";
            // }
            // cout<<endl;
            
            //traverse right to left 
            for (int i = sz - 2; i >=0; i--)
            {
                if(ratings[i] > ratings[i+1]) trackCandies[i] = max(trackCandies[i], trackCandies[i+1] + 1);
            }
            // cout<<"Right candy track : ";
            // for (auto i : trackCandies)
            // {
            //     cout<<i<<" ";
            // }
            // cout<<endl;
            //now lets accumulate
            return accumulate(trackCandies.begin(), trackCandies.end(), 0);
        }
        int candy(vector<int>&ratings){
            
            int candies = ratings.size();
            int n = candies;

            int i = 0;
            
            //check each
            while(i < n - 1){

                if(ratings[i] == ratings[i + 1]){
                    i++;
                    continue;
                }
                //check peak
                int inc = 0;
                while( i < n - 1)
                {
                    if(ratings[i] < ratings[i + 1]){
                        inc++;
                        candies += inc;
                        // cout<<"each increasing : "<<inc<<" total candy : "<<candies<<endl;
                        i++;
                    }
                    else{
                        break;
                    }
                }
                // cout<<"increasing : "<<inc<<endl;
                //check valley
                int dec = 0;
                while( i < n - 1)
                {
                    if(ratings[i] > ratings[i + 1]){
                        dec++;
                        candies +=dec;
                        // cout<<"each decreasing : "<<dec<<" total candy : "<<candies<<endl;
                        i++;
                    }
                    else{
                        break;
                    }
                }
                // cout<<"decreasing : "<<dec<<endl;
                candies -= min(inc, dec);
            }

            return candies;
        }
};

int main(){
    Solution s;
    vector<int>in = {1,2,3,1,0};
    cout<<s.candy(in)<<endl;
    return 0;
}