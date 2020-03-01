#include<bits/stdc++.h>
using namespace std;
int main()
{
    int salary1,salary2,salary3,test_case,case_number=1;
    scanf("%d",&test_case);
    while(test_case)
    {
        scanf("%d%d%d",&salary1,&salary2,&salary3);
        if(salary1>salary2 && salary1<salary3 || salary1<salary2 && salary1>salary3)
        {
            printf("Case %d: %d\n",case_number,salary1);
        }
        else if(salary2>salary1 && salary2<salary3 || salary2<salary1 && salary2>salary3)
        {
            printf("Case %d: %d\n",case_number,salary2);
        }
        else
        {
            printf("Case %d: %d\n",case_number,salary3);
        }
        case_number++;
        test_case--;
    }

}
