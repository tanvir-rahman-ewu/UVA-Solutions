#include<bits/stdc++.h>
using namespace std;
int power(int a,int b)
{
    int ans=1,i;
    for(i=0;i<b;i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main()
{
    string s;
    int p,ans;
    while(cin>>s)
    {
        ans=0;
        p=s.size()-1;
        if(s[0]=='#')
        {
            break;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='%')
            {
                ans=ans+0*power(6,p);
                p--;
            }
            else if(s[i]==')')
            {
                ans=ans+1*power(6,p);
                p--;
            }

            else if(s[i]=='~')
            {
                ans=ans+2*power(6,p);
                p--;
            }
             else if(s[i]=='@')
            {
                ans=ans+3*power(6,p);
                p--;
            }
             else if(s[i]=='?')
            {
                ans=ans+4*power(6,p);
                p--;
            }
             else if(s[i]=='\\')
            {
                ans=ans+5*power(6,p);
                p--;
            }
             else if(s[i]=='$')
            {
                ans=ans+(-1*power(6,p));
                p--;
            }

        }
        printf("%d\n",ans);
    }
}

