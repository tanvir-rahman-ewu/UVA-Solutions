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
    int test_case,m,i,count,match,cs=1;

    bool sack;

    char c;

    scanf("%d",&test_case);

    while(test_case--)
    {
        count=0;
        match=0;
        sack=false;

        scanf("%d",&m);
        getchar();

        for(i=0;i<m;i++)
        {
            scanf("%c",&c);
            getchar();

            if((c=='D' || c=='L') && !sack)
            {
                count++;
            }

            if(count==3 && !sack)
            {
                match=i+1;
                sack=true;
            }
            else if(c=='W' && !sack)
            {
                count=0;
            }
        }

        if(sack)
        {
            printf("Case %d: %d\n",cs++,match);
        }
        else
        {
            printf("Case %d: Yay! Mighty Rafa persists!\n",cs++);
        }
    }
}
