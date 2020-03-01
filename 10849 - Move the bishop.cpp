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
    int test_case,test,n,r1,c1,r2,c2,mod1,mod2,i;

    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%d %d",&test,&n);

        for(i=0;i<test;i++)
        {
            scanf("%d %d %d %d",&r1,&c1,&r2,&c2);

            mod1=(r1+c1)%2;

            mod2=(r2+c2)%2;

            if(r1==r2 && c1==c2)
            {
                printf("0\n");
            }
            else if(mod1!=mod2)
            {
                printf("no move\n");
            }
            else
            {
                if(abs(r1-r2)==abs(c1-c2))
                {
                    printf("1\n");
                }
                else
                {
                    printf("2\n");
                }
            }
        }
    }
}
