#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,size,train[50],i,j,temp,count;
    scanf("%d",&test_case);
    while(test_case--)
    {
        scanf("%d",&size);
        for(i=0;i<size;i++)
        {
            scanf("%d",&train[i]);
        }
        count=0;
        for(i=0;i<size-1;i++)
        {
            for(j=i+1;j<size;j++)
            {
                if(train[i]>train[j])
                {
                    temp=train[i];
                    train[i]=train[j];
                    train[j]=temp;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",count);
    }
}
