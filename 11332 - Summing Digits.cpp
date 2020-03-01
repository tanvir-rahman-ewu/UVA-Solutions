#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp;
    while(scanf("%d",&n)==1 && n!=0)
    {


       while(n>=10)
       {
            int sum=0;
            temp=n;
           while(temp>0)
           {
               sum=sum + temp%10;
               temp=temp/10;
           }
            n=sum;
       }
       printf("%d\n",n);
    }
    return 0;
}
