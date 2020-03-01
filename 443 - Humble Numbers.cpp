#include<bits/stdc++.h>
using namespace std;
#define size_n 18409900
#define size_p 18409900

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
void humble_number()
{
   for(long long int j=1;j<=200;j++)
   {
        long long int n=j,t=0,temp=j;
        int val=sqrt(n)+1;
        for(int i=0;prime[i]<val;i++)
        {
            if(n%prime[i]==0)
            {
                while(n%prime[i]==0)
                {
                    if(prime[i]>7)
                    {
                        t++;
                        break;
                    }
                    n=n/prime[i];
                }
            }
            if(t!=0)
            {
                break;
            }

        }
        if(n>7)
        {
            t++;
        }
        if(t==0)
        {
            v.push_back(temp);
        }
    }
}
int main()
{
    int a=seive();
    humble_number();
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
