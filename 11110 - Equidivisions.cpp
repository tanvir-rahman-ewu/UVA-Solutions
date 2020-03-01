#include<bits/stdc++.h>
using namespace std;

int mat[105][105];
int color[105][105];

int a[]={1,-1,0,0};
int b[]={0,0,1,-1};
int n,c,z;

void dfs(int x,int y,int z)
{
    if(x<0 || y<0 || x==n || y==n)
    {
        return;
    }
    if(color[x][y]==1 || mat[x][y]!=z)
    {
        return;
    }
    c++;
    color[x][y]=1;


    for(int i=0;i<4;i++)
    {
        dfs(x+a[i],y+b[i],z);
    }

}

int main()
{
    int a,b;
    string s;

    while(scanf("%d",&n) && n)
    {
        getchar();

        memset(mat,0,sizeof(mat));
        memset(color,0,sizeof(color));

        for(int i=1;i<n;i++)
        {
            getline(cin,s);

            istringstream temp(s);

            while(temp>>a>>b)
            {
                mat[a-1][b-1]=i;
            }
        }

        bool t=false;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(color[i][j]==0)
                {
                    z=mat[i][j];
                    c=0;
                    dfs(i,j,z);

                    if(c!=n)
                    {
                        printf("wrong\n");
                        t=true;
                        break;
                    }
                }
            }
            if(t)
            {
                break;
            }
        }
        if(!t)
        {
            printf("good\n");
        }

    }
}
