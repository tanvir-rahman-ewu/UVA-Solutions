#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[10];
    for(int i=0;i<=5;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            for(int k=0;k<=s[i].length();k++)
            {
                for(int l=0;l<=s[j].length();l++)
                {
                    if(s[i][k]==s[j][l])
                    {
                        c++;
                    }
                }
            }
        }
    }
}
