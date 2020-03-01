#include<bits/stdc++.h>
using namespace std;

int x,y;
char mat[50][50];

int a[4]={0,0,1,-1};
int b[4]={1,-1,0,0};


char color[50][50];

int bfs(char source,int m,int n)
{
    queue<int> q;

    int t=1;

    q.push(m);
    q.push(n);

    color[m][n]='g';

    while(!q.empty())
    {
        int x1,y1,x2,y2;

        x1=q.front();
        q.pop();
        y1=q.front();
        q.pop();

        for(int i=0;i<4;i++)
        {
            x2=x1+a[i];
            y2=y1+b[i];

            if(x2>=0 && x2<x && y2>=0 && y2<y && mat[x2][y2]==source && color[x2][y2]=='w')
            {

                color[x2][y2]='g';

                q.push(x2);
                q.push(y2);

                t++;
            }
        }
        color[x1][y1]='b';
    }
    return t;
}

struct str
{
    char a;
    int b;
    bool operator<(const str& c)const
    {
        if(b!=c.b)
        {
            return b>c.b;
        }
        else
        {
            return a<c.a;
        }

    }
};
int main()
{
    int count=1;

    while(scanf("%d %d",&x,&y) && x && y)
    {

        memset(color,'w',sizeof(color));

        for(int i=0;i<x;i++)
        {
            scanf("%s",&mat[i]);
        }

        vector<str> v;

        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                if(mat[i][j]!='.' && color[i][j]=='w')
                {
                   int c= bfs(mat[i][j],i,j);
                   str s;

                   s.a=mat[i][j];
                   s.b=c;

                   v.push_back(s);
                }
            }
        }

        sort(v.begin(),v.end());

        printf("Problem %d:\n",count);
        count++;

        for(int i=0;i<v.size();i++)
        {
            cout<<v[i].a<<" "<<v[i].b<<endl;
        }
        v.clear();
    }
}



