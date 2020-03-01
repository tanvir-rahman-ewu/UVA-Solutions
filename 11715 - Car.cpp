#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,u,a,t,v,s;
    int c=1;
    while(scanf("%lf",&n)&&n!=0)
    {
        if(n==1)
        {
            scanf("%lf %lf %lf",&u,&v,&t);
            a=(v-u)/t;
            s=u*t + .5*a*t*t;
            printf("Case %d: %0.3lf %0.3lf\n",c,s,a);
            c++;
        }
        else if(n==2)
        {
            scanf("%lf %lf %lf",&u,&v,&a);
            t=(v-u)/a;
            s=u*t + .5*a*t*t;
            printf("Case %d: %0.3lf %0.3lf\n",c,s,t);
            c++;
        }
        else if(n==3)
        {
            scanf("%lf %lf %lf",&u,&a,&s);
            v=sqrt(u*u + 2*a*s);
            t=(v-u)/a;
            printf("Case %d: %0.3lf %0.3lf\n",c,v,t);
            c++;
        }
        else if(n==4)
        {
            scanf("%lf %lf %lf",&v,&a,&s);
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %0.3lf %0.3lf\n",c,u,t);
            c++;
        }
    }
    return 0;
}
