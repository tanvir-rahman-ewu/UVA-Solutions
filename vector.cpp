#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> a;
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&m);
        a.push_back(m);
    }
    for(int i=0;i<a.size();i++)
    {
        printf("%d",a[i]);
    }
}
