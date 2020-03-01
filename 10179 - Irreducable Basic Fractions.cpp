#include<bits/stdc++.h>
using namespace std;
#define size_n 10001000
#define size_p 10001000

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
int euler_totient_function(int n)
{
    int val=sqrt(n)+1;
    double sum=n;
    int i;
    for(i=0;prime[i]<val;i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n=n/prime[i];
            }
            sum=sum*(1-(1.0/prime[i]));
        }
    }
    if(n>1)
    {
         sum=sum*(1-(1.0/n));
    }
    return sum;
}
int main()
{
    int total=seive();
    int n;
    while(scanf("%d",&n) && n!=0)
    {
        printf("%d\n",euler_totient_function(n));
    }
}
