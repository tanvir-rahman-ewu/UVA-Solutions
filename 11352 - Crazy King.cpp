#include<bits/stdc++.h>
using namespace std;

int m,n;

char mat[1000][1000];
int level[1000][1000];
char color[1000][1000];

int ux[]={1,2,2,1,-1,-2,-2,-1};
int uv[]={-2,-1,1,2,2,1,-1,-2};

int a[]={-1,-1,-1,0,0,1,1,1};
int b[]={-1,0,1,-1,1,-1,0,1};


void bfs(int x,int y)
{
    queue<int> q;

    q.push(x);
    q.push(y);

    memset(color,'w',sizeof(color));
    memset(level,0,sizeof(level));

    level[x][y]=0;
    color[x][y]='g';

    while(!q.empty())
    {
        int a1=q.front();
        q.pop();
        int b1=q.front();
        q.pop();

        for(int i=0;i<8;i++)
        {
            int x1=a1+a[i];
            int y1=b1+b[i];

            if(x1>=0 && x1<m && y1>=0 && y1<n && (mat[x1][y1]=='.' || mat[x1][y1]=='B') && color[x1][y1]=='w')
            {
                color[x1][y1]='g';
                level[x1][y1]=level[a1][b1]+1;

                q.push(x1);
                q.push(y1);
            }

        }
        color[x][y]='b';
    }
}
int main()
{
    int test_case;

    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%d %d",&m,&n);
        cin.ignore();

        for(int i=0;i<m;i++)
        {
            scanf("%s",&mat[i]);
        }
        int x1,y1,x2,y2;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]=='Z')
                {
                    for(int k=0;k<8;k++)
                    {
                        int x=i+ux[k];
                        int y=j+uv[k];

                        if(x>=0 && x<m && y>=0 && y<n && mat[x][y]=='.')
                        {
                            mat[x][y]='X';
                        }
                    }
                }

                if(mat[i][j]=='A')
                {
                    x1=i;
                    y1=j;
                }
                else if(mat[i][j]=='B')
                {
                    x2=i;
                    y2=j;
                }
            }
        }

        bfs(x1,y1);

        if(color[x2][y2]=='w')
        {
            printf("King Peter, you can't go now!\n");
        }
        else
        {
            printf("Minimal possible length of a trip is %d\n",level[x2][y2]);
        }
    }
}
