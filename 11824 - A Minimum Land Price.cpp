#include<bits/stdc++.h>
using namespace std;
int power(int a,int b)
{
    int ans=1;

    for(int i=0;i<b;i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main()
{
    int test_case,n,x;

    scanf("%d",&test_case);

    while(test_case--)
    {
        priority_queue<int> p;

        while(scanf("%d",&n) && n!=0)
        {
            p.push(n);
        }

        int sum=0;
        int c=1;
        int tag=0;

        while(!p.empty())
        {
            int temp=p.top();
            p.pop();

            sum = sum + 2*(power(temp,c));
            c++;

            if(sum>5000000)
            {
                printf("Too expensive\n");
                tag++;
                break;
            }

        }

        if(tag==0)
        {
            printf("%d\n",sum);
        }
    }
}
