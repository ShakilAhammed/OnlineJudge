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
		int length,width,height;
		cin>>length>>width>>height;
		if(length<=20 && height<=20 && width<=20)cout<<"Case "<<idx++<<": "<<"good"<<endl;
		else cout<<"Case "<<idx++<<": "<<"bad"<<endl;
	}
	return 0;
}
