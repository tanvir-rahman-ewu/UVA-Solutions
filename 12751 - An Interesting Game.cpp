#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,n,k,x,count=1;

    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%d %d %d",&n,&x,&k);

        printf("Case %d: %d\n",count,(n*(n+1))/2 - (x*(2*k+x-1))/2);

        count++;
    }
}
