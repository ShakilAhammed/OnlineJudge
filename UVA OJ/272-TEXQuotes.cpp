#pragma region Library

#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<stack>
#include<queue>
#include<math.h>
#include<cstdio>
#include<string>

#pragma endregion Library

#pragma region Macro

using namespace std;

typedef long long ll;
typedef vector<int>vt;

#define pb push_back
#define pp pop_back
#define mp make_pair

#pragma endregion Macro

#pragma region Test

void print(vt data) {
    for(int i = 0; i < data.size(); ++i) {
        cout<<data[i]<< " ";
    }
    cout<<endl;
}   

#pragma endregion Test



void solve(string input){
    bool toggle = true;
    string result = "";
    for(int i = 0; i < input.length(); ++i) {
        if(input[i] == '"' && toggle) {
            result += "``";
            toggle = !toggle;
        }
        else if(input[i] == '"') {
            result += "''";
            toggle = !toggle;   
        }
        else {
            result += input[i];
        }
        
    }
    cout<<result<<endl;
}

void takeInputAndSolve() {
    string input;
    getline(cin, input);
    solve(input);
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    takeInputAndSolve();
    return 0;
}