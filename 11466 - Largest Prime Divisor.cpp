#include<bits/stdc++.h>
using namespace std;
#define size_n 100010000
#define size_p 100010000

bool flag[size_n+5];
int prime[size_p+5];
vector<long long> v;

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
void largest_prime_divisor(long long a)
{
    int val=sqrt(a)+1;
    int j=1;
    for(int i=0;prime[i]<val;i++)
    {
        if(a%prime[i]==0)
        {
            while(a%prime[i]==0)
            {
                a=a/prime[i];
                if(prime[i]>j)
                {
                    v.push_back(prime[i]);
                    j=prime[i];
                }
            }
        }
    }
    if(a>1)
    {
         v.push_back(a);
    }
}

int main()
{
    long long n;
    int a=seive();
    while(scanf("%lld",&n) && n!=0)
    {
        if(n==1)
        {
            cout<<"-1"<<endl;
        }
        else if(n==-1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            if(n<0)
            {
                n=-1*n;
            }
            largest_prime_divisor(n);
            if(v.size()==1)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                 cout<<v[v.size()-1]<<endl;
            }
            v.clear();
        }
    }
}

