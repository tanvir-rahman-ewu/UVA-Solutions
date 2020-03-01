#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    double distance,df,h,u,d,f;
    while(scanf("%lf %lf %lf %lf",&h,&u,&d,&f)==4)
    {
        if(h==0)
        {
            break;
        }
        df=u*f/100.0;
        count=0;
        distance=0;
        while(1)
        {
            count++;
            distance=distance+u;
            if(distance>h)
            {
                printf("success on day %d\n",count);
                break;
            }

            distance=distance-d;

            if(distance<0)
            {
                printf("failure on day %d\n",count);
                break;
            }
            u=u-df;
            if(u<0)
            {
                u=0;
            }
        }
    }
    return 0;
}
