#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int testcases,idx=1;
	cin>>testcases;
	getchar();
	while(testcases--)
	{
		string userOutput,judgeOutput;
		getline(cin,userOutput);
		getline(cin,judgeOutput);
		int szOfUserOutput=userOutput.size();
		if(userOutput==judgeOutput)cout<<"Case "<<idx++<<": Yes"<<endl;
		else
		{
			string temp="";
			for(int i=0; i<szOfUserOutput; i++)
			{
				if(userOutput[i]!=' ')
				{
					temp+=userOutput[i];
				}
			}
			if(temp==judgeOutput)cout<<"Case "<<idx++<<": Output Format Error"<<endl;
			else cout<<"Case "<<idx++<<": Wrong Answer"<<endl;
		}
	}
}
