#include<bits/stdc++.h>
using namespace std;

int h,w;

char mat[1000][1000];
char color[1000][1000];

int a[4]={0,0,1,-1};
int b[4]={1,-1,0,0};

void bfs(int x,int y,char source)
{
    queue<int> q;

    q.push(x);
    q.push(y);

    color[x][y]='g';

    while(!q.empty())
    {
        int x1,y1,u,v;

        x1=q.front();
        q.pop();
        y1=q.front();
        q.pop();

        for(int i=0;i<4;i++)
        {
            u=x1+a[i];
            v=y1+b[i];

           if(u>=0 && u<h && v>=0 && v<w && mat[u][v]==source && color[u][v]=='w')
           {
               q.push(u);
               q.push(v);
               color[u][v]='g';
           }
        }
        color[x1][y1]='b';
    }
}

struct str
{
    char a;
    int b;
    bool operator<(const str& c)const
    {
        return b>c.b;
    }
};

int main()
{
    int test_case,count=1;

    scanf("%d",&test_case);

    while(test_case--)
    {
        map<char,int> m;

        memset(color,'w',sizeof(color));

        scanf("%d %d",&h,&w);

        for(int i=0;i<h;i++)
        {
            scanf("%s",&mat[i]);
        }

        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                m[mat[i][j]];
            }
        }

        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                if(color[i][j]=='w')
                {
                    bfs(i,j,mat[i][j]);
                    m[mat[i][j]]++;
                }
            }
        }

        printf("World #%d\n",count);
        count++;

        vector<str> v;

        for (std::map<char,int>::iterator it=m.begin(); it!=m.end(); it++)
        {
            str a;
            a.a=it->first;
            a.b=it->second;
            v.push_back(a);
        }

        sort(v.begin(),v.end());

        for(int i=0;i<v.size();i++)
        {
            cout<<v[i].a<<": "<<v[i].b<<endl;
        }
        m.clear();
        v.clear();
    }
}
