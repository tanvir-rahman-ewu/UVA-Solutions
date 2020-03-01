#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define inf (1<<30)
int state[15],L,U,R;
//4 Direction
//int dx[]= {1,0,-1,0};
//int dy[]= {0,1,0,-1};

//8 direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};

//Knight Direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};
int bfs()
{
    queue<int> q;

    map<int,int> m;

    int i,parent,child;

    q.push(L);

    m[L]=1;

    while(!q.empty())
    {
        parent=q.front();

        if(parent==U)
        {
            return m[U];
        }

        q.pop();

        for(i=0;i<R;i++)
        {
            child=(parent+state[i])%10000;

            if(!m[child])
            {
                m[child]=m[parent]+1;

                q.push(child);

                if(child==U)
                {
                    return m[U];
                }
            }
        }
    }
    return -1;
}
int main()
{
    int test_case,i,j,n,ans,c=1;

    while(scanf("%d %d %d",&L,&U,&R) && (L+U+R))
    {
        for(i=0;i<R;i++)
        {
            scanf("%d",&state[i]);
        }

        ans=bfs();

        if(ans!=-1)
        {
            printf("Case %d: %d\n",c++,ans-1);
        }
        else
        {
            printf("Case %d: Permanently Locked\n",c++);
        }
    }
}
