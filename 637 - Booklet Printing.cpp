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
    int n,p,r,h,l,p1,p2,p3,p4;

    while(scanf("%d",&n) && n)
    {
        h=n;
        l=1;

        if(n%4==0)
        {
            p=n/4;
        }
        else
        {
            p=(n/4)+1;
        }

        r=p*4-n;

        printf("Printing order for %d pages:\n",n);

        int temp=n;

        for(int i=1;i<=p;i++)
        {
            p1=p2=p3=p4=0;

            if(temp>0)
            {
                p1=l;
                l++;
                temp--;
            }

            if(temp>0)
            {
                p2=l;
                l++;
                temp--;
            }

            if(temp>0 && r==0)
            {
                p4=h;
                h--;
                temp--;
            }
            else
            {
                r--;
            }
            if(temp>0 && r==0)
            {
                p3=h;
                h--;
                temp--;
            }
            else
            {
                r--;
            }

            if(p4==0)
            {
                printf("Sheet %d, front: Blank, %d\n",i,p1);
            }
            else
            {
                printf("Sheet %d, front: %d, %d\n",i,p4,p1);
            }

            if(p2==0 && p3==0)
            {
                continue;
            }

            if(p3==0)
            {
                printf("Sheet %d, back : %d, Blank\n",i,p2);

            }
            else
            {
                printf("Sheet %d, back : %d, %d\n",i,p2,p3);
            }

        }
    }
}
