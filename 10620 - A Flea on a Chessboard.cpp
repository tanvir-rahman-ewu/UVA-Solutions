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
bool is_line(int s,int x,int y,int dx,int dy)
{
    if(x%s==0 && dx%s==0)
    {
        return true;
    }
    else if(y%s==0 && dy%s==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_white(int s,int x,int y)
{
    if(x%s==0 || y%s==0 )
    {
        return false;
    }

    int row=x/s;
    int col=y/s;

    if(row%2!=0 && col%2==0)
    {
        return true;
    }
    else if(row%2==0 && col%2!=0)
    {
        return true;
    }
    else
    {
        return  false;
    }
}


int main()
{
    int s,x,y,dx,dy;

    while(scanf("%d %d %d %d %d",&s,&x,&y,&dx,&dy))
    {
        if(!s && !x && !y && !dx && !dy)
        {
            break;
        }

        if(is_line(s,x,y,dx,dy))
        {
            printf("The flea cannot escape from black squares.\n");

            continue;
        }

        if(is_white(s,x,y))
        {
            printf("After 0 jumps the flea lands at (%d, %d).\n",x,y);
            continue;
        }

        if(!is_white(s,x,y) && (s==dx && s==dy))
        {
            printf("The flea cannot escape from black squares.\n");

            continue;
        }

        int count=0;

        while(1)
        {
            if(is_white(s,x,y))
            {
                printf("After %d jumps the flea lands at (%d, %d).\n",count,x,y);

                break;
            }
            else if(count==2*s)
            {
                 printf("The flea cannot escape from black squares.\n");

                 break;
            }
            else
            {
                x=x+dx;
                y=y+dy;

                count++;
            }
        }

    }
}
