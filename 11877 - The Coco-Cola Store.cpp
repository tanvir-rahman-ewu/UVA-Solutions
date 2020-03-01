#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d=3, a;
    while(scanf("%d",&n) && n!=0)
    {
        int sum=0,t=0;
        while(1)
        {
            if(n==0)
            {
                break;
            }
            else
            {
                 a=n/d;
                if(n>d)
                {
                    n=n/d+n%d;
                }
                else
                {
                    if(t==0)
                    {
                        n++;
                        t++;
                    }
                    a=n/d;
                    n=n/d;
                }
                sum=sum+a;
            }
        }
        cout<<sum<<endl;
    }
}
