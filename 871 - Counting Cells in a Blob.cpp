#include<bits/stdc++.h>
using namespace std;

string mat[30];

char color[30][30];

int X[8]= {-1,-1,-1,0,0,1,1,1};
int Y[8]= {-1,0,1,-1,1,-1,0,1};
int row,c;

void bfs(int x,int y)
{
    queue<int> q;

    q.push(x);
    q.push(y);

    color[x][y]='g';

    c++;

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

            if(x2>=0 && y2>=0 && x2<row && y2<mat[x].size() && mat[x2][y2]=='1' && color[x2][y2]=='w')
            {
                color[x2][y2]='g';

                q.push(x2);
                q.push(y2);

                c++;
            }
        }
        color[x1][y1]='b';
    }
}
int main()
{
    int test_case;
    bool b=false;

    scanf("%d",&test_case);

    getchar();
    getchar();

    while(test_case--)
    {
        if(b)
        {
            printf("\n");
        }
        b=true;

        memset(color,'w',sizeof(color));

        int i=0,m=0;

        while(getline(cin,mat[i]))
        {
            if(mat[i][0]=='\0')
            {
                 break;
            }
            i++;
        }

        row=i;

        for(int j=0;j<i;j++)
        {
            for(int k=0;k<mat[j].size();k++)
            {
                if(mat[j][k]=='1' && color[j][k]=='w')
                {

                    c=0;

                    bfs(j,k);

                    m=max(c,m);
                }
            }

        }
        printf("%d\n",m);

    }
}
