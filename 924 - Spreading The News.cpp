#include<bits/stdc++.h>
using namespace std;

char color[2505];
int mat[2505][2505];
int E;
int level[2505];
int l[2505];

void bfs(int source)
{
    queue<int> q;

    memset(level,0,sizeof(level));
    memset(l,0,sizeof(l));
    memset(color,'w',sizeof(color));

    q.push(source);
    color[source]='g';
    level[source]=0;

    while(!q.empty())
    {
        int temp=q.front();
        q.pop();

        for(int i=0;i<E;i++)
        {

            if(mat[temp][i]==1 && color[i]=='w')
            {
                color[i]='g';
                level[i]=level[temp]+1;
                l[level[i]]++;
                q.push(i);
            }
        }
        color[temp]='b';
    }
}

int main()
{

    scanf("%d",&E);

    for(int i=0;i<E;i++)
    {
        int n;

        scanf("%d",&n);

        for(int j=0;j<n;j++)
        {
            int f;

            scanf("%d",&f);

            mat[i][f]=1;
        }
    }

    int test_case;

    scanf("%d",&test_case);

    while(test_case--)
    {
        int source;

        scanf("%d",&source);

        bfs(source);

        int max=0,lev;

        for(int i=1;i<E;i++)
        {
            if(l[i]>max)
            {
                max=l[i];
                lev=i;
            }

        }

        if(max==0)
        {
            printf("%d\n",max);
        }
        else
        {
            printf("%d %d\n",max,lev);
        }
    }
}
