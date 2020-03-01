#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test_case,n,m,v;

    scanf("%d",&test_case);

    while(test_case--)
    {
        map<int,int> M,N;

        scanf("%d %d",&m,&n);

        for(int i=0;i<m;i++)
        {
            scanf("%d",&v);

            M[v]++;

        }

        int count=0,sum=0;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&v);

            N[v]++;
        }

        for(std::map<int,int>::iterator it=M.begin();it!=M.end();it++)
        {
            if(N[it->first]>0)
            {
                sum=sum+ abs(it->second - N[it->first]);
            }
            else
            {
                sum=sum+it->second;
                N.erase(it->first);
            }
        }
        for(std::map<int,int>::iterator it=N.begin();it!=N.end();it++)
        {
            if(M[it->first]==0)
            {
                sum=sum+it->second;
                M.erase(it->first);
            }
        }

        cout<<sum<<endl;


     }
}
