#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
      if(b==0)
      {
           return a;
      }
      else
      {
         gcd(b,a%b);
      }
}
int main()
{
    int n;

    while(scanf("%d",&n) && n)
    {
        int sum=0;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                sum=sum+gcd(i,j);
            }
        }
        printf("%d\n",sum);
    }
}
