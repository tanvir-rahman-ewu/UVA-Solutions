#include<bits/stdc++.h>
using namespace std;
int main()
{
    int stacks,a[100],sum,r,result,count=1,i;
    while(scanf("%d",&stacks)==1)
    {
        if(stacks==0)
        {
            break;
        }
        sum=0;
        result=0;
        for(i=0;i<stacks;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<stacks;i++)
        {
            sum=sum+a[i];
        }
        r=sum/stacks;
        for(i=0;i<stacks;i++)
        {
            if(a[i]>r)
            {
                result=result+(a[i]-r);
            }
        }
        printf("Set #%d\n",count);
        printf("The minimum number of moves is %d.\n",result);
        count++;
    }
    return 0;
}
