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
		int a,b,c;
		cin>>a>>b>>c;
		while(c--)
		{
			b++;
			if(b>a)b=1;
			
		}
		cout<<"Case "<<idx++<<": "<<b<<endl;
	}
	return 0;
}
