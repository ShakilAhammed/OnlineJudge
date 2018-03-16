#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	lli a,b,c;
	int n,cases=1;
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		vector<lli>salary;
		salary.push_back(a);
		salary.push_back(b);
		salary.push_back(c);
		sort(salary.begin(),salary.end());
		cout<<"Case "<<cases++<<": "<<salary[1]<<endl;
	}	
	return 0;
}

