#include<bits/stdc++.h>
using namespace std;

string mat[1000];

char color[105][105];

int row,len,col;

int X[]= {-1,-1,-1,0,0,1,1,1};
int Y[]= {-1,0,1,-1,1,-1,0,1};
int cnt;

void dfs(int x,int y)
{
    if(x<0 || y<0 || x==row || y==col )
    {
        return;
    }
    if( color[x][y]=='b' || mat[x][y]=='L')
    {
        return;
    }

    cnt++;
    color[x][y]='b';

    for(int i=0;i<8;i++)
    {
        dfs(x+X[i],y+Y[i]);
    }
}

int main()
{
    int test_case;
    bool tag=false;

    scanf("%d",&test_case);
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

        while(getline(cin,mat[i]) && mat[i].size())
        {
            if(mat[i][0]!='W' && mat[i][0]!='L')
            {
                istringstream temp (mat[i]);

                temp>>a>>b;

                if(c==0)
                {
                    row=i;
                    col=mat[a-1].size();
                    c++;
                }

                dfs(a-1,b-1);

                printf("%d\n",cnt);
                cnt=0;

                memset(color,'w',sizeof(color));

            }
            i++;
        }
    }
}

