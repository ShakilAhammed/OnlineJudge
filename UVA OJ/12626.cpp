#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int testcases;
	cin>>testcases;
	cin.ignore();
	while(testcases--)
	{
		string s;
		getline(cin,s);
		int len=s.size(),m,a,r,g,i,t;
		m=a=r=g=i=t=0;
		for(int j=0; j<len; j++)
		{
			if(s[j]=='M')
			{
				m++;
			}
			else if(s[j]=='A')
			{
				a++;	
			}
			else if(s[j]=='R')
			{
				r++;
			}
			else if(s[j]=='G')
			{
				g++;
			}
			
			else if(s[j]=='I')
			{
				i++;
			}
			else if(s[j]=='T')
			{
				t++;
			}
			
			else continue;
			}
			int pcs=0;
			while(true)
			{
				if(m>=1 && a>=3 && r>=2 && g>=1 && i>=1 && t>=1)
				{
					pcs++;
					m--,a-=3,r-=2,g--,i--,t--;
				}
				else 
				{
					break;
				}
			}
			cout<<pcs<<endl;
	}
	return 0;
}
