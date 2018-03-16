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
 		double initialCelsius,increasedFahrenheit;
 		cin>>initialCelsius>>increasedFahrenheit;
 		double initialFahrenheit=(9*initialCelsius)/5+32;
 		double totalFahrenheit=initialFahrenheit+increasedFahrenheit;
 		double ultimateCelsious=(5*(totalFahrenheit-32))/9;
 		cout<<fixed<<setprecision(2)<<"Case "<<idx++<<": "<<ultimateCelsious<<endl;
	 }
	return 0;
}
