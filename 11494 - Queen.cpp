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
    int x1,y1,x2,y2;

    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2) && (x1+y1+x2+y2))
    {
        if(x1==x2 && y1==y2)
        {
            printf("0\n");
        }
        else if(x1==x2 || y1==y2 || abs(x1-x2)==abs(y1-y2))
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
    }
}
