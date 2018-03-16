#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int n,idx=0,index=0;
	cin>>n;
	string s;
	vector<string>str;
	string array[16]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
	while(n--)
	{	
		cin>>s;
		str.push_back(s);
	}
	vector<string>::iterator it=str.begin();
	int sz=str.size();
	bool temp=false,temp1=false;
		while(true)
		{
			
			cout<<*it<<": "<<array[idx++]<<endl;
			it++;
			if(it==str.end())
			{
				temp=true;
			}
			if(idx==16)
			{
				temp1=true;
			}
			if(it==str.end() && idx<16)
			{
				it=str.begin();
			}
			else if(it!=str.end() && idx==16)
			{
				idx=0;
			}
			if(temp1 && temp)
			{
				while(true)
				{
					if(idx==16)break;
					if(it==str.end())it=str.begin();
					cout<<*it<<": "<<array[idx++]<<endl;
			        it++;
				}
				
				break;
			}
		}
	return 0;
}
