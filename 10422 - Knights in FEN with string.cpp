#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define inf (1<<30)

//4 Direction
//int dx[]= {1,0,-1,0};
//int dy[]= {0,1,0,-1};

//8 direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};


int dx[]={2,1,-1,-2,-2,-1,1,2};
int dy[]={1,2,2,1,-1,-2,-2,-1};

string ans="111110111100 11000010000022";

int bfs(string state)
{
    int x,xx,y,yy,pos,pos_h;

    queue<string> q;
    map<string,int> m;

    q.push(state);

    m[state]=1;

    while(!q.empty())
    {
        string parent=q.front();
        string temp;

        q.pop();

        if(parent==ans)
        {
            return m[parent];
        }

        x=parent[25]-'0';
        y=parent[26]-'0';

        pos_h=x*5+y;

        for(int i=0;i<8;i++)
        {
            temp=parent;

            xx=x+dx[i];
            yy=y+dy[i];

            if(xx>=0 && xx<5 && yy>=0 && yy<5)
            {
                pos=xx*5+yy;

                swap(temp[pos_h],temp[pos]);

                temp[25]=xx+'0';
                temp[26]=yy+'0';

                if(m[temp]==0)
                {
                    m[temp]=m[parent]+1;

                    if(m[temp]>11)
                    {
                        return 0;
                    }

                    q.push(temp);

                    if(temp==ans)
                    {
                        return m[temp];
                    }
                }
            }
        }

    }

    return 0;
}
int main()
{
    int test_case,i,a;

    scanf("%d",&test_case);
    getchar();

    string input;

    while(test_case--)
    {
        string state;

        for(i=0;i<5;i++)
        {
            getline(cin,input);

            state=state+input.substr(0,5);
        }

        for(i=0;i<25;i++)
        {
            if(state[i]==' ')
            {
                state.push_back(i/5+'0');
                state.push_back(i%5+'0');

                break;
            }
        }

        a=bfs(state);

        if(a)
        {
            printf("Solvable in %d move(s).\n",a-1);
        }
        else
        {
            printf("Unsolvable in less than 11 move(s).\n");
        }
    }
}
