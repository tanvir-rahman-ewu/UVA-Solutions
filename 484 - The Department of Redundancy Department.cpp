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
    int n,i;

    map<int,int> m;
    vector<int> v;

    while(scanf("%d",&n)!=EOF)
    {
        if(!m[n])
        {
            v.push_back(n);
        }

        m[n]++;
    }

    for(i=0;i<v.size();i++)
    {
        printf("%d %d\n",v[i],m[v[i]]);
    }
}
