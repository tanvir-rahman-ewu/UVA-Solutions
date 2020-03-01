#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define inf (1<<30)

//4 Direction
//int dx[]= {1,0,-1,0};
//int dy[]= {0,1,0,-1};

//8 direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};

//Knight Direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};

int main()
{
    int test_case,r,i,n;
    long long int sum,mean;

    vector<int> v;

    scanf("%d",&test_case);

    while(test_case--)
    {
        sum=0;

        scanf("%d",&r);

        for(i=0;i<r;i++)
        {
            scanf("%d",&n);

            v.push_back(n);
        }

        sort(v.begin(),v.end());

        mean=v[r/2];

        for(i=0;i<r;i++)
        {
            sum=sum+abs(v[i]-mean);
        }

        printf("%lld\n",sum);

        v.clear();
    }
}
