#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    while(gets(s))
    {
        int count=0;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]>48&&s[i]<58)
            {
                count=count+ (int(s[i])-48);
            }
            else if(s[i]=='!')
            {
                printf("\n");
                count=0;
            }
            else if(s[i]=='b')
            {
                for(int j=0;j<count;j++)
                {
                    printf(" ");
                }
                count=0;
            }
            else
            {
                for(int j=0;j<count;j++)
                {
                    printf("%c",s[i]);
                }
                count=0;
            }
        }
        printf("\n");
    }
    return 0;
}
