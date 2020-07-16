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



int solve(int a, int b){
    return (a / 3) * (b / 3);
}

void takeInputAndSolve() {
    int n, a, b;
    cin>>n;
    while(n--) {
        cin>> a >> b;
        cout<<solve(a, b)<<endl;
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    takeInputAndSolve();
    return 0;
}