#include<bits/stdc++.h>
using namespace std;

char mat[15][15];
int color[200][200];

int a,b,c;

void bfs(int x,int y)
{
    int count=1;
    queue<int> q;

    q.push(x);
    q.push(y);

    color[x][y]=count;

    while(!q.empty())
    {
        count++;
        int x1,y1,x2,y2;

        x1=q.front();
        q.pop();
        y1=q.front();
        q.pop();

        if(mat[x1][y1]=='N')
        {
            x2=x1-1;
            y2=y1;
        }
        else if(mat[x1][y1]=='S')
        {
            x2=x1+1;
            y2=y1;
        }
        else if(mat[x1][y1]=='E')
        {
            x2=x1;
            y2=y1+1;
        }
        else if(mat[x1][y1]=='W')
        {
            x2=x1;
            y2=y1-1;
        }

        if(x2>=0 && x2<a && y2>=0 && y2<b && color[x2][y2]==0)
        {
            color[x2][y2]=count;
            q.push(x2);
            q.push(y2);
        }
        else if(x2<0 || x2>=a || y2<0 || y2>=b)
        {
            printf("%d step(s) to exit\n",count-1);
            break;
        }
        else if(color[x2][y2])
        {
            printf("%d step(s) before a loop of %d step(s)\n",color[x2][y2]-1,count-color[x2][y2]);
            break;
        }
    }
}
int main()
{
    while(scanf("%d %d %d",&a,&b,&c) && a && b && c)
    {
        memset(color,0,sizeof(color));

        for(int i=0;i<a;i++)
        {
            scanf("%s",&mat[i]);
        }

        bfs(0,c-1);
    }

}
