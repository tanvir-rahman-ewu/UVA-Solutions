#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,m,c=1;
    vector<int> v;

    while(scanf("%d",&n) && n)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);

            v.push_back(a);
        }

        scanf("%d",&m);

        printf("Case %d:\n",c);
        c++;

        for(int i=0;i<m;i++)
        {
            scanf("%d",&a);

            long long sum=10000000000000;
            int temp;
            int ans;

            for(int i=0;i<v.size();i++)
            {
                for(int j=i+1;j<v.size();j++)
                {
                    temp=abs(a-(v[i]+v[j]));

                    if(temp<sum)
                    {
                        ans=v[i]+v[j];
                        sum=temp;
                    }
                }
            }

            printf("Closest sum to %d is %d.\n",a,ans);

        }
         v.clear();
    }
}
