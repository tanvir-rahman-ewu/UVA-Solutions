#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,comp;
    while(1)
    {
        string t,v;

        getline(cin,s);
        if(s=="DONE")
        {
            break;
        }
        for(i=0;i<s.size();i++)
        {
            if(s[i]>='a' && (s[i])<='z')
            {
                t.push_back(s[i]);
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                t.push_back(s[i]+32);
            }
        }
        for(j=t.size()-1;j>=0;j--)
        {
            v.push_back(t[j]);
        }
       if(v==t)
       {
           printf("You won't be eaten!\n");
       }
       else
       {
           printf("Uh oh..\n");
       }
    }
    return 0;
}
