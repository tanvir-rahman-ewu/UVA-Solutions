#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,e,f,c,sum,total;
    scanf("%d",&test_case);
    while(test_case--)
    {
        scanf("%d %d %d",&e,&f,&c);
        total=(e+f)%c + (e+f)/c;
        sum=(e+f)/c;
        while(1)
        {
            if(total==0)
            {
                break;
            }
            else
            {
                int a=total/c;
                if(total>c)
                total=(total/c)+(total%c);
                else
                {
                    total=(total/c);
                }
                sum=sum+a;
            }

        }
        printf("%d\n",sum);
    }
}
