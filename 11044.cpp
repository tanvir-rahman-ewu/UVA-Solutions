#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,row,column;
    scanf("%d",&test_case);
    while(test_case)
    {
        scanf("%d%d",&row,&column);
        printf("%d\n",(row/3)*(column/3));
        test_case--;
    }
    return 0;
}
