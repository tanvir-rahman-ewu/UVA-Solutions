#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,n,m;
    scanf("%d",&test_case);
    int sum=0,t=0,c=1;
    while(test_case--)
    {
        scanf("%d %d",&n,&m);
        for(int i=1;i<=n;i++)
        {
                if(t==0)
                {
                    for(int j=0;j<m;j++)
                    {
                        sum=sum+ (c*(-1));

                        c++;
                    }
                     t=1;
                }
                else if(t==1)
                {
                     for(int j=0;j<m;j++)
                    {
                        sum=sum+ c;

                        c++;
                    }
                     t=0;
                }
            }
            cout<<sum;
        }

    }


