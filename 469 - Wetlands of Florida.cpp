#include<bits/stdc++.h>
using namespace std;

string mat[1000];

char color[105][105];

int row,len,col;

int X[]= {-1,-1,-1,0,0,1,1,1};
int Y[]= {-1,0,1,-1,1,-1,0,1};

int bfs(int x,int y)
{
    int count=1;

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

            if(x2>=0 && x2<row && y2>=0 && y2<col )
            {
                if(color[x2][y2]=='w' && mat[x2][y2]=='W')
                {
                    color[x2][y2]='g';

                    q.push(x2);
                    q.push(y2);

                    count++;
                }

            }
        }
        color[x1][y1]='b';
    }
    return count;
}

int main()
{
    int test_case;
    bool tag=false;

    scanf("%d",&test_case);
    getchar();
    getchar();

    while(test_case--)
    {
        if(tag)
        {
            printf("\n");
        }

        tag=true;

        memset(color,'w',sizeof(color));

        int a,b,i=0,c=0;

        while(getline(cin,mat[i]))
        {
            if(mat[i][0]=='\0')
            {
                 break;
            }

            if(mat[i][0]!='W' && mat[i][0]!='L')
            {
                istringstream temp (mat[i]);

                temp>>a>>b;

                if(c==0)
                {
                    row=i;
                    c++;
                }
                col=mat[a-1].size();

                printf("%d\n",bfs(a-1,b-1));

                memset(color,'w',sizeof(color));

            }
            i++;
        }
    }
}
