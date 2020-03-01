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
void count()
{
    int a=seive();
    int c=0;
    for(int i=0;i<a-1;i++)
    {
        if(prime[i+1]-prime[i]==2)
        {
            v.push_back(prime[i]);
        }
    }

}
int main()
{
    int a=seive();
    count();
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int x=v[n-1]+2;
        printf("(");
        printf("%d",v[n-1]);
        printf(", %d",x);
        printf(")\n");
    }
}
