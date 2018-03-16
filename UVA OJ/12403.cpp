#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	lli n,c=0;
	cin>>n;
	while(n--)
	{
		char s[10];
		cin>>s;
		if(s[0]=='d')
		{
			int m;
			cin>>m;
			c+=m;
		}
		else
		{
			cout<<c<<endl;
		}
	}
	return 0;
}
