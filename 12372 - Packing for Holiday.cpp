#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,l,w,h,c=1;
    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%d %d %d",&l,&w,&h);

        if(l<=20 && w<=20 && h<=20)
        {
            printf("Case %d: good\n",c);
        }
        else
        {
             printf("Case %d: bad\n",c);
        }
        c++;
    }
}
