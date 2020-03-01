#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define inf (1<<30)

//4 Direction
//int dx[]= {1,0,-1,0};
//int dy[]= {0,1,0,-1};

//8 direction
int dx[]={1,1,0,-1,-1,-1,0,1};
int dy[]={0,1,1,1,0,-1,-1,-1};

//Knight Direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};


int m,n;

char mat[105][105];

void solution()
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int sum=0;

            if(mat[i][j]=='.')
            {
                for(int k=0;k<8;k++)
                {
                    int u=i+dx[k];
                    int v=j+dy[k];

                    if(u>=0 && u<m && v>=0 && v<n && mat[u][v]=='*')
                    {
                        sum++;
                    }
                }

                mat[i][j]='0'+sum;
            }
        }
    }
}
int main()
{
    int c=1;

    while(scanf("%d %d",&m,&n))
    {
        if(!m && !n)
        {
            break;
        }

        if(c!=1)
        {
            printf("\n");
        }

        for(int i=0;i<m;i++)
        {
            scanf("%s",&mat[i]);
        }

        printf("Field #%d:\n",c);

        c++;

        solution();

        for(int i=0;i<m;i++)
        {
            printf("%s\n",mat[i]);
        }
    }
}
