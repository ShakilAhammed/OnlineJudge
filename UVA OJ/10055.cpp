#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    lli a,b;
    while(cin>>a>>b && a!=EOF && b !=EOF)
    {
        cout<<abs(a-b)<<endl;
    }
    return 0;
}
