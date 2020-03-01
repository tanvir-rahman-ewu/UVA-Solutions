#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number,sum,i;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&number)==1)
    {
        sum=0;
        if(number==0)
        {
            break;
        }
        for(i=1;i<=number/2;i++)
        {
            if(number%i==0)
            {
                sum=sum+i;
            }
        }
        printf("%5d ",number);
        if(number==sum)
        {
            printf("PERFECT\n");
        }
        else if(number<sum)
        {
            printf("ABUNDUNT\n");
        }
        else if(number>sum)
        {
            printf("DEFICIENT\n");
        }
    }
    printf("END OF OUTPUT\n");
}
