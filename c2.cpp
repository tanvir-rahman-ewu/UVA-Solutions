#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,n,m,a,b,ans;
    cin>>test_case;
    while(test_case--)
    {
        cin>>n>>m>>a>>b;
        if(n%m==0)
        {
            ans=(n/m)*b;
        }
        else
        {
            ans=(n%m)*a + (n/m)*b;
        }
        cout<<ans;
    }
}
