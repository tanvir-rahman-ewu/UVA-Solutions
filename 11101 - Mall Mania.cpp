#include<bits/stdc++.h>
using namespace std;
char mat[200][200];
int m;
#define INF 1<<30

int solution(int x,int y)
{
    int dis=INF;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]=='3')
            {
                dis=min( abs(x-i)+abs(y-j) ,dis);
            }
        }
    }
    return dis;
}

int main()
{

    while(scanf("%d",&m)!=EOF)
    {
        for(int i=0;i<m;i++)
        {
            scanf("%s",&mat[i]);
        }

        int h=0;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]=='1')
                {
                    int x=solution(i,j);
                    h=max(h,x);
                }
            }
        }

        printf("%d\n",h);

    }
}
