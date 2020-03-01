#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,n;
    scanf("%d",&test_case);
    while(test_case--)
    {
        scanf("%d",&n);
        int t=n;
        int count=0;
        while(n!=0)
        {
            if(n%2==1)
            {
                count++;
            }
            n=n/2;
        }
        printf("%d ",count);
        int count1=0;
        while(t!=0)
        {
            if(t%10==0)
            {
                continue;
            }
            else if(t%10==1)
            {
                count1++;
            }
             else if(t%10==2)
            {
                count1++;
            }
             else if(t%10==3)
            {
                count1=count1+2;
            }
             else if(t%10==4)
            {
                count1++;
            }
             else if(t%10==5)
            {
                count1=count1+2;
            }
             else if(t%10==6)
            {
                count1=count1+2;
            }
             else if(t%10==7)
            {
                count1=count1+3;
            }
             else if(t%10==8)
            {
                count1++;
            }
             else if(t%10==9)
            {
                count1=count1+2;
            }
            t=t/10;
        }
        printf("%d\n",count1);
    }

}

