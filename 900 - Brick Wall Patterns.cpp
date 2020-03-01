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

long long int a[55];

void fibonacci()
{
    a[0]=0;
    a[1]=1;

    for(int i=2;i<=51;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
}

int main()
{
    fibonacci();

    int n;

    while(scanf("%d",&n) && n)
    {
        printf("%lld\n",a[n+1]);
    }
}
