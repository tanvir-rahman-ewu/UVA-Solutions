#include<bits/stdc++.h>
using namespace std;

vector<int> v[10010];
char color[10010];
int c;

void bfs(int x)
{
    queue<int> q;
    q.push(x);

    color[x]='g';
    c++;
    while(!q.empty())
    {

        int temp=q.front();
        q.pop();

        for(int i=0;i<v[temp].size();i++)
        {
            if(color[v[temp][i]]=='w')
            {
                c++;
                color[v[temp][i]]='g';
                q.push(v[temp][i]);
            }
        }
        color[temp]='b';
    }

}
int main()
{
    int test_case,n,m,l,a,b,z;

    scanf("%d",&test_case);

    while(test_case--)
    {
        c=0;

        for(int i=0; i<10010; i++)
        {
            v[i].clear();
        }

        memset(color,'w',sizeof(color));

        scanf("%d %d %d",&n,&m,&l);

        for(int i=0;i<m;i++)
        {
            scanf("%d %d",&a,&b);

            v[a].push_back(b);
        }

        for(int i=0;i<l;i++)
        {
            scanf("%d",&z);

            if(color[z]=='w')
            {
                bfs(z);
            }
        }
        if(l==0)
        {
            printf("0\n");
        }
        else
        {
             printf("%d\n",c);
        }
    }
}
