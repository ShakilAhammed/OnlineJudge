#include<bits/stdc++.h>
using namespace std;

int filterLength(int n,int length)
{
    if(n==1)
    {
        length++;
        return length;
    }
    if(n%2==0)
    {
        n/=2;
        length++;
        filterLength(n,length);
    }
    else
    {
        n=3*n+1;
        length++;
        filterLength(n,length);
    }

}
int main()
{
//    freopen("Input.txt","r",stdin);
//    freopen("Output.txt","w",stdout);
    int a,b;
    while(cin>>a>>b)
    {
        bool swp=false;
        if(a>b)
        {
            swap(a,b);
            swp=true;
        }
        int maxLength=0;
        for(int i=a; i<=b; i++)
        {
            if(filterLength(i,0)>maxLength)
            {
                maxLength=filterLength(i,0);
            }
        }
        if(swp)cout<<b<<" "<<a<<" "<<maxLength<<endl;
        else cout<<a<<" "<<b<<" "<<maxLength<<endl;


    }


    return 0;
}
