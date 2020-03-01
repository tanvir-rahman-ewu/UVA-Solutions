#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a;
    while(scanf("%lld",&a) && a!=0)
    {
        long long t=sqrt(a);
        if(t*t==a)
        {
            printf("yes\n");
        }
        else
        {
            printf("not\n");
        }
    }
}
