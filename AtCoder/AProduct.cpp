
//problem link: https://atcoder.jp/contests/abc086/tasks/abc086_a

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