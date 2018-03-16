#include<bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int testcases,operation;
    cin>>testcases;
    while(testcases--)
    {
        
        int idx=0;
        cin>>operation;
        int origin=0;
        char arry[operation+5];
        memset(arry,0,sizeof arry);
        cin.ignore();
        while(operation--)
        {
            string s;
            getline(cin,s);
            if(s[0]=='L')
            {
                --origin;
                arry[idx++]='L';
            }
            else if(s[0]=='R')
            {
                ++origin;
                arry[idx++]='R';
            }
            else
            {
                char temp[12];
                memset(temp,'\0',sizeof temp);
                int indx=0;
                for(int i=8; i<s.size(); i++)
                {
                    temp[indx++]=s[i];
                }
                int optIndex=atoi(temp);
                if(arry[--optIndex]=='L')
                {
                    --origin;
                    arry[idx++]='L';
                }
                else
                {
                    ++origin;
                    arry[idx++]='R';
                }
            }

        }
        cout<<origin<<endl;
    }
    return 0;
}

