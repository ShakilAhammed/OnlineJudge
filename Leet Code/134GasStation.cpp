#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

class Solution{
    public:
        bool isCircularIterationPossible(int start, vector<int>&gas, vector<int>&cost){
            int totalGasStationPassed = 0;
            int len = gas.size();
            int leftFuel = gas[start];
            // cout<<"started at "<<start<<" left fuel " <<leftFuel<<endl;
            while(totalGasStationPassed < len){
                int fuelBurnt = cost[start];
                int fuelAdded = 0;
                if(leftFuel == fuelBurnt)
                {
                    return totalGasStationPassed == len - 1;
                }
                if(leftFuel > fuelBurnt){
                    if(start == len - 1) fuelAdded = gas[0];
                    else fuelAdded = gas[start + 1];
                    totalGasStationPassed++;
                    leftFuel -= fuelBurnt;
                    leftFuel += fuelAdded;
                }
                else return false;
                if(start == len - 1) start = 0;
                else start++;
                // cout<<"started at "<<start<<" left fuel " <<leftFuel<<" passed " <<totalGasStationPassed<<endl;
            }
            return true;
        }
        int canCompleteCircuitOn2(vector<int>&gas, vector<int>&cost){
            //start with naive solution
            int gas_length = gas.size();
            int cost_length = cost.size();
            if(gas_length != cost_length) return -1;
            int start = 0;
            bool reach = false;
            for (int i = 0; i < gas_length; i++)
            {
                // cout<<"current iteration : "<<i<<endl;
                if(i == gas_length - 1) reach = true;
                if(reach){
                    if(gas[i] >= cost[0]){
                        start = i;
                        //do the iteration for this point
                        if(isCircularIterationPossible(start, gas, cost)){
                            return start;
                        }
                        else return -1;
                    }
                    else return -1;
                }
                if(gas[i] >= cost[i] + 1){
                    start = i;
                    //do the iteration with for this point
                    if(isCircularIterationPossible(start, gas, cost)){
                        return start;
                    }
                }
                if(gas[i] < cost[i + 1]) continue;
            }

            return -1;
            
        }
        int canCompleteCircuit(vector<int>&gas, vector<int>&cost){
            int total_cost = accumulate(cost.begin(), cost.end(), 0);
            int total_gas = accumulate(gas.begin(), gas.end(), 0);
            if(total_cost > total_gas)return -1;
            int len = gas.size();
            int start = 0;
            int currentFuel = 0;
            int totalFuel = 0;
            for (int i = 0; i < len; i++)
            {
                totalFuel += gas[i] - cost[i];
                currentFuel += gas[i] - cost[i];
                if(currentFuel < 0){
                    start = i + 1;
                    currentFuel = 0;
                }
            }
            if(totalFuel < 0) return -1;
            else{
                return start;
            }
            
        }
};

int main(){
    Solution s;
    vector<int>gas = {1,2,3,4,5};
    vector<int>cost= {3,4,5,1,2};
    //naive solution and dumb way to manage index :( got accepted by the way
    cout<<s.canCompleteCircuit(gas, cost)<<endl;
    return 0;
}