#include<bits/stdc++.h>
using namespace std;
int mat[205][205];
int v;
char color[205];
char c[205];


int bfs(int source)
{
    queue<int> q;
    int gray=0,black=0,t=0;

    memset(c,'w',sizeof(c));

    color[source]='g';
    q.push(source);

    c[source]='g';
    gray++;

    while(!q.empty())
    {
        int temp=q.front();
        q.pop();
        t++;

        for(int i=0;i<v;i++)
        {
            if(mat[temp][i]==1 && color[i]=='w')
            {
                if(c[temp]=='g')
                {
                    c[i]='b';
                    black++;
                }
                else if(c[temp]=='b')
                {
                    c[i]='g';
                    gray++;
                }
                color[i]='g';
                q.push(i);
            }
            else if(mat[temp][i] && c[temp]==c[i])
            {
                return -1;
            }
        }

        color[temp]='b';
    }
    if(t==1)
    {
        return 1;
    }
    else
    {
        return min(black,gray);
    }

}

int main()
{
    int test_case,e,a,b;

    scanf("%d",&test_case);

    while(test_case--)
    {
        int child[205];

        memset(child,0,sizeof(child));
        memset(mat,0,sizeof(mat));
        memset(color,'w',sizeof(color));

        scanf("%d %d",&v,&e);

        for(int i=0;i<e;i++)
        {
            scanf("%d %d",&a,&b);

            mat[a][b]=mat[b][a]=1;

            child[a]++;
            child[b]++;
        }
        if(e==0)
        {
            printf("%d\n",v);
        }
        else
        {
            int t=0;
            int sum=0;

            for(int i=0;i<v;i++)
            {

                if(color[i]=='w')
                {
                    int a=bfs(i);

                    if(a==-1)
                    {
                        printf("-1\n");
                        t++;
                        break;
                    }
                    else
                    {
                        sum=sum+a;
                    }
                }
            }

            if(t==0)
            {
                printf("%d\n",sum);
            }
        }
    }
}
