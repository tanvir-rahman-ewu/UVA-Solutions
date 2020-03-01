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

//Knight Direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};

int count_bit(int n)
{
    int count=0;

    while(n)
    {
        count++;
        n=n&(n-1);
    }
    return count;
}
int bfs(int source)
{
    queue<int> q;

    int visit[4100]={},parent,temp,min;

    q.push(source);

    visit[source]=1;

    min=count_bit(source);

    while(!q.empty())
    {
        parent=q.front();

        if(count_bit(parent)<min)
        {
            min=count_bit(parent);
        }

        q.pop();

        for(int i=0;i<11;i++)
        {
            if((parent&(1<<i)) && (parent&(1<<i+1)))
            {
                if(i>0 && !(parent&(1<<i-1)))
                {
                    temp=parent^(1<<i-1);
                    temp=temp^(1<<i+1);
                    temp=temp^(1<<i);

                    if(!visit[temp])
                    {
                        visit[temp]=1;
                        q.push(temp);
                    }
                }
                if(i+2<=11 && !(parent&(1<<i+2)))
                {
                    temp=parent^(1<<(i+2));
                    temp=temp^(1<<i+1);
                    temp=temp^(1<<i);

                    if(!visit[temp])
                    {
                        visit[temp]=1;
                        q.push(temp);
                    }
                }
            }
        }
    }
    return min;
}
int main()
{
    int test_case,i,j,state;

    string s;

    scanf("%d",&test_case);
    getchar();

    while(test_case--)
    {
        state=0;

        cin>>s;

        for(i=11,j=0;i>=0;i--,j++)
        {
            if(s[i]=='o')
            {
                state=(state|(1<<j));
            }
        }

        cout<<bfs(state)<<endl;
    }
}
