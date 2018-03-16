#include<bits/stdc++.h>
using namespace std;
int sum;
int temp;
void ownedBottles(int numOfEmptyBottles,int c)
{
	if(numOfEmptyBottles>=c)
	{
		sum+=(numOfEmptyBottles/c);
		numOfEmptyBottles=numOfEmptyBottles/c+numOfEmptyBottles%c;
	    ownedBottles(numOfEmptyBottles,c);
	}
	else return;
	
}
int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int a,b,c;
		sum=0;
		temp=0;
		cin>>a>>b>>c;
		int numOfEmptyBottles=a+b;
		ownedBottles(numOfEmptyBottles,c);
		cout<<sum<<endl;	
	}
	return 0;
}
