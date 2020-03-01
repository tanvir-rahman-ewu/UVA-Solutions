#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,x,y;
    while(scanf("%d",&a)!=EOF)
    {
        int sum=0;
        for(i=1;sum<=a;i++)
        {
            sum=sum+i;
        }
        int count=i-2;
        int lower=sum-i+1;
        int t=0;
        if(count%2==0)
        {
            x=count;
            y=1;
            if(a-lower==1)
            {
                cout<<"TERM "<<a<<" IS "<<x+1<<"/"<<y<<endl;
            }
            else
            {
                 while(lower!=a)
                {
                    x--;
                    y++;
                    lower++;
                    t++;
                }
                if(t==0)
                {
                     cout<<"TERM "<<a<<" IS "<<x<<"/"<<y<<endl;
                }
                else
                {
                     cout<<"TERM "<<a<<" IS "<<x+2<<"/"<<y-1<<endl;
                }
            }
        }
        else
        {
            x=1;
            y=count;
            if(a-lower==1)
            {
                 cout<<"TERM "<<a<<" IS "<<x<<"/"<<y+1<<endl;
            }
            else
            {
                while(lower!=a)
                {
                    x++;
                    y--;
                    lower++;
                    t++;
                }
               if(t==0)
                {
                     cout<<"TERM "<<a<<" IS "<<x<<"/"<<y<<endl;
                }
                else
                {
                     cout<<"TERM "<<a<<" IS "<<x-1<<"/"<<y+2<<endl;
                }
            }
        }
    }
}
