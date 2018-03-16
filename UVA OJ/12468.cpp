#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int a,b;
	while(cin>>a>>b)
	{
		int diffChannel=0;
		if(a==-1 || b==-1)break;
		if((a==0 && b==99 )|| (a==99 && b==0))
		{
			diffChannel=1;
			cout<<diffChannel<<endl;
		}
		else if((a-b)==0 || (b-a)==0)cout<<diffChannel<<endl;
		else
		{
			int tempDiffChannel=abs(a-b);
			if(tempDiffChannel>50)
			{
				if(a>50)a=99-a;
				else b=99-b;
				diffChannel=a+b+1;
			}
			else
			{
				diffChannel=tempDiffChannel;
			}

				cout<<diffChannel<<endl;

		 }
	}

	return 0;
}

