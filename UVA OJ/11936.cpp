#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a+b>c && b+c>a && c+a>b)
		{
			cout<<"OK"<<endl;
		}
		else
		{
			cout<<"Wrong!!"<<endl;
		}
	}
	return 0;
}
