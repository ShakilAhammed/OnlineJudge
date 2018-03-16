#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int radious,length,width,firstPortion,lastPortion,testcases,idx=1;
	cin>>testcases;
	
	while(testcases--)
	{
		cin>>radious;
		length=radious*5;
		width=(length*6)/10;
		width/=2;
		firstPortion=(length*9)/20;
		lastPortion=(length*11)/20;
		cout<<"Case "<<idx++<<":"<<endl;
		cout<<"-"<<firstPortion<<" "<<width<<endl;
		cout<<lastPortion<<" "<<width<<endl;
		cout<<lastPortion<<" -"<<width<<endl;
		cout<<"-"<<firstPortion<<" -"<<width<<endl;
	}
	
	return 0;
}
