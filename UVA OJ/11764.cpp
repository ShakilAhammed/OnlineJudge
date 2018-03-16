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
		int n,high=0,low=0,temp=-1;
		cin>>n;
		while(n--)
		{
			int a;
			cin>>a;
			if(temp==-1)
			{
				temp=a;
				continue;
			}
			if(a>temp)high++;
			else if(a==temp)continue;
			else low++;
			temp=a;
		}
		cout<<"Case "<<idx++<<": "<<high<<" "<<low<<endl;
	}
	return 0;
}
