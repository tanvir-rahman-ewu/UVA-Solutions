#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,n,x,temp;

    scanf("%d",&test_case);

    while(test_case--)
    {
        int sum=0;

        scanf("%d",&n);

        priority_queue<int> p;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);

            p.push(x);
        }

        while(p.size()!=1)
        {
            temp=p.top();

            p.pop();

            sum = sum + ( temp-p.top() );
        }

        printf("%d\n",sum*2);
    }
}
