#include<bits/stdc++.h>
using namespace std;
#define maxv 105
vector<int>adj[maxv];
bool visited[maxv];
int disc[maxv];
int low[maxv];
int parent[maxv];
int child[maxv];
int dtime=0;
bool isart[maxv];
void initialize()
{
    dtime=0;
    for(int i=1;i<=maxv;i++)
    {
        isart[i]=false;
        visited[i]=false;
        disc[i]=0;
        parent[i]=0;
        low[i]=0;
        child[i]=0;
    }
}
void ap(int src)
{
    visited[src]=true;
    disc[src]=low[src]=dtime++;

    for(int i=0;i<adj[src].size();i++)
    {
        int des=adj[src][i];

        if(!visited[des])
        {
            child[src]++;
            visited[des]=true;
            parent[des]=src;

            ap(des);

            if(disc[src]<=low[des])
                isart[src]=true;
            else
                low[src]=min(low[src],low[des]);
        }
        else
            low[src]=min(low[src],disc[des]);
    }

}
int main()
{
    int n,m,x,y;
    scanf("%d %d",&n,&m);

    initialize();

    for(int i=0;i<m;i++)
    {
        scanf("%d %d",&x,&y);

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    parent[1]=-1;

    ap(1);
    if(child[1]==1)
        isart[1]=false;


    for(int i=1;i<=n;i++)
    {
        if(isart[i])
        printf("%d ",i);
    }




}
