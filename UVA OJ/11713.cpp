#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')return true;
	else return false;
}
int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	
	int testcases;
	cin>>testcases;
	getchar();
	while(testcases--)
	{
		string orginalText,changedText;
		cin>>orginalText>>changedText;
		int sz=orginalText.size();
		if(sz!=changedText.size())
		{
			cout<<"No"<<endl;
		} 
		else
		{
			int flag=0;
			for(int i=0; i<sz; i++)
			{
				if(orginalText[i]!=changedText[i] && (isVowel(changedText[i]) || changedText[i]=='0') && isVowel(orginalText[i]))
				{
					flag=1;
				}
				else if(orginalText[i]==changedText[i])
				{
					flag=1;
				}
				else
				{
					flag=0;
					break;
				}
			}
			if(flag)cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
			
		}
	}
}
