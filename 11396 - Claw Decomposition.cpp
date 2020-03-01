#include<bits/stdc++.h>
using namespace std;

int mat[305][305],color[305],v,tag[305];

bool bfs()
{
    queue<int> q;

    q.push(1);

    color[1]=1;

    tag[1]=1;

    while(!q.empty())
    {
        int temp=q.front();

        q.pop();

        for(int i=1;i<=v;i++)
        {
            if(mat[temp][i] && !color[i])
            {
                color[i]=1;

                tag[i]=1-tag[temp];

                q.push(i);
            }
            else if(mat[temp][i] && tag[temp]==tag[i])
            {
                return false;
            }
        }
    }

    return true;

}
int main()
{
    int a,b;

    while(scanf("%d",&v) && v)
    {

        memset(mat,0,sizeof(mat));
        memset(color,0,sizeof(color));
        memset(tag,0,sizeof(tag));

        while(scanf("%d %d",&a,&b) && a && b)
        {
            mat[a][b]=1;
            mat[b][a]=1;
        }

        if(bfs())
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
