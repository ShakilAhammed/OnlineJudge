#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	string s;
	int c=0;
	while(cin>>s && s!="*")
	{
		if(s=="Hajj")
		{
			cout<<"Case "<<++c<<": Hajj-e-Akbar"<<endl;
		}
		else
		{
			cout<<"Case "<<++c<<": Hajj-e-Asghar"<<endl;
		}
	}
	return 0;
}
