#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int n;
	while(cin>>n)
	{
		if(n==0)break;
		lli first=0,second=1,result;
		while(n--)
		{
			result=first+second;
			first=second;
			second=result;
		}
		cout<<result<<endl;
	}
	return 0;
}
