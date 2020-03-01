#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,t1,t2,t,n,mx=0;
    while(scanf("%d%d",&n1,&n2)!=EOF &&n1>0&&n2>0)
    {
        if(n1>n2)
        {
            swap(n1,n2);
        }
        t1=n1;
        t2=n2;
        mx=0;
        while(n1<=n2)
        {
            n=n1;
            t=1;
            while(n!=1)
            {
                if(n%2!=0)
                {
                    n=3*n + 1;
                }
                else
                {
                    n=n/2;
                }
                t++;
            }
            if(t>mx)
            {
                mx=t;
            }
            n1++;
        }
        printf("%d %d %d",t1,t2,mx);
    }
}
