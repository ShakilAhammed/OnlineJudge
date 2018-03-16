#include<bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    string largestWord="";
    while(true)
    {
        string s;
        int temp=1;
        cin>>s;
        int length=s.size();
        for(int i=0; i<length; i++)
        {
            if(isdigit(s[i]) || s[i]=='-')
            {
                temp=0;
            }
            else
            {
                temp=1;
                break;
            }
        }
        if(temp==0)continue;
        if(s=="E-N-D")break;
        else
        {
            if(s.size()>largestWord.size())
            {
                largestWord=s;
            }
            else
            {
                continue;
            }

        }

    }
    int len=largestWord.size();
    string ultimateLargestWord="";
    for(int i=0; i<len; i++)
    {

        if((largestWord[i]>=65 &&largestWord[i]<=90) ||(largestWord[i]>=97 && largestWord[i]<=122))
        {

            if(isupper(largestWord[i]))
            {

                largestWord[i]=tolower(largestWord[i]);

            }
            ultimateLargestWord+=largestWord[i];
        }
        else if(  largestWord[i]=='-')
        {
            ultimateLargestWord+=largestWord[i];
        }
        else if(largestWord[i]>=48 && largestWord[i]<=57)
        {
        	ultimateLargestWord+=largestWord[i];
		}
        else
        {

            continue;
        }
    }
    cout<<ultimateLargestWord<<endl;
    return 0;
}

