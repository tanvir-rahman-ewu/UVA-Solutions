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
    int t,count=1,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>n;
        cin>>s;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.' && i+2<=s.size()-1)
            {
                c++;
                s[i]=s[i+1]=s[i+2]='0';
            }
            else if(s[i]=='.' && s[i+1]=='#' && s[i+2]=='.' && i+2<=s.size()-1)
            {
                c++;
                s[i]=s[i+1]=s[i+2]='0';
            }
            else if(s[i]=='.' && s[i-1]!='.' && s[i+1]!='.' && i+1<=s.size()-1)
            {
                c++;
                s[i]='0';
            }
            else if(s[i]=='.' && i==s.size()-1)
            {
                c++;
                s[i]='0';
            }
            else if(s[i]=='.' && s[i+1]=='.')
            {
                c++;
                s[i]=s[i+1]='0';
            }
        }
        cout<<"Case "<<count<<": "<<c<<endl;
        count++;
    }
}
