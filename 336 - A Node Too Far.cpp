#include<bits/stdc++.h>
using namespace std;

int mat[35][35];
char color[35];
int level[35];
map<int,int> m;

void bfs(int source)
{
    queue<int> q;

    memset(color,'w',sizeof(color));
    memset(level,0,sizeof(level));

    color[source]='g';
    level[source]=0;

    q.push(source);



    while(!q.empty())
    {

        int temp=q.front();
        q.pop();

        for(int i=1;i<=m.size();i++)
        {

            if(mat[temp][i]==1 && color[i]=='w')
            {
                color[i]='g';
                level[i]=level[temp]+1;
                q.push(i);
            }
        }
        color[temp]='b';
    }
}

int main()
{
    int n,a,b,source,ttl,c=1;

    while(scanf("%d",&n) && n)
    {
        memset(mat,0,sizeof(mat));

        int count=1;

        for(int i=0;i<n;i++)
        {
            scanf("%d %d",&a,&b);

            if(m[a]==0)
            {
                m[a]=count;
                count++;
            }
            if(m[b]==0)
            {
                m[b]=count;
                count++;
            }

            mat[m[a]][m[b]]=1;
            mat[m[b]][m[a]]=1;

        }

        while(scanf("%d %d",&source,&ttl))
        {
            if(source==0 && ttl==0)
            {
                break;
            }

            if(m[source]==0)
            {
                printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",c,m.size()-1,source,ttl);

                map<int,int>::iterator it;
                it=m.find(source);
                m.erase(it);

            }
            else
            {
                bfs(m[source]);

                int sum=0;

                for(int i=1;i<=m.size();i++)
                {
                    if(level[i]>ttl)
                    {
                        sum++;
                    }
                }
                for(int i=1;i<=m.size();i++)
                {
                    if(color[i]=='w')
                    {
                        sum++;
                    }
                }

                printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",c,sum,source,ttl);
                c++;
            }
        }
        m.clear();

    }
}

