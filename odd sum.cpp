#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,value1,value2,sum,case_number=1;
    scanf("%d",&test_case);
    while(test_case)
    {
        sum=0;
        scanf("%d%d",&value1,&value2);
        if(value1>value2)
        {
            swap(value1,value2);
        }
        while(value1<=value2)
        {
            if(value1%2!=0)
            {
                sum=sum+value1;
            }
            value1++;
        }
        printf("Case %d: %d\n",case_number,sum);
        test_case--;
        case_number++;
    }
    return 0;
}
