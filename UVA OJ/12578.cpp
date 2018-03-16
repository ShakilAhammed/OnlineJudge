#include<bits/stdc++.h>
#define PI 3.14159265358979
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		double length;
		cin>>length;
		double radious=length/5;
		double circle=PI*radious*radious;
		double width=(length*6)/10;
		double fullAreaOfFlag=length*width;
		double greenPortion=fullAreaOfFlag-circle;
		cout<<fixed<<setprecision(2)<<circle<<" "<<greenPortion<<endl;
	}
	return 0;
}
