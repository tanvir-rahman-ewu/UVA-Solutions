#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test_case,a,b,c,d;
    scanf("%lld",&test_case);
    while(test_case--)
    {
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

        if(a==b && b==c && c==d)
        {
            printf("square\n");
        }
        else if((a==b && c==d) || (a==c && b==d) || (a==d && c==b))
        {
            printf("rectangle\n");
        }
        else if((a<=b+c+d) && (b<=a+c+d) && (c<=b+a+d) && (d<=b+c+a))
        {
            printf("quadrangle\n");
        }
        else
        {
            printf("banana\n");
        }
    }
}
