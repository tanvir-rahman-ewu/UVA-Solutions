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
    int B,S,i,n,min,c=1;

    while(scanf("%d %d",&B,&S) && (B+S))
    {
        min=inf;

        for(i=0;i<B;i++)
        {
            scanf("%d",&n);

            if(n<min)
            {
                min=n;
            }
        }

        for(i=0;i<S;i++)
        {
            scanf("%d",&n);
        }

        if(B>S)
        {
            printf("Case %d: %d %d\n",c++,B-S,min);
        }
        else
        {
            printf("Case %d: 0\n",c++);
        }
    }
}
