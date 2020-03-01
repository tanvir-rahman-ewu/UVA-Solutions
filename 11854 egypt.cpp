#include<bits/stdc++.h>
using namespace std;
int main()
{
    int value1,value2,value3;
    while(scanf("%d%d%d",&value1,&value2,&value3)==1,1,1)
    {
        if(value1==0 && value2==0 && value3==0)
        {
            break;
        }
        if((value1*value1+value2*value2)==value3*value3)
        {
            printf("right\n");
        }
        else if((value2*value2+value3*value3)==value1*value1)
        {
            printf("right\n");
        }
        else if((value1*value1+value3*value3)==value2*value2)
        {
            printf("right\n");
        }
        else
        {
                printf("wrong\n");
        }
    }
    return 0;
}
