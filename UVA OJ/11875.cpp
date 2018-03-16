#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int testcases,idx=1;
	cin>>testcases;
	while(testcases--)
	{
		int n;
		cin>>n;
		int captain=ceil(n/2);
		while(n--)
		{
			int a;
			cin>>a;
			if(n==captain)cout<<"Case "<<idx++<<": "<<a<<endl;
		}
	}	
	return 0;
}
