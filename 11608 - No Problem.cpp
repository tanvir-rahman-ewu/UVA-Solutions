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
    int s,c=1;

    while(scanf("%d",&s) )
    {

        if(s<0)
        {
            break;
        }

        int created[20],required[20],available[20];

        for(int i=0;i<12;i++)
        {
            scanf("%d",&created[i]);
        }

        for(int i=0;i<12;i++)
        {
            scanf("%d",&required[i]);
        }

        available[0]=s;

        printf("Case %d:\n",c++);

        for(int i=0;i<12;i++)
        {
            if(available[i]>=required[i])
            {
                printf("No problem! :D\n");

                available[i+1]=created[i]+ (available[i]-required[i]);
            }
            else
            {
                printf("No problem. :(\n");

                available[i+1]=available[i]+created[i];
            }
        }
    }
}
