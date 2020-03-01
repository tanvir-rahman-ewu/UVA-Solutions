#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)

int main()
{
    int test_case,l;

    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%d",&l);

        double w=(6*l)/10.0;

        double area=w*l;

        double r=l/5.0;

        cout<<fixed<<setprecision(2)<<area-(area-(pi*r*r))<<" "<<area-(pi*r*r)<<endl;
    }
}
