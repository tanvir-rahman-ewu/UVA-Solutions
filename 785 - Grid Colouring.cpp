#include<bits/stdc++.h>
using namespace std;

char mat[100][100];
char t,s;
char color[100][100];

void bfs(int x,int y)
{
    if(mat[x][y]=='s')
        return ;

     if(color[x][y]!='w')
        return ;


    else
    {
        mat[x][y] = t;
        color[x][y]='b';

        bfs(x-1,y);
        bfs(x,y+1);
        bfs(x+1,y);
        bfs(x,y-1);
    }
}
int main()
{
    while(scanf("%s",&mat[0]))
    {
        s=mat[0][0];

        memset(color,'w',sizeof(color));

        int c=1;

        while(scanf("%s",&mat[c]))
        {
            if(mat[c][0]=='_')
            {
                break;
            }
            c++;
        }

        for(int i=0;i<c;i++)
        {
            for(int j=0;j<strlen(mat[i]);j++)
            {
                if(mat[i][j]!=' ' && mat[i][j]!='s' && color[i][j]=='w')
                {
                    t=mat[i][j];

                    bfs(i,j);
                }
            }
        }

        for ( int i = 0; i <= c; i++ )
        {
            printf ("%s\n", mat[i]);
        }

        memset(mat,'\0',sizeof(mat));

    }
}
