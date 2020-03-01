#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,v;

    while(scanf("%d",&n) && n)
    {
        map<int,int> m;
        map< map<int,int> ,int> M;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<5;j++)
            {
                scanf("%d",&v);
                m[v];
            }
            M[m]++;
            m.clear();
        }

        std::map< map<int,int> ,int> :: iterator it;
        int max=0,count=0;

        for(it=M.begin();it!=M.end();it++)
        {
            if(it->second>max)
            {
                max=it->second;
            }
        }


        for(it=M.begin();it!=M.end();it++)
        {
            if(it->second==max)
            {
                count++;
            }
        }
        cout<<max*count<<endl;

    }
}
