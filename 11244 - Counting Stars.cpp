#include<bits/stdc++.h>
using namespace std;

char mat[105][105];
char color[105][105];

int X[8]= {-1,-1,-1,0,0,1,1,1};
int Y[8]= {-1,0,1,-1,1,-1,0,1};
int row,col;

bool bfs(int x,int y)
{
    bool ans=true;

    queue<int> q;

    q.push(x);
    q.push(y);

    color[x][y]='g';

    while(!q.empty())
    {
        int x1,y1,x2,y2;

        x1=q.front();
        q.pop();
        y1=q.front();
        q.pop();

        for(int i=0;i<8;i++)
        {
            x2=x1+X[i];
            y2=y1+Y[i];

            if(x2>=0 && y2>=0 & x2<row && y2<col && mat[x2][y2]=='*' && color[x2][y2]=='w')
            {
                color[x2][y2]='g';

                q.push(x2);
                q.push(y2);
                ans=false;

            }
        }
        color[x1][y1]='b';
    }
    return ans;
}

int main()
{

    while(scanf("%d %d",&row,&col) && row && col)
    {
        memset(color,'w',sizeof(color));

        for(int i=0;i<row;i++)
        {
            scanf("%s",&mat[i]);
        }


        int c=0;

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(mat[i][j]=='*' && color[i][j]=='w')
                {

                    if(bfs(i,j))
                    {
                        c++;
                    }
                }
            }
        }

        printf("%d\n",c);
    }
}
