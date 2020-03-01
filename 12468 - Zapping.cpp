#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y;
    while(scanf("%d %d",&a,&b) && a!=-1 && b!=-1)
    {
        if(a>b)
        {
            x=abs(a-b);
            y=(99-a)+b+1;
        }
        else
        {
             x=a+(99-b)+1;
             y=abs(a-b);
        }
        if(x>y)
        {
            cout<<y<<endl;
        }
        else
        {
            cout<<x<<endl;
        }
    }
}
