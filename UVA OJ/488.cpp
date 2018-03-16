#include<bits/stdc++.h>
using namespace std;
void makeTriangleWave(int height)
{
	int temp=height;
	bool match=false;
	for(int i=1; i<=2*height-1; i++)
	{
		if(i>temp)match=true;
		if(!match)
		{
			for(int j=1; j<=i; j++)
			{
				cout<<i;
			}
			cout<<endl;
		}
		
		else
		{
			temp--;
			for(int j=1; j<=temp; j++)
			{
				cout<<temp;
			}
			cout<<endl;
		}
	}
}
int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int a,b;
		cin>>a>>b;
		while(b--)
		{
			makeTriangleWave(a);
			if(b)cout<<endl;
		}
		if(testcases)cout<<endl;
	}
	return 0;
}
