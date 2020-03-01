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

int main()
{
    int n,a,b;

    while(scanf("%d",&n)!=EOF)
    {
        queue<int> q;
        stack<int> s;
        priority_queue<int> pq;

        bool x=true,y=true,z=true,t=true;

        for(int i=0;i<n;i++)
        {
            scanf("%d %d",&a,&b);

            if(a==1)
            {
                q.push(b);
                s.push(b);
                pq.push(b);
            }
            else
            {
                if(q.size()==0 || s.size()==0 || pq.size()==0)
                {
                    t=false;
                    continue;
                }

                if(q.front()!=b && x)
                {
                    x=false;
                }
                else if(q.front()==b && x)
                {
                    q.pop();
                }

                if(s.top()!=b && y)
                {
                    y=false;
                }
                else if(s.top()==b && y)
                {
                    s.pop();
                }

                if(pq.top()!=b && z)
                {
                    z=false;
                }
                else if(pq.top()==b && z)
                {
                    pq.pop();
                }
            }
        }


        if(x && z && t)
        {
            printf("not sure\n");
        }
        else if(x && y && t)
        {
            printf("not sure\n");
        }
        else if(y && z && t)
        {
             printf("not sure\n");
        }
        else if(x && y && z && t)
        {
            printf("not sure\n");
        }
        else if(x && t)
        {
            printf("queue\n");
        }
        else if(y && t)
        {
            printf("stack\n");
        }
        else if(z && t)
        {
            printf("priority queue\n");
        }
        else if(t)
        {
            printf("impossible\n");
        }
        else if(!t)
        {
            printf("impossible\n");
        }
    }
}
