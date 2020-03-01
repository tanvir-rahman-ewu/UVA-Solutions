#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,amplitude,frequency;
    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%d%d",&amplitude,&frequency);

        while(frequency--)
        {
            for(int i=1;i<=amplitude;i++)
            {
                for(int j=1;j<=i;j++)
                {
                    printf("%d",i);
                }
                printf("\n");
            }
            for(int k=amplitude-1;k>=0;k--)
            {
                for(int l=0;l<k;l++)
                {
                    printf("%d",k);
                }
                if(k!=0)printf("\n");
            }
            if(frequency>0)printf("\n");
        }
        if(test_case>0)printf("\n");
    }
}
