#include<bits/stdc++.h>
using namespace std;

char mat[105][105],current;

string instruction;

int m,n,s;

int solution(char curr,int x,int y)
{

    int count=0;
    int u=x,v=y;

    for(int i=0;i<instruction.size();i++)
    {

        if(instruction[i]=='D')
        {

            if(curr=='N')
            {
                curr='L';
            }
            else if(curr=='S')
            {
                curr='O';
            }
            else if(curr=='L')
            {
                curr='S';
            }
            else
            {
                curr='N';
            }
        }
        else if(instruction[i]=='E')
        {
            if(curr=='N')
            {
                 curr='O';
            }
            else if(curr=='S')
            {
                curr='L';
            }
            else if(curr=='L')
            {

                curr='N';
            }
            else
            {
                curr='S';
            }
        }
        else
        {
            if(curr=='N')
            {
                x--;
            }
            else if(curr=='S')
            {
                x++;
            }
            else if(curr=='L')
            {
                y++;
            }
            else
            {
                y--;
            }

            if(x>=0 && x<m && y>=0 && y<n && mat[x][y]!='#')
            {
                u=x;
                v=y;

                if(mat[x][y]=='*')
                {
                    mat[x][y]='.';
                    count++;
                }
            }
            else
            {
                x=u;
                y=v;
            }
        }
    }
    return count;
}

int main()
{
    int x,y;


    while(scanf("%d %d %d",&m,&n,&s) && m && n && s)
    {
        for(int i=0;i<m;i++)
        {
            scanf("%s",&mat[i]);
        }

        cin>>instruction;

        int t=0;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]!='*' && mat[i][j]!='#' && mat[i][j]!='.')
                {
                    current=mat[i][j];
                    x=i;
                    y=j;
                    t=1;
                    break;
                }
            }
            if(t)
            {
                break;
            }
        }


       int ans=solution(current,x,y);
       cout<<ans<<endl;

    }
}
