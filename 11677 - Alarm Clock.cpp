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
    int h1,m1,h2,m2;

    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2))
    {
        if(!h1 && !m1 && !h2 && !m2)
        {
            break;
        }

        if(h1<h2)
        {
            if(m2<m1)
            {
                printf("%d\n",((h2-h1-1)*60)+(60-(m1-m2)));
            }
            else
            {
                printf("%d\n",(h2-h1)*60+(m2-m1));
            }
        }
        else if(h1>h2)
        {
            if(m2<m1)
            {
                printf("%d\n",(((24-h1)+h2-1)*60)+(60-(m1-m2)));
            }
            else
            {

                printf("%d\n",(((24-h1)+h2)*60)+(m2-m1));
            }
        }
        else
        {
            if(m2>m1)
            {
                printf("%d\n",m2-m1);
            }
            else if(m1>m2)
            {
                printf("%d\n",(23*60)+(60-(m1-m2)));
            }
            else
            {
                printf("0\n");
            }
        }
    }
}
