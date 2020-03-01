#include<bits/stdc++.h>
using namespace std;


map<vector<int>,int> m;


int da[]={1,-1,0,0,0,0,0,0};
int db[]={0,0,1,-1,0,0,0,0};
int dc[]={0,0,0,0,1,-1,0,0};
int dd[]={0,0,0,0,0,0,1,-1};

int color[11][11][11][11];
int dis[11][11][11][11];

struct s
{
    int a,b,c,d;

    void p(int x,int y)
    {
        if(x==0)
        {
            a=y;
        }
        else if(x==1)
        {
            b=y;
        }
        else if(x==2)
        {
            c=y;
        }
        else
        {
            d=y;
        }
    }
};

int bfs(s source,s destination)
{
    queue<s> q;

    q.push(source);

    dis[source.a][source.b][source.c][source.d]=0;
    color[source.a][source.b][source.c][source.d]=1;

    while(!q.empty())
    {
        s t=q.front();
        q.pop();

        if(t.a==destination.a && t.b==destination.b && t.c==destination.c && t.d==destination.d)
        {
            return dis[t.a][t.b][t.c][t.d];
        }

        s u;

        for(int i=0;i<8;i++)
        {
            u.a=t.a+da[i];
            u.b=t.b+db[i];
            u.c=t.c+dc[i];
            u.d=t.d+dd[i];

            if(u.a>9)
            {
                u.a=0;
            }
            if(u.b>9)
            {
                u.b=0;
            }
            if(u.c>9)
            {
                u.c=0;
            }
            if(u.d>9)
            {
                u.d=0;
            }
            if(u.a<0)
            {
                u.a=9;
            }
            if(u.b<0)
            {
                u.b=9;
            }
            if(u.c<0)
            {
                u.c=9;
            }
            if(u.d<0)
            {
                u.d=9;
            }

            if(!color[u.a][u.b][u.c][u.d])
            {
                color[u.a][u.b][u.c][u.d]=1;

                dis[u.a][u.b][u.c][u.d]=dis[t.a][t.b][t.c][t.d]+1;

                q.push(u);
            }
        }
    }

    return -1;

}

int main()
{
    int test_case,n,f;

    scanf("%d",&test_case);

    while(test_case--)
    {
        s source,destination,temp;

        memset(dis,0,sizeof(dis));
        memset(color,0,sizeof(color));

        for(int i=0;i<4;i++)
        {
            scanf("%d",&n);

            source.p(i,n);
        }



        for(int i=0;i<4;i++)
        {
            scanf("%d",&n);

            destination.p(i,n);
        }

        scanf("%d",&f);

        for(int i=0;i<f;i++)
        {
            for(int j=0;j<4;j++)
            {
                scanf("%d",&n);

                temp.p(j,n);
            }
            color[temp.a][temp.b][temp.c][temp.d]=1;
        }

        cout<<bfs(source,destination)<<endl;
    }
}
