#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,curr,curr1,val;
    vector<int> v;



    while(scanf("%d",&n) && n)
    {
        bool b=false,s=false;
        int c=0;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&val);
            v.push_back(val);
        }

        int x=v[0],y=v[1];
        v.push_back(v[0]);
        v.push_back(v[1]);

        if(x>y)
        {
            s=true;
        }
        else
        {
            b=true;
        }

        for(int i=1;i<v.size();i++)
        {
            curr1=v[i];
            curr=v[i-1];

            if(s && curr<curr1)
            {
                c++;

                s=false;
                b=true;
            }

            if(b && curr>curr1)
            {

                c++;
                s=true;
                b=false;
            }
        }
        cout<<c<<endl;
        v.clear();
    }
}
