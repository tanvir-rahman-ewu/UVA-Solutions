#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ans;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a<b)
        {
            swap(a,b);
        }
        ans=a-b;
        printf("%d\n",ans);

    }
    return 0;
}
