#include<bits/stdc++.h>
using namespace std;
int main()
{

    double tk_per_hour,test_case,tk_of_a,x,y,z;
    scanf("%lf",&test_case);
    while(test_case--)
    {
        scanf("%lf%lf%lf",&x,&y,&z);
        tk_per_hour=z/(x+y);
        tk_of_a=x*tk_per_hour+(x-y)*tk_per_hour;
        printf("%.0lf\n",tk_of_a);
    }
}
