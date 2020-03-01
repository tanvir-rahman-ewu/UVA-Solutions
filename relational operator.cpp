#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,value1,value2;
    scanf("%d",&test_case);
    while(test_case)
    {
        scanf("%d%d",&value1,&value2);
        if(value1>value2)
        {
            printf(">\n");
        }
        else if(value1<value2)
        {
            printf("<\n");
        }
        else if(value1==value2)
        {
            printf("=\n");
        }
        test_case--;
    }
    return 0;
}
