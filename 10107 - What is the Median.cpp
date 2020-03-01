#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    vector<long long int> v;
    while(scanf("%lld",&n)==1)
    {
        v.push_back(n);
        sort(v.begin(),v.begin()+v.size());
        if(v.size()==1)
        {
            printf("%lld\n",v[0]);
        }
        else if(v.size()%2!=0)
        {
            long int s=v.size();
            s=s/2 ;
            printf("%lld\n",v[s]);
        }
        else if(v.size()%2==0)
        {
            long long int s=v.size();
            s=s/2;
            s=(v[s]+v[s-1])/2;
            printf("%lld\n",s);
        }
    }
    return 0;
}
