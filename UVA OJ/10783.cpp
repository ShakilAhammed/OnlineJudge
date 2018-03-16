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
		int start,end,addition=0;
		cin>>start>>end;
		for(int i=start; i<=end; i++)
		{
			if(i%2!=0)
			{
				addition+=i;
			}
			else
			{
				continue;
			}
		}
		cout<<"Case "<<idx++<<": "<<addition<<endl;
	}
	return 0;
}
