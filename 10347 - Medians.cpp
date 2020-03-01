#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define inf (1<<30)

//4 Direction
//int dx[]= {1,0,-1,0};
//int dy[]= {0,1,0,-1};

//8 direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};

//Knight Direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};

int main()
{
    double a,b,c,ans,s;

    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        if(a+b<=c || b+c<=a || a+c<=b)
        {
            printf("-1.000\n");
            continue;
        }

        s=(a+b+c)/2.0;

        ans=(4/3.0)*sqrt(s*(s-a)*(s-b)*(s-c));

        printf("%.3lf\n",ans);

    }
}
