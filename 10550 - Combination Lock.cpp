#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,a,b,c,sum;

    while(scanf("%d %d %d %d",&s,&a,&b,&c))
    {
        sum=720;

        if(!a && !b && !c && !s)
        {
            break;
        }

        if(s<a)
        {
            sum=sum + (s+(40-a))*9;
        }
        else
        {
            sum=sum+ (s-a)*9;
        }


        sum=sum+360;

        s=a;

        if(s<b)
        {
            sum=sum+ (b-s)*9;
        }
        else
        {
            sum=sum + (b+(40-s))*9;
        }

        s=b;

        if(s<c)
        {
            sum=sum + (s+(40-c))*9;
        }
        else
        {
            sum=sum+ (s-c)*9;
        }


        cout<<sum<<endl;

    }
}
