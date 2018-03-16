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
		
		int term1,term2,final,attendence,clsTest1,clsTest2,clsTest3;
		/// name of my variables is wow,isnt it?? :P
		vector<int>clsTest;
		cin>>term1>>term2>>final>>attendence>>clsTest1>>clsTest2>>clsTest3;
		clsTest.push_back(clsTest1);
		clsTest.push_back(clsTest2);
		clsTest.push_back(clsTest3);
		/// too much annoying ;)
		sort(clsTest.begin(),clsTest.end());
		int finalClsTest=(clsTest[1]+clsTest[2])/2;
		int finalResult=term1+term2+final+attendence+finalClsTest;
		if(finalResult>=90)cout<<"Case "<<idx++<<": A"<<endl;
		else if(finalResult>=80)cout<<"Case "<<idx++<<": B"<<endl;
		else if(finalResult>=70)cout<<"Case "<<idx++<<": C"<<endl;
		else if(finalResult>=60)cout<<"Case "<<idx++<<": D"<<endl;
		else cout<<"Case "<<idx++<<": F"<<endl;
		
	}
	return 0;
}
