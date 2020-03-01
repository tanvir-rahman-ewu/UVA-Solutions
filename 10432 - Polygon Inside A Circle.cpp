#include<bits/stdc++.h>
using namespace std;

int main()
{
    double ans,radius,side;
    while(scanf("%lf %lf",&radius,&side)==2)
    {
        ans=side*radius*radius/2*sin(2.0*3.1415926535897932384626433832795/side);
        printf("%.3lf\n",ans);
    }
}
