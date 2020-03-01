#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int x,y;
    while(scanf("%d %d",&a,&b)==2)
    {
        int count=0;
        if(a==0 && b==0)
        {
            break;
        }
        int t=0;
        while(a!=0 || b!=0)
        {
            if(t==0)
            {
                 x=a%10;
                 y=b%10;
            }
            else if(t==1)
            {
                 x=a%10 + 1;
                 y=b%10;
                 t=0;
            }

            if(x+y>=10)
            {
                count++;
                t=t+1;
            }

                a=a/10;
                b=b/10;
        }
        if(count==0)
        {
            printf("No carry operation.\n");
        }
        else if(count==1)
        {
            printf("%d carry operation.\n",count);
        }
        else
        {
            printf("%d carry operations.\n",count);
        }
    }
    return 0;
}
