#include<bits/stdc++.h>
using namespace std;
int main()
{
    double test_case,f,s,a,e;

    while(scanf("%lf",&test_case)!=EOF)
    {

        while(test_case--)
        {
            double sum=0;
            scanf("%lf",&f);
            while(f--)
            {
               scanf("%lf %lf %lf",&s,&a,&e);
               double p= (s/a)*a*e;
               sum=sum+p;
            }
            int ans=sum;
            printf("%d\n",ans);
        }
    }
}
