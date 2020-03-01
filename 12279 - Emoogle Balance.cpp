#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,c1,c2,c=1;

    while(scanf("%d",&n) && n!=0)
    {
        c1=0;
        c2=0;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);

            if(x==0)
            {
                c2++;
            }
            else
            {
                c1++;
            }
        }
        printf("Case %d: %d\n",c,c1-c2);
        c++;
    }
}
