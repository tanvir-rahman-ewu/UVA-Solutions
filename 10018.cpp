#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,c,t,inverse,r;
    int test_case;
    scanf("%d",&test_case);
    while(test_case--)
    {
       c=0;
       scanf("%lld",&a);
       t=a;
    while(1)
    {
        inverse=0;
        while(a>0)
        {
            r=a%10;
            inverse=inverse*10 + r;
            a=a/10;
        }
        if(a==inverse)
        {
            break;
        }
        else{
        t=a+inverse;
        a=a+inverse;
        c++;
        }
    }
         printf("%lld %lld\n",c,a);
    }
    return 0;
}
