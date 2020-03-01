#include<bits/stdc++.h>
using namespace std;
int main()
{
    double test_case,x,y,radius,distance,shortest,longest;
    scanf("%lf",&test_case);
    while(test_case--)
    {
        scanf("%lf %lf %lf",&x,&y,&radius);
        distance=sqrt((x*x)+(y*y));
        shortest=radius-distance;
        longest=radius+distance;
        printf("%0.2lf %0.2lf\n",shortest,longest);
    }
    return 0;
}
