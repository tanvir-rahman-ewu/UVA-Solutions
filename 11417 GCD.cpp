#include<bits/stdc++.h>
using namespace std;

int gcd(int n1,int n2)
{
    int i, gcd;
    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    return gcd;
}
int main()
{
    int n,g;
    while(1)
    {
        g=0;
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                g=g+gcd(i,j);
            }
        }
        printf("%d\n",g);
    }
    return 0;
}
