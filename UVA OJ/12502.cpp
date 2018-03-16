#include<bits/stdc++.h>
using namespace std;

int main()
{
	//dont try understand the code :P
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		double firstFamily,secondFamily,balance,firstFamilyBalance=0;
		cin>>firstFamily>>secondFamily>>balance;
		double totalTime=firstFamily+secondFamily;
		double temp=firstFamily*balance;
		temp/=totalTime;
		if(firstFamily>secondFamily)
		{
			firstFamilyBalance=(firstFamily-secondFamily)*balance;
			ceil(firstFamilyBalance/=totalTime);
			firstFamilyBalance+=temp;
			cout<<fixed<<setprecision(0)<<firstFamilyBalance<<endl;
		}
		else
		{
			firstFamilyBalance=(abs(firstFamily-secondFamily)*balance);
			ceil(firstFamilyBalance/=totalTime);
		    firstFamilyBalance=temp-firstFamilyBalance;
			cout<<fixed<<setprecision(0)<<firstFamilyBalance<<endl;
		}
		
	}
	return 0;
}
