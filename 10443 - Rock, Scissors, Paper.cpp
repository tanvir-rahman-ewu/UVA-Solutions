#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define inf (1<<30)

//4 Direction
int dx[]= {1,0,-1,0};
int dy[]= {0,1,0,-1};

//8 direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};

//Knight Direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};

int main()
{
    int test_case,r,c,n,i,j,a,k,x,y;

    cin>>test_case;

    while(test_case--)
    {
        cin>>r>>c>>n;

        char today[105][105]={};
        char tomorrow[105][105]={};

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin>>today[i][j];
            }
        }


        for(a=0;a<n;a++)
        {
            memcpy(tomorrow,today,sizeof(today));

            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    for(k=0;k<4;k++)
                    {
                        x=i+dx[k];
                        y=j+dy[k];

                        if(x>=0 && x<r && y>=0 && y<c)
                        {


                            if(today[i][j]=='R' && today[x][y]=='S')
                            {
                                tomorrow[x][y]='R';
                            }
                            else if(today[i][j]=='S' && today[x][y]=='P')
                            {
                                tomorrow[x][y]='S';
                            }
                            else if(today[i][j]=='P' && today[x][y]=='R')
                            {
                                 tomorrow[x][y]='P';
                            }
                        }
                    }
                }
            }
            memcpy(today,tomorrow,sizeof(tomorrow));
        }

        for(i=0;i<r;i++)
        {
            printf("%s\n",today[i]);
        }

        if(test_case!=0)
        {
            printf("\n");
        }
    }
}
