#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long m, x, income;

    while(scanf("%lld %lld",&m, &x) && (m + x))
    {

        if(x == 100 || m == 0)
        {
            printf("Not found\n");
            continue;
        }

        income = (m - 1) * 100 / (100 - x);

        if((m - 1) * 100 % (100 - x) == 0)
        {
            income--;
        }

        if(income < m )
        {
            printf("Not found\n");
        }
        else
        {
            printf("%d\n",income);
        }

    }
}
