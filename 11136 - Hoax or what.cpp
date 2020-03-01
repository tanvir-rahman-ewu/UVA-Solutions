#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,v;

    map<int,int> m;

    while(scanf("%d",&n) && n)
    {
        long long sum=0;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);

            for(int j=0;j<a;j++)
            {
                scanf("%d",&v);
                m[v]++;
            }



            if(m.size()>1)
            {
                std::map<int,int>::iterator it1=m.begin();
                std::map<int,int>::reverse_iterator it2=m.rbegin();


                sum = sum + (it2->first-it1->first);

                m[it1->first]--;
                m[it2->first]--;


                if(!m[it1->first])
                {
                    m.erase(it1->first);
                }

                if(!m[it2->first])
                {
                    m.erase(it2->first);
                }


            }
            else if(m.size()==1)
            {
                std::map<int,int>::iterator it1=m.begin();

                m[it1->first]--;
                m[it1->first]--;

                if(!m[it1->first])
                {
                    m.erase(it1->first);
                }

            }

        }

        cout<<sum<<endl;

        m.clear();
    }
}
