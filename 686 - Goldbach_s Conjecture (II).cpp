#include<bits/stdc++.h>
using namespace std;
#define size_n 1000000
#define size_p 1000000

bool flag[size_n+5];
void seive()
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
}
void solution(int a)
{
    int count=0;
    for(int i=2;i<=a/2;i++)
    {
        if(flag[i] && flag[a-i])
        {
            count++;
        }
    }
    printf("%d\n",count);
}
int main()
{
    int n;
    seive();
    while(scanf("%d",&n) && n!=0)
    {
        solution(n);
    }
}
