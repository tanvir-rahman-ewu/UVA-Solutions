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



int n,m;

int s[45];

 map<int,int> mp;

void bfs()
{
    queue<int> q;

    q.push(0);

    mp[0]=1;

    while(!q.empty())
    {
        int temp=q.front();

        q.pop();

        for(int i=0;i<m;i++)
        {
            if(!mp[temp^s[i]])
            {
                mp[temp^s[i]]=mp[temp]+1;

                q.push(temp^s[i]);
            }
        }
    }
}

int binary_to_decimal(string query)
{
    int ans=0,base=1;

    for(int i=query.size()-1;i>=0;i--)
    {
        if(query[i]!='0')
        {
              ans=ans+ 1*base;
        }
        base=base*2;
    }

    return ans;
}

int main()
{
    int test_case,k,i,j,sw,q,cs=1;

    string query;

    scanf("%d",&test_case);

    while(test_case--)
    {
        memset(s,0,sizeof(s));

        printf("Case %d:\n",cs++);

        scanf("%d %d",&n,&m);

        for(i=0;i<m;i++)
        {
            scanf("%d",&k);

            for(j=0;j<k;j++)
            {
                scanf("%d",&sw);

                s[i]=(s[i]|(1<<sw));
            }
        }

        scanf("%d",&q);


        string state;


        bfs();

        for(i=0;i<q;i++)
        {
            cin>>query;

            int dec=binary_to_decimal(query);

            if(mp[dec]!=0)
            {
                printf("%d\n",mp[dec]-1);
            }
            else
            {
                printf("-1\n");
            }

        }

        mp.clear();

        printf("\n");
    }
}
