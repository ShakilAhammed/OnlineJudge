#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	double b,c,d,acceleration,displacement,time,vvelocity,uvelocity;
	int a,idx=1;
	while(cin>>a>>b>>c>>d)
	{
		if(a==0)break;
		switch(a)
		{
			case 1:
				//input b=u,c=v,d=time
				acceleration=(c-b)/d;
				displacement=b*d+.5*(acceleration*d*d);
				cout<<fixed<<setprecision(3)<<"Case "<<idx++<<": "<<displacement<<" "<<acceleration<<endl;
				break;
			case 2:
				//input b=u,c=v,d=acceleration
				time=(c-b)/d;
				acceleration=(c-b)/time;
				displacement=b*time + .5*(acceleration*time*time);
				cout<<fixed<<setprecision(3)<<"Case "<<idx++<<": "<<displacement<<" "<<time<<endl;
				break;
			case 3:
				//input b=u,c=acceleration,d=displacement
				vvelocity=sqrt(b*b+2*c*d);
				time=(vvelocity-b)/c;
				cout<<fixed<<setprecision(3)<<"Case "<<idx++<<": "<<vvelocity<<" "<<time<<endl;
				break;
			default:
				//input b=v,c=a,d=displacement
				uvelocity=sqrt(b*b-2*c*d);
				time=(b-uvelocity)/c;
				cout<<fixed<<setprecision(3)<<"Case "<<idx++<<": "<<uvelocity<<" "<<time<<endl;
				
		}
	}
}
