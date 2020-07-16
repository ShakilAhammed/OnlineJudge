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



int getSum(int n) {
    int sum = 0;
    while(n % 10 != n) {
        sum += n % 10;
        n = n / 10;
    }

    return sum + n % 10;
}

int solve(int n){
    while(n % 10 != n && n / 10 != 0){
        n = getSum(n);
    }
    return n % 10;
}


void takeInputAndSolve() {
    int n;
    while(cin>>n && n != 0) {
        cout<<solve(n)<<endl;
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    takeInputAndSolve();
    return 0;
}