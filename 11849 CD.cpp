#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    long long val;
    map<long,long> M;

    while(scanf("%d %d",&n,&m) && n && m)
    {
        int count=0;

        for(int i=0;i<n;i++)
        {
            scanf("%lld",&val);

            M[val]=1;
        }

        for(int i=0;i<m;i++)
        {
            scanf("%lld",&val);

            if(M[val]==1)
            {
                count++;
            }
        }

        printf("%d\n",count);
        M.clear();

    }
}
