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

struct s
{
    int a,b;
};

int check(int n,int b)
{
    int ans=(n*b)%(b-n);

    if(!ans)
    {
        return (n*b)/(b-n);
    }

    return 0;
}

int main()
{
    int n,i,a;

    s temp;

    while(scanf("%d",&n)!=EOF)
    {
        vector<s> v;

        for(i=n+1;i<=n*2;i++)
        {
            a=check(n,i);

            if(a)
            {
                temp.a=a;
                temp.b=i;

                v.push_back(temp);
            }
        }

        printf("%d\n",v.size());

        for(i=0;i<v.size();i++)
        {
            printf("1/%d = 1/%d + 1/%d\n",n,v[i].a,v[i].b);
        }
    }
}
