#include<bits/stdc++.h>
using namespace std;

int ux[]={1,2,2,1,-1,-2,-2,-1};
int uv[]={-2,-1,1,2,2,1,-1,-2};

char color[70][70];
int level[100][100];

void bfs(int x1,int y1)
{
    queue<int> q;

    memset(color,'w',sizeof(color));
    memset(level,0,sizeof(level));
    level[x1][y1]=0;
    color[x1][y1]='g';

    q.push(x1);
    q.push(y1);

    while(!q.empty())
    {
        int x,y,x1,y1;
        x=q.front();
        q.pop();
        y=q.front();
        q.pop();

        for(int i=0;i<8;i++)
        {
            x1=x+ux[i];
            y1=y+uv[i];

            if(x1>=1 && x1<9 && y1>=1 && y1<9 && color[x1][y1]=='w')
            {
                level[x1][y1]=level[x][y]+1;
                q.push(x1);
                q.push(y1);
                color[x1][y1]='g';
            }
         }
         color[x][y]='b';
    }
}
int main()
{
    string a,b;

    while(getline(cin,a))
    {
         memset(level,0,sizeof(level));
         int x1,y1,x2,y2;

         x1=int(a[0])-96;
         y1=int(a[1])-48;
         x2=int(a[3])-96;
         y2=int(a[4])-48;

         bfs(x1,y1);

         printf("To get from %c%c to %c%c takes %d knight moves.\n",a[0],a[1],a[3],a[4],level[x2][y2]);

    }
}
