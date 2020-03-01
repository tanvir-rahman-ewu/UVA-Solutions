#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int c=0;
    while(cin>>s)
    {
        int n,a,b;
        scanf("%d",&n);

        printf("Case %d:\n",++c);

        while(n--)
        {
            scanf("%d %d",&a,&b);

            bool ans=true;

            if(a>b)
            {
                swap(a,b);
            }

            char x=s[a];

            for(int i=a+1;i<=b;i++)
            {
                if(s[i]!=x)
                {
                    ans=false;
                    break;
                }
            }

            if(ans)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }

        }
    }
}
