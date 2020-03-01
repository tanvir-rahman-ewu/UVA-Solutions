#include<bits/stdc++.h>
using namespace std;

bool isLeapYear(int year)
{
    if (year % 400 == 0) return true;
    else if(year % 100 == 0) return false;
    else if(year % 4 == 0) return true;
    else return false;
}

int main()
{
    int test_case,count=1;

    scanf("%d",&test_case);

    while(test_case--)
    {
        int d,m,y,qy,c=0;

        scanf("%d %d %d %d",&d,&m,&y,&qy);

        if(d==29 && m==2)
        {
            int temp=y;

            while(y<=qy)
            {
                y=y+4;

                if(isLeapYear(y) && y<=qy)
                {
                    c++;
                }
            }
        }
        else
        {
            c=qy-y;
        }
        printf("Case %d: %d\n",count,c);
        count++;
    }
}
