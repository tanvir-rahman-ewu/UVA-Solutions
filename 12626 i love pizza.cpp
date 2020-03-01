#include<bits/stdc++.h>
using namespace std;
int main()
{
    string pizza;
    char a[6]={'M','A','R','G','I','T'};
    int num[6]={1,3,2,1,1,1};
    int test_case,count,i,j;
    scanf("%d",&test_case);
    while(test_case--)
    {
        int c[6]={0,0,0,0,0,0};
        cin>>pizza;
        for(i=0;i<6;i++)
        {
            count=0;
            for(j=0;j<pizza.size();j++)
            {
                if(a[i]==pizza[j])
                {
                    count++;
                }
            }
            c[i]=count /num[i];
        }
        sort( c, c+6);
        printf("%d\n",c[0]);
    }
}
