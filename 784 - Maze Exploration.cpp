#include<bits/stdc++.h>
using namespace std;

string mat[100];
int color[100][100];

int X[8]= {-1,-1,-1,0,0,1,1,1};
int Y[8]= {-1,0,1,-1,1,-1,0,1};

void bfs(int x,int y)
{
    queue<int> q;

    q.push(x);
    q.push(y);

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

            if(mat[x2][y2]==' ')
            {
                mat[x2][y2]='#';

                q.push(x2);
                q.push(y2);
            }
        }
    }
}
int main()
{
    int test_case;

    scanf("%d",&test_case);
    cin.ignore();

    while(test_case--)
    {
        memset(color,0,sizeof(color));

        int c=0;
        string s;

        while(getline(cin,mat[c]))
        {
            if(mat[c][0]=='_')
            {
                break;
            }
            c++;
        }

        int t=0;

        for(int i=0;i<c;i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]=='*')
                {
                    mat[i][j]='#';
                    bfs(i,j);
                    t=1;
                }
                if(t==1)
                {
                    break;
                }
            }
            if(t==1)
            {
                break;
            }
        }

        for(int i=0;i<=c;i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                cout<<mat[i][j];
            }
            cout<<endl;
        }
    }
}
