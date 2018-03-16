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
		int maxIndex[15];
		string maxIndexString[15];
		vector<string>resultString;
		vector<string>::iterator itr;
		memset(maxIndex,0,sizeof maxIndex);
		for(int i=0; i<10; i++)
		{
			int n;
			string url;
			cin>>url>>n;
			maxIndex[i]=n;
			maxIndexString[i]=url;
		}
		int maxVal=maxIndex[0];
		for(int j=0; j<10; j++)
		{
			if(maxIndex[j]>maxVal)
			{
				maxVal=maxIndex[j];
			}
		}
		for(int i=0; i<10; i++)
		{
			if(maxIndex[i]==maxVal)
			{
				resultString.push_back(maxIndexString[i]);
			}
		}
		itr=resultString.begin();
		cout<<"Case #"<<idx++<<":"<<endl;
		while(itr!=resultString.end())
		{
			cout<<*itr<<endl;
			itr++;
		}
	}
	return 0;
}
