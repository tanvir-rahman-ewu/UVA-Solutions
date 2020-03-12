#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d;

    double n;


    while(scanf("%lld %lld", &a, &b) == 2)
    {
        scanf("%lf", &n);

        long double t1 = (long double)a / b;
        long double t2;

        for(d = 1; ; d++)
        {
            c = (long double)(t1*d);

            while(a * d >= b * c)
            {
                c++;
            }

            t2 = (long double)c / d;

            if(t2 - t1 <= n)
            {
                printf("%lld %lld\n", c, d);
                break;
            }
        }
    }

}


