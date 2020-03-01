#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    scanf("%d",&test_case);
    double c,f;
    int count=1;
    while(test_case--)
    {
        scanf("%lf %lf",&c,&f);
        double one,two;
        one=((9*c)/5)+32;
        one=one+f;
        two=((one-32)*5)/9;
        printf("Case %d: %.2lf\n",count,two);
        count++;
    }
}
