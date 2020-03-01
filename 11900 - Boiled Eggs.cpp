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
    int test_case,n,p,q,i,val,c,sum,cs=1;

    vector<int> v;

    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%d %d %d",&n,&p,&q);

        for(i=0;i<n;i++)
        {
            scanf("%d",&val);

            v.push_back(val);
        }

        c=sum=0;

        sort(v.begin(),v.end());

        for(i=0;i<n;i++)
        {
            if(sum+v[i]<=q)
            {
                sum=sum+v[i];
                c++;
            }
            else
            {
                break;
            }

            if(c==p)
            {
                break;
            }
        }

        printf("Case %d: %d\n",cs++,c);

        v.clear();
    }
}
