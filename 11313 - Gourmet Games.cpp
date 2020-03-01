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
    int test_case,n,m;

    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%d %d",&n,&m);

        int count=0;

        while(1)
        {
            if(n<m)
            {
                printf("cannot do this\n");
                break;
            }
            else if(n==m)
            {
                count++;

                printf("%d\n",count);
                break;
            }
            else
            {
                n=n-m+1;
                count++;
            }
        }
    }
}
