#include<bits/stdc++.h>
using namespace std;
int power(int a, int b)
{
     int ans=1;
    int i;
    for(i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main()
{
    string number;
    long int ans;
    int i,len,len2;
    while(cin>>number)
    {
        len=number.size();
        len2=len;
        ans=0;
        if(number=="0")
        {
            break;
        }
        for(i=0;i<len;i++)
        {
            ans = ans + ( number[i] - 48 )*( power(2,len2) - 1 );
            len2--;
        }
        printf("%ld\n",ans);
    }
    return 0;
}
