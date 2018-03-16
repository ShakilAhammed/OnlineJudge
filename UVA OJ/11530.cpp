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
		string message;
		int sum=0;
		getline(cin,message);
		int len=message.size();
		for(int i=0; i<len; i++)
		{
			if(message[i]=='a' || message[i]=='d' || message[i]=='g' || message[i]=='j' || message[i]=='m' || message[i]=='p' || message[i]=='t' || message[i]=='w' || message[i]==' ') sum++;
			else if(message[i]=='b' || message[i]=='e' || message[i]=='h' || message[i]=='k' || message[i]=='n' || message[i]=='q' || message[i]=='u' || message[i]=='x') sum+=2;
			else if(message[i]=='c' || message[i]=='f' || message[i]=='i' || message[i]=='l' || message[i]=='o' || message[i]=='r' || message[i]=='v' || message[i]=='y') sum+=3;
			else sum+=4;
		}
		cout<<"Case #"<<idx++<<": "<<sum<<endl;
	}
}
