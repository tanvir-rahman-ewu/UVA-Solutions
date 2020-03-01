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



int n,m;

int s[100];

 map<int,int> mp;

int bfs(int source)
{
    int temp,a;

    queue<int> q;

    q.push(source);

    mp[source]=1;

    while(!q.empty())
    {
        temp=q.front();

        if(temp==0)
        {
            return mp[temp];
        }

        q.pop();

        for(int i=0;i<m;i++)
        {
            a=temp^s[i];

            if(!mp[a])
            {

                mp[a]=mp[temp]+1;

                q.push(a);

                if(a==0)
                {
                    return mp[a];
                }
            }
        }
    }
    return 0;
}


int main()
{
    int test_case,i,j,sw,q,cs=1,initial;

    scanf("%d",&test_case);

    while(test_case--)
    {
        memset(s,0,sizeof(s));

        scanf("%d %d",&n,&m);

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&sw);

                if(sw)
                {
                    s[i]=s[i]|(1<<(n-(j+1)));
                }
            }
        }

        initial=(1<<(n))-1;

        int ans=bfs(initial);

        if(ans)
        {
            printf("Case %d: %d\n",cs++,ans-1);
        }
        else
        {
            printf("Case %d: IMPOSSIBLE\n",cs++);
        }

        mp.clear();
    }
}

