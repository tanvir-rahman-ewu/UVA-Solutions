#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g;
    string s;

    while(scanf("%d",&g) && g!=0)
    {
            cin>>s;
            g=s.size()/g;
            int count=0;
            for(int i=0;i<s.size();i++)
            {
                count++;
                if(count==g)
                {
                    int temp=i+1;
                    for(int j=i;j>=temp-g;j--)
                    {
                        printf("%c",s[j]);
                    }
                    count=0;
                }
            }
            printf("\n");
    }
}
