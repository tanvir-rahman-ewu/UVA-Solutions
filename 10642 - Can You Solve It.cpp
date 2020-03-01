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
    int test_case,a,b,x,y,c=1;
    long long ans;

    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%d %d %d %d",&a,&b,&x,&y);

        if(abs((a+b)-(x+y))==0)
        {
            ans=x-a;
        }
        else if(abs((a+b)-(x+y))==1)
        {
           ans=b+x+1;
        }
        else
        {
            long long p,q,s,j,k,l;
            q=x+y;
            s=x+y+1;
            p=q*s;
            j=a+b+1;
            k=a+b+2;
            l=j*k;
            ans=(p/2)-(l/2)+b+x+1;
        }

        printf("Case %d: %lld\n",c,ans);

        c++;
    }
}
