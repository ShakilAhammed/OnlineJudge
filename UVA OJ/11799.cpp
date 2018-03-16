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
		int numberofParticipant;
		vector<int>speedOfParticipant;
		vector<int>::iterator maxSpeed;
		cin>>numberofParticipant;
		while(numberofParticipant--)
		{
			int speed;
			cin>>speed;
			speedOfParticipant.push_back(speed);
		}
		maxSpeed=max_element(speedOfParticipant.begin(),speedOfParticipant.end());
		cout<<"Case "<<idx++<<": "<<*maxSpeed<<endl;
	}
	return 0;
}
