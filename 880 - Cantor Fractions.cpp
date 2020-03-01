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
    long long n;

    while(scanf("%lld",&n)!=EOF)
    {

        if(n==1)
        {
            printf("1/1\n");
            continue;
        }

        long long s=2;
        long long f=3;
        long long c=2;

        while(1)
        {
            if(s<=n && n<=f)
            {
                break;
            }
            else
            {
                s=f+1;

                f=s+c;

                c++;
            }
        }

        long x=c;
        long y=1;

        while(1)
        {
            if(s==n)
            {
                break;
            }
            else
            {
                x--;
                y++;

                s++;
            }
        }

        cout<<x<<"/"<<y<<endl;

    }
}
