#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int> getArr(int n){
            vector<int> arr(n, 0);
            for(int i = 0; i < n; i++){
                arr[i] = i + 1;
            }
            return arr;
        }
        int findTheWinner(int n, int k ){
            vector<int> myArr = getArr(n);
            return findTheWinnerRecur(0, k, myArr);
        }   

        int findTheWinnerRecur(int start, int k, vector<int>& myArr){
            if(myArr.size() == 1)
                return myArr[0];
            int removedIndex = (start + k - 1) % myArr.size();
            //  cout<<"DEBUG: "<<removedIndex<<endl;
            myArr.erase(myArr.begin() + removedIndex);
            return findTheWinnerRecur(removedIndex, k, myArr);
        }

        // another solution o(n)

        int findTheWinnerRecurr(int n , int k){
            int res =  findTheWinnerRecurrr(n, k);
            return res + 1;
        }

        int findTheWinnerRecurrr(int n, int k){
            if(n == 1)return 0;
            return (findTheWinnerRecurrr(n - 1, k) + k) % n;
        }
};

int main(){
    Solution s;
    cout<<s.findTheWinnerRecurr(5, 2)<<endl;
    return 0;
}