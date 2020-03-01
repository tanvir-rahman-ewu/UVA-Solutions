#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int sum=0;
        if(s=="b" || s=="a")
        {
            printf("It is a prime word.\n");
        }
        else
        {
            for(int i=0;i<s.size();i++)
            {
                if(s[i]>96 && s[i]<123)
                {
                    sum=sum+(s[i]-96);
                }
                else if(s[i]>64 && s[i]<91)
                {
                    sum=sum+(s[i]-38);
                }
            }
            int t=0;
            for(int i=2;i<sqrt(sum)+1;i++)
            {
                if(sum%i==0)
                {
                    t++;
                }
            }
            if(t==0)
            {
                printf("It is a prime word.\n");
            }
            else
            {
                printf("It is not a prime word.\n");
            }
        }

    }
}
