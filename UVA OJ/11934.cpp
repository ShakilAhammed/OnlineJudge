#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	lli a,b,c,d,L;
	while(cin>>a>>b>>c>>d>>L)
	{
		if(a==0 && b==0 && c==0 && d==0 && L==0)break;
		int counter=0;
		for(int i=0;i<=L; i++)
		{
		int result=a*i*i+b*i+c;
		if(result%d==0)counter++;
		}
		cout<<counter<<endl;
	}
	return 0;
}
