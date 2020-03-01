#include<bits/stdc++.h>
using namespace std;
int main()
{

    double  hour,munite,angel,hour_angel,munite_angel;
    while(scanf("%lf:%lf",&hour,&munite)==2)
    {
        if(hour==0 && munite==0)
        {
            break;
        }

        hour_angel = ( 30 * hour )+ (munite/2);

        munite_angel= 6 * munite;

        angel = hour_angel - munite_angel;

        if(angel<0)
        {
            angel*=-1;
        }
         if(angel>180)
        {
            angel = 360 - angel;
        }
        printf("%.3lf\n",angel);
    }
}
