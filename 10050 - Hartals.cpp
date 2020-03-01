#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,n,p,i,v;
    vector<int> m;
    vector<int> h;
    vector<int> fri;
    scanf("%d",&test_case);
    while(test_case--)
    {

        scanf("%d",&n);
        scanf("%d",&p);
        int fr=6;
        while(fr<=n)
        {
            fri.push_back(fr);
            fr=fr+7;
        }
        for(i=0;i<p;i++)
        {
            scanf("%d",&v);
            m.push_back(v);
        }

        for(i=0;i<m.size();i++)
        {
            int sum=0;
            while(sum<=n)
            {
                sum=sum+m[i];
                if(sum<=n)
                {
                    h.push_back(sum);
                }
            }
        }
        for(i=0;i<h.size();i++)
        {
           for(int j=i+1;j<h.size();j++)
           {
               if(h[i]==h[j])
               {
                   h.erase(h.begin()+j);
               }
           }
        }
        int s;
        s=h.size();
        for(int i=0;i<h.size();i++)
        {
            if(h[i]%7==0)
            {
                s--;
            }
            for(int j=0;j<fri.size();j++)
            {
                if(h[i]==fri[j])
                {
                    s--;
                }
            }
        }
        printf("%d\n",s);
        h.clear();
        m.clear();
        fri.clear();
    }
}
