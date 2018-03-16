#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	lli n,a,b;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		if(a>b)
		{
			cout<<">"<<endl;
		}
		else if(a<b)
		{
			cout<<"<"<<endl;
		}
		else
		{
			cout<<"="<<endl;
		}
	}
	return 0;
}

