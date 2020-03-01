#include<iostream>
#include<math.h>
#include<cstdio>
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

int main()
{
    int N;
    int total=seive();

    while(scanf("%d",&N)!=EOF)
    {
        if(flag[N]==0)
        {
            printf("%d is not prime.\n",N);
        }
        else
        {
            int reverse_N=0,remainder;
            int temp=N;
            while(temp!=0)
            {
                remainder=temp%10;
                reverse_N=reverse_N*10+remainder;
                temp=temp/10;
            }

            if(flag[N]==1 && flag[reverse_N]==1 && N!=reverse_N)
            {
                printf("%d is emirp.\n",N);
            }
            else
            {
                printf("%d is prime.\n",N);
            }
        }
    }
}
