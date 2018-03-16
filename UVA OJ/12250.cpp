#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	string s;
	int idx=1;
	while(cin>>s)
	{
		if(s=="#")break;
		else if(s=="HELLO")
		{
			cout<<"Case "<<idx++<<": ENGLISH"<<endl;
		}
		else if(s=="HOLA")
		{
			cout<<"Case "<<idx++<<": SPANISH"<<endl;
		}
		else if(s=="HALLO")
		{
			cout<<"Case "<<idx++<<": GERMAN"<<endl;
		}
		else if(s=="BONJOUR")
		{
			cout<<"Case "<<idx++<<": FRENCH"<<endl;
		}
		else if(s=="CIAO")
		{
			cout<<"Case "<<idx++<<": ITALIAN"<<endl;
		}
		else if(s=="ZDRAVSTVUJTE")
		{
			cout<<"Case "<<idx++<<": RUSSIAN"<<endl;
		}
		else
		{
			cout<<"Case "<<idx++<<": UNKNOWN"<<endl;
		}
	}
	return 0;
}
