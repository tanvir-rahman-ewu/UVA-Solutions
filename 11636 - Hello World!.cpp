#include<bits/stdc++.h>
using namespace std;

int ans[15];

void create()
{
    ans[0]=1;

    for(int i=1;ans[i]<10000;i++)
    {
        ans[i]=ans[i-1]*2;
    }
}

int main()
{
    int n,c=1,i;

    create();

    while(scanf("%d",&n) && n>=0)
    {
        for(i=0;ans[i]<n;i++);

        printf("Case %d: %d\n",c,i);

        c++;
    }
}
