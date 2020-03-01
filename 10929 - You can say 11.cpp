#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int sum1=0,sum2=0;
    while(cin>>s)
    {
          int sum1=0,sum2=0;
        string o=s;
        if(s=="0")
        {
            break;
        }
        for(int i=0;i<s.size();i=i+2)
        {
            if(s[i]>47 && s[i]<58)
            {
                sum1=sum1+(s[i]-'0');
            }

        }
        for(int i=1;i<s.size();i=i+2)
        {
            if(s[i]>47 && s[i]<58)
            {
                sum2=sum2+(s[i]-'0');
            }
        }
        int a=abs(sum1-sum2);
        if(a==0 || a%11==0)
        {
            cout<<s<<" is a multiple of "<<"11."<<endl;

        }
        else
        {
            cout<<s<<" is not a multiple of "<<"11."<<endl;
        }
    }
}
