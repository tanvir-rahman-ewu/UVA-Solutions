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
struct s
{
    int x,y;
};
int main()
{
    int a,b;
    vector<s> v;

    while(scanf("%d %d",&a,&b)!=EOF)
    {
        s temp;

        temp.x=a;
        temp.y=b;

        v.push_back(temp);
    }

    int mn=v[0].x;
    int mx=v[0].y;

    for(int i=1;i<v.size();i++)
    {
        if(v[i].x<=mn && v[i].y>=mx)
        {
            mn=v[i].x;
            mx=v[i].y;
        }
    }

    cout<<mn<<" "<<mx;
}
