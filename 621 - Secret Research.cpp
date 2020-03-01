#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        cin>>s;
         if(s[s.length()-1]=='5' && s[s.length()-2]=='3')
        {
            printf("-\n");
        }
        else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
        {
            printf("?\n");
        }
        else if(s[0]=='9' && s[s.length()-1]=='4')
        {
            printf("*\n");
        }
        else if(s[0]=='1' && s.length()==1|| s[0]=='4' && s.length()==1 || s[0]=='7'&& s[1]=='8' && s.length()==2)
        {
            printf("+\n");
        }
    }
}
