#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int a,b,c,d,e,f,g,h,testcases,idx=1;
	char p,q,r,s;
	cin>>testcases;
	while(testcases--)
	{
		cin>>a>>p>>b>>c>>q>>d>>e>>r>>f>>g>>s>>h;
		a=a*60+b;
		c=c*60+d;
		e=e*60+f;
		g=g*60+h;
		if((a<=e && e<=c )|| (a<=g && g<=c))cout<<"Case "<<idx++<<": Mrs Meeting"<<endl;
		else if((e<=a && a<=g)|| (e<=c && c<=g))cout<<"Case "<<idx++<<": Mrs Meeting"<<endl;
		else cout<<"Case "<<idx++<<": Hits Meeting"<<endl;
	}
	return 0;
}

