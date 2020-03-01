#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    while(scanf("%d",&n) && n>=0)
    {
        vector<int> v;

        while(n!=0)
        {
            v.push_back(n%3);
            n=n/3;
        }
        if(v.size()==0)
        {
            printf("0\n");
        }
        else
        {
            for(int i=v.size()-1;i>=0;i--)
            {
                printf("%d",v[i]);
            }
            printf("\n");
        }

    }
}
