#include<bits/stdc++.h>
using namespace std;
#define size_n 1010
#define size_p 1010

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
int prime_count(int a)
{
    int val=sqrt(a)+1;
    int max=0,count=0;;
    for(int i=0;prime[i]<val;i++)
    {
        if(a%prime[i]==0)
        {
            while(a%prime[i]==0)
            {
                if(prime[i]>max)
                {
                    count++;
                    max=prime[i];
                }
                a=a/prime[i];
            }
        }
    }

    if(a>1)
    {
        count++;
    }
    return count;
}
int main()
{
    int a=seive();
    int n;
    while(scanf("%d",&n)&& n!=0)
    {
        cout<<n<<" : "<<prime_count(n)<<endl;
    }
}
