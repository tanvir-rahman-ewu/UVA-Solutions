#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define inf (1<<30)

//4 Direction
//int dx[]= {1,0,-1,0};
//int dy[]= {0,1,0,-1};

//8 direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};

//Knight Direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};

int main()
{
    string s;

    int len,e,i;

    while(cin>>s)
    {
        len=s.size();


        e=len-1;

        for(i=len-1;i>=0;i--)
        {
            if(s[i]=='[' && e)
            {
                cout<<s.substr(i+1,e);

                e=0;
            }
            else if(s[i]==']')
            {
                e=0;
            }
            else if(s[i]!='[')
            {
                e++;
            }
        }
        e=1;

        for(i=0;i<len;i++)
        {
            if(s[i]=='[')
            {
                e=0;
            }
            else if(s[i]!=']' && e)
            {
                printf("%c",s[i]);
            }
            else if(s[i]==']')
            {
                e=1;
            }
        }
        printf("\n");
    }
}
