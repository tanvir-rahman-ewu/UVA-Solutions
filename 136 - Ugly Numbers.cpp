#include<bits/stdc++.h>
using namespace std;
int prime(int a)
{
    int i;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            return 0;
            break;
        }
    }
    return 1;
}
int main()
{
    int a;
    cin>>a;
    cout<<prime(a);
}
