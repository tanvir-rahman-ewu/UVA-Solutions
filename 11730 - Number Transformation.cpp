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

int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,499};

int bfs(int s,int t)
{
    int parent,temp,i;

    queue<int> q;

    map<int,int> m;

    q.push(s);

    m[s]=1;

    while(!q.empty())
    {
        parent=q.front();

        if(parent==t)
        {
            return m[parent];
        }
        q.pop();

        for(i=0;prime[i]<=parent/2;i++)
        {
            if(parent%prime[i]==0)
            {
                temp=parent+prime[i];

                if(!m.count(temp) && temp<=t)
                {
                    m[temp]=m[parent]+1;

                    q.push(temp);

                    if(temp==t)
                    {
                        return m[temp];
                    }
                }
            }
        }
    }

    return -1;
}
int main()
{
    int s,t,a,c=1,i;

    while(scanf("%d %d",&s,&t) && (s+t))
    {
        a=bfs(s,t);

        if(a!=-1)
        {
            printf("Case %d: %d\n",c++,a-1);
        }
        else
        {
            printf("Case %d: -1\n",c++);
        }

    }
}
