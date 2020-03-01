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

struct edges
{
    int x,y;

    bool operator<(const edges& b)
    {
        if(x==b.x)
            return y<b.y;
        return x<b.x;
    }


};
vector<edges>v;
void initialize(int n)
{
    dtime=0;
    v.clear();
    for(int i=0;i<n;i++)
    {
        adj[i].clear();
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


            low[src]=min(low[src],low[des]);

            if(disc[src]<low[des])
            {
                isart[src]=true;

                edges e;
                if(src<des)
                {
                e.x=src;
                e.y=des;
                }
                else
                {
                e.y=src;
                e.x=des;
                }
                v.push_back(e);

            }

        }
        else if(des!=parent[src])
            low[src]=min(low[src],disc[des]);
    }


}
int main()
{
    int n,m,x,y;
    int t=0;
    //freopen("output.txt","w",stdout);
    while(scanf("%d",&n)==1)
    {


        initialize(n);

        for(int j=0;j<n;j++)
        {


            scanf("%d (%d)",&x,&m);
        for(int k=0;k<m;k++)
        {
        //scanf("%d %d",&x,&y);

            scanf("%d",&y);

            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        }



        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                ap(i);

            }
        }
        sort(v.begin(),v.end());

        cout<<v.size()<<" critical links"<<endl;
       for(int i=0;i<v.size();i++)
       {
            printf("%d - %d\n",v[i].x,v[i].y);
       }
       printf("\n");

    }






}

