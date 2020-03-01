#include<bits/stdc++.h>
using namespace std;
#define size_n 10000000
#define size_p 10000000

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

int main()
{
    int n,t=seive(),i;

    for(i=0;prime[i]<=500;i++)
    {
        cout<<prime[i]<<",";
    }
    cout<<prime[94];

}
