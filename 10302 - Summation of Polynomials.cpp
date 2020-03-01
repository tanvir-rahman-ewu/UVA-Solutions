#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,ans;
    while(scanf("%lld",&a)!=EOF)
    {
        ans=(a*a*(a+1)*(a+1))/4;
        cout<<ans<<endl;
    }
}
