#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,number,ans;
    scanf("%d",&test_case);
    while(test_case--)
    {
        scanf("%d",&number);
        ans=((((((number*567)/9)+7492)*235)/47)-498);
        ans=ans%100;
        ans=abs(ans/10);
        printf("%d\n",ans);
    }
    return 0;
}
