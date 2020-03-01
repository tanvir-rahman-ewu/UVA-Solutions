#include<bits/stdc++.h>
using namespace std;
int main()
{

    string a;
    cin>>a;
    int sum=0;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]>64 && a[i]<92)
        {
            sum=sum+ (int(a[i])-38);
        }
        else
        {
            sum=sum+(int(a[i])-96);
        }
    }
    cout<<sum;
}
