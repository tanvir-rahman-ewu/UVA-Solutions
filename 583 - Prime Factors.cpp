#include<bits/stdc++.h>
using namespace std;
#define size_n 1000000
#define size_p 1000000

bool flag[size_n+5];
int prime[size_p+5];

int seive()
{
    int val=sqrt(size_n)+1;
    int total=0;
    for(int i=2;i<size_n;i++)
    {
        flag[i]=1;
    }
    for(int i=2;i<val;i++)
    {
       if(flag[i])
       {
           for(int j=i;j*i<=size_n;j++)
           {
               flag[i*j]=0;
           }
       }
    }
    for(int i=2;i<=size_n;i++)
    {
        if(flag[i])
        {
            prime[total++]=i;
        }
    }
    return total;
}
void factor(long long a)
{

    if(a<0)
    {
        printf("%lld = -1 x ",a);
        a=-1*a;
    }
    else
    {
        printf("%lld = ",a);
    }
    int val=sqrt(a)+1;
    for(int i=0;prime[i]<val;i++)
    {
        if(a%prime[i]==0)
        {
            while(a%prime[i]==0)
            {
                if(a/prime[i]==1)
                {
                    printf("%d\n",prime[i]);
                    a=a/prime[i];
                }
                else
                {
                    printf("%d x ",prime[i]);
                    a=a/prime[i];
                }
            }
        }
    }
    if(a>1)
    {
        cout<<a<<endl;
    }
}
int main()
{
    int s=seive();
    long long a;
    while(scanf("%lld",&a) && a!=0)
    {
        factor(a);
    }
}
