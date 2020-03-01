#include<bits/stdc++.h>
using namespace std;
char mat[1200][1200];

int a[]={0,0,1,-1,1,-1};
int b[]={1,-1,0,0,1,-1};
int n;

char color[1200][1200];

void bfs(int x,int y)
{
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

        for(int i=0;i<6;i++)
        {
            x2=x1+a[i];
            y2=y1+b[i];

            if(x2>=0 && x2<n && y2>=0 && y2<n && mat[x2][y2]=='b' && color[x2][y2]=='w')
            {

                color[x2][y2]='g';

                q.push(x2);
                q.push(y2);
            }
        }
        color[x1][y1]='b';
    }
}
int main()
{
    int c=1;

    while(scanf("%d",&n) && n)
    {

        memset(color,'w',sizeof(color));
        memset(mat,'\0',sizeof(mat));

        for(int i=0;i<n;i++)
        {
            scanf("%s",&mat[i]);
        }

        int ans=0;

        for(int i=0;i<n;i++)
        {
            if(mat[0][i]=='b')
            {
                bfs(0,i);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(color[n-1][i]=='b')
            {
                ans=1;
                break;
            }
        }

        if(ans==1)
        {
            printf("%d %c\n",c,'B');
        }
        else
        {
            printf("%d %c\n",c,'W');
        }
        c++;
    }
}
