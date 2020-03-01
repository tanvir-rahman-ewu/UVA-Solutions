#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,a,c=1;

    while(scanf("%d %d",&n,&q) && n && q)
    {
        printf("CASE# %d:\n",c);

        vector<int> v;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            v.push_back(a);
        }

        sort(v.begin(),v.end());



        for(int i=0;i<q;i++)
        {
            bool tag=false;

            scanf("%d",&a);

            for(int i=0;i<v.size();i++)
            {
                if(v[i]==a)
                {
                    printf("%d found at %d\n",a,i+1);

                    tag=true;
                    break;
                }
            }
            if(!tag)
            {
                printf("%d not found\n",a);
            }
        }
        c++;
    }
}
