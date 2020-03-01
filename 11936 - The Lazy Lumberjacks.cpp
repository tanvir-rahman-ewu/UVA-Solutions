#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,side1,side2,side3;
    scanf("%d",&test_case);
    while(test_case--)
    {
        scanf("%d %d %d",&side1,&side2,&side3);
        if(side1+side2>side3)
        {
            printf("OK\n");
        }
        else
        {
            printf("Wrong!!\n");
        }
    }
}
