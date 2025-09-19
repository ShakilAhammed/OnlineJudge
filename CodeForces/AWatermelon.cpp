
//problem link: https://codeforces.com/problemset/problem/4/A

#include<iostream>

using namespace std;

int main(){
    int n1, n2;
    cin>>n1>>n2;
    int n = n1 * n2;
    if(n%2 || n == 2)
        cout<<"Odd"<<endl;
    else
        cout<<"Even"<<endl;
}