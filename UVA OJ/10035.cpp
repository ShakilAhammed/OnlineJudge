#include<bits/stdc++.h>
using namespace std;

int getInt(char c)
{
    if(c=='\000')return 0;
    else
    return abs(48-c);
}
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    char a[50],b[50];
    memset(a,'0',sizeof a);
    memset(b,'0',sizeof b);

    while(cin>>a>>b)
    {
        if(a[0]=='0' && b[0]=='0')break;
        int alen=strlen(a);
        int blen=strlen(b);
        int maxlen=max(alen,blen);
        int carry=0,u=0,extracarry=0;
        for(int i=1; i<=maxlen; i++)
        {
            int p,q;
            if(alen>0)
                p=getInt(a[--alen]);

            else
                p=0;

            if(blen>0)
            q=getInt(b[--blen]);
            else
                q=0;

            q+=carry;
            if((p+q)/10>=1)
            {
                u++;
                carry=(p+q)/10;
            }
            else
            {
                carry=0;
            }
        }
        if(u>=2)
        cout<<u <<" carry operations."<<endl;
        else if(u==0)
        cout<<"No carry operation."<<endl;
        else
            cout<<u<<" carry operation."<<endl;
    }
    return 0;
}

