#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define inf (1<<30)

//4 Direction
int dx[]= {1,0,-1,0};
int dy[]= {0,1,0,-1};

//8 direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};

//Knight Direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};


char mat[25][25],start;
int color[25][25],M,N,sum;


void bfs(int x,int y)
{
    queue<int> q;

    q.push(x);
    q.push(y);

    color[x][y]=1;

    sum++;

    while(!q.empty())
    {
        int u=q.front();
        q.pop();

        int v=q.front();
        q.pop();

        for(int i=0;i<4;i++)
        {
            int a=u+dx[i];
            int b=v+dy[i];

            if(b<0)
            {
                b=N-1;
            }
            else if(b==N)
            {
                b=0;
            }

            if(a>=0 && a<M && !color[a][b] && mat[a][b]==start)
            {
                color[a][b]=1;

                q.push(a);
                q.push(b);

                sum++;
            }
        }
    }
}
int main()
{
    int x,y;

    while(scanf("%d %d",&M,&N)!=EOF)
    {
        memset(color,0,sizeof(color));

        for(int i=0;i<M;i++)
        {
            scanf("%s",&mat[i]);
        }

        scanf("%d %d",&x,&y);

        start=mat[x][y];

        bfs(x,y);

        int max=0;

        for(int i=0;i<M;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(mat[i][j]==start && !color[i][j])
                {
                    sum=0;

                    bfs(i,j);

                    if(sum>max)
                    {
                        max=sum;
                    }
                }
            }
        }

        printf("%d\n",max);
    }
}
