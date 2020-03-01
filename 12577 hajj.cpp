#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cas=1;
    while(1)
    {
        cin>>s;
        if(s[0]=='*')
        {
            break;
        }
        else if(s=="Hajj")
        {
            printf("Case %d: Hajj-e-Akbar\n",cas);
        }
        else if(s=="Umrah")
        {
            printf("Case %d: Hajj-e-Asghar\n",cas);
        }
        cas++;
    }
}

