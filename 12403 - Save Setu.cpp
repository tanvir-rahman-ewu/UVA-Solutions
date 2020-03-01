#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,sum=0,tk;
    string s;

    scanf("%d",&test_case);

    while(test_case--)
    {
        cin>>s;

        if(s=="donate")
        {
            scanf("%d",&tk);
            sum=sum+tk;
        }
        else if(s=="report")
        {
            printf("%d\n",sum);
        }
    }
}
