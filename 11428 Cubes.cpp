#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j,k,qube_diff, flag;

    while (scanf("%d", &qube_diff)==1)
    {   if(qube_diff==0)
            break;
        flag=0;
        for(i=1; i<60; i++)
        {
            for(j=0; j<=i; j++)
            {
                if(qube_diff==(i*i*i-j*j*j))
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            break;
        }
       if(flag==1) printf("%d %d\n",i, j);
       else
        printf("No solution\n");
    }
}
