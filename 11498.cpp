#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int test_case;
    int co1,co2,x,y;

    while( scanf("%d",&test_case)==1)
    {
        if(test_case==0)
        {
            break;
        }

        scanf("%d%d",&co1,&co2);

        while(test_case)
        {
            scanf("%d%d",&x,&y);
            if(x-co1==0 || y-co2==0)
            {
                printf("divisa\n");
            }
            else if(x-co1<0 && y-co2<0)
            {
                printf("SO\n");
            }
            else if(x-co1<0 && y-co2>0)
            {
                printf("NO\n");
            }
            else if(x-co1>0 && y-co2<0)
            {
                printf("SE\n");
            }
            else
            {
                printf("NE\n");
            }
            test_case--;
        }
    }
}
