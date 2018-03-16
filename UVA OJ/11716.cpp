#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int testcases;
	cin>>testcases;
	getchar();
	while(testcases--)
	{
		string cipherText,decryptedText="";
		getline(cin,cipherText);
		int txtLength=cipherText.size();
		int root =sqrt(txtLength);
		int temp=0;
		if(root*root==txtLength)
		{
			while(root>temp)
			{
				for(int i=temp; i<txtLength; i+=root)
			{
				decryptedText+=cipherText[i];
			}
			temp++;
			}
			cout<<decryptedText<<endl;
		}
		else
		{
			cout<<"INVALID"<<endl;
		}
	}
}
