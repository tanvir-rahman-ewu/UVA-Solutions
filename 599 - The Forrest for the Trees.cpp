#include<bits/stdc++.h>
using namespace std;

int mat[30][30],total;
char color[30];
map<char,int> m;


int bfs(int source)
{
    queue<int> q;

    q.push(source);

    color[source]='g';

    total++;

    while(!q.empty())
    {
        int temp=q.front();
        q.pop();

        for(int i=1;i<=m.size();i++)
        {
            if(mat[temp][i]==1 && color[i]=='w')
            {
                total++;
                color[i]='g';
                q.push(i);
            }
        }
        color[temp]='b';
    }

    return total;
}

int main()
{
    int test_case;

    scanf("%d",&test_case);
    getchar();

    while(test_case--)
    {
        string s;
        int c=1,tree=0,acorn=0;;

        memset(color,'w',sizeof(color));
        memset(mat,0,sizeof(mat));

        while(cin>>s)
        {
            if(s[0]=='*')
            {
                break;
            }

            char a=s[1];
            char b=s[3];

            if(m[a]==0)
            {
                m[a]=c;
                c++;
            }

            if(m[b]==0)
            {
                m[b]=c;
                c++;
            }

            mat[m[a]][m[b]]=1;
            mat[m[b]][m[a]]=1;
        }

        cin>>s;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=',')
            {
                if(!m[s[i]])
                {
                    m[s[i]]=c;
                    c++;
                }
            }
        }

        for(int i=1;i<=m.size();i++)
        {
            if(color[i]=='w')
            {
                total=0;
                bfs(i);

                if(total==1)
                {
                    acorn++;
                }
                else
                {
                    tree++;
                }
            }
        }

        printf("There are %d tree(s) and %d acorn(s).\n",tree,acorn);

        m.clear();
    }

}
