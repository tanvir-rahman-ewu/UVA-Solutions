#include<bits/stdc++.h>
using namespace std;

#define inf (1<<30)

int row,col,mat[1005][1005],cost[1005][1005];

int a[]={1,0,-1,0};
int b[]={0,1,0,-1};

struct node
{
    int x,y,distance;

    bool operator < (const node& p) const
    {
        return distance>p.distance;
    }
};

int dijkastra()
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cost[i][j]=inf;
        }
    }

    priority_queue<node> q;

    node source;

    source.x=0;
    source.y=0;
    source.distance=mat[0][0];

    q.push(source);

    cost[0][0]=mat[0][0];

    while(!q.empty())
    {
        node temp=q.top();
        q.pop();

        for(int i=0;i<4;i++)
        {
            node u;

            u.x=temp.x+a[i];
            u.y=temp.y+b[i];

            u.distance=cost[temp.x][temp.y]+mat[u.x][u.y];



            if(u.x>=0 && u.x<row && u.y>=0 && u.y<col && u.distance<cost[u.x][u.y])
            {

                cost[u.x][u.y]=u.distance;

                q.push(u);
            }
        }
    }

    return cost[row-1][col-1];
}

int main()
{
    int test_case,w;

    scanf("%d",&test_case);

    while(test_case--)
    {

        scanf("%d %d",&row,&col);

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                scanf("%d",&w);

                mat[i][j]=w;
            }
        }



        cout<<dijkastra()<<endl;
    }
}
