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
void solution(int a)
{
    for(int i=2;i<=a/2;i++)
    {
        if(flag[i] && flag[a-i])
        {
            printf("%d = %d + %d\n",a,i,a-i);
            break;
        }
    }
}
int main()
{
    int n,t=seive();
    while(scanf("%d",&n) && n!=0)
    {
        solution(n);
    }
}
